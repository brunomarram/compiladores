%{

  #include "yystype.h"
  #include "expr_table.c"
  #include "lex.yy.c"  
  #include <stdio.h>
  #include <string.h>
  #include "symbol_table.h"
  #include "symbol_table.c"

  int yylex();
  void yyerror(char *s); 
  int global_type;
  char *global_id_name;
  int global_syntax_errors = 0;

  void printPkg(YYSTYPE *a) {
    printf("nome: %s\n", a->pkg.name);
    printf("value float: %f\n", a->pkg.value_float);
    printf("value int: %d\n", a->pkg.value_int);
    printf("type : %d\n", a->pkg.type);
    printf("letter %c \n", a->pkg.letter);
  }

  int checkType(struct pkg *a, struct pkg *b) {

    if(a->is_id == 1) {
      int symbolTableID = searchEntryAtSymbolTable(a->name);
      if(SymbolTable[symbolTableID].type == b->type)
        return 1;
    } else if (a->type == b->type)
      return 1;
    
    printf("\n\nErro semântico: %d e %d\n\n", a->type, b->type);
    return 0;

  }

%}

/* definitions */
%token START END

%token ASTERISCO BARRA CHAPEU MENOS PERCENTUAL SHIFTLEFT SHIFTRIGHT OPERADORDOIDO  /*unários*/

%token DIFERENTE IGUAL IGUALIGUAL MAIOROUIGUAL MAIORQUE MAIS MENOROUIGUAL MENORQUE /*relacionais*/

%token EDOUBLE ELOGICO PIPE PIPEDOUBLE /*lógicos*/

%token ABREEXPRESSAO FECHAEXPRESSAO ABREESCOPO FECHAESCOPO /*blocos*/

/*tokens modificadores*/
%token VOLATILE REGISTER
%token DOUBLE INT CHAR FLOAT VOID TRUE FALSE
%token SIGNED UNSIGNED
%token LONG SHORT
%token CONST

/*tokens operadores*/
%token <a.name> ID
%token <a.letter> LETTER
%token <a.value_int> POSITIVE
%token <a.value_int> NEGATIVE
%token <a.value_float> DECIMAL
%token DEFAULT IF ELSE ELSEIF BREAK CASE CONTINUE RETURN SWITCH
%token DO WHILE FOR GOTO
%token SIZEOF

%start start_point
%% 

break 
  : BREAK { /* vazio */ }
  ;

term
  : LETTER { }
  | identificador {}
  | DECIMAL  {}
  | POSITIVE {}
  | NEGATIVE {}
  ;

expr 
  : ABREEXPRESSAO expr FECHAEXPRESSAO {  }
  | expr ASTERISCO expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "*"); else exit(1); }
  | expr BARRA expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "/"); else exit(1); }  
  | expr CHAPEU expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr DIFERENTE expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr EDOUBLE expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr ELOGICO expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr IGUALIGUAL expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr MAIORQUE expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, ">"); else exit(1); }
  | expr MAIS expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "+"); else exit(1); }
  | expr MENOROUIGUAL expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr MAIOROUIGUAL expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr MENORQUE expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "<"); else exit(1); }
  | expr MENOS expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "-"); else exit(1); }
  | expr PERCENTUAL expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "%"); else exit(1); }
  | expr PIPE expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "|"); else exit(1); }
  | expr PIPEDOUBLE expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr SHIFTLEFT expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr SHIFTRIGHT expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | expr OPERADORDOIDO expr { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, " "); else exit(1); }
  | term
  ;

case 
  : CASE expr ':' stmt ';' { /* vazio */ }
  | DEFAULT ':' stmt ';' { /* vazio */ }
  ;

continue 
  : CONTINUE { /* vazio */ }
  ;

conditional 
  : IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco {}
  | IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif { /* vazio */ }
  | IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco ELSE bloco { /* vazio */ }
  ;

elseif 
  : ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco { /* vazio */ }
  | ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif { /* vazio */ }
  | ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif ELSE bloco { /* vazio */ }
  ;

identificador
  : ID { global_id_name = strdup($<pkg.name>1);installSymbolAtSymbolTable($<pkg.name>1, global_type); } 
  ;

definicaoVariavel 
  : modificadorTipo identificador IGUAL expr ';' { if(checkType(&$<pkg>2, &$<pkg>4)) addToTable(&$<pkg>2, &$<pkg>4, "<-"); else exit(1); }
  ;

definicaoFuncao 
  : modificadorTipo identificador ABREEXPRESSAO tipoParametros FECHAEXPRESSAO bloco { /* vazio */ }
  ;

do : 
  DO ABREESCOPO stmtLoop FECHAESCOPO WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ';' { /* vazio */ }
  ;


for 
  : FOR ABREEXPRESSAO stmt expr ';' stmt FECHAEXPRESSAO blocoLoop { /* vazio */ }
  ;

goto 
  : GOTO label ';' { /* vazio */ }
  ;

label 
  : identificador ':' { /* vazio */ }
  ;


modificadorTipo 
  : CHAR      {global_type = TYPE_CHAR;}
  | VOID      {global_type = TYPE_VOID;}
  | FLOAT     {global_type = TYPE_FLOAT;}
  | DOUBLE    {global_type = TYPE_DOUBLE;}
  | INT       {global_type = TYPE_INT;}
  ;


tipoParametros 
  : tipoParametros ',' tipoParametros { /* vazio */ }
  | modificadorTipo identificador { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

parametros
  : parametros ',' parametros { /* vazio */ }
  | term { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

return 
  : RETURN expr { /* vazio */ }
  | RETURN functionCall { /* vazio */ }
  | RETURN { /* vazio */ }
  ;

sizeof 
  : SIZEOF ABREEXPRESSAO identificador FECHAEXPRESSAO { /* vazio */ }
  ;

functionCall
  : identificador ABREEXPRESSAO parametros FECHAEXPRESSAO { /* vazio */ }
  ;
 
stmtList
  : stmt
  | stmt stmtList
  ;

stmtListLoop
  : stmtLoop
  | stmtLoop stmtListLoop
  ;

assigment
  : identificador IGUAL expr ';' { if(checkType(&$<pkg>1, &$<pkg>3)) addToTable(&$<pkg>1, &$<pkg>3, "="); else exit(1); };

stmt 
  : while stmt { /* vazio */ }
  | definicaoFuncao stmt { /* vazio */ }
  | definicaoVariavel stmt {  }
  | assigment stmt { }
  | for stmt { /* vazio */ }
  | switch stmt { /* vazio */ }
  | goto { /* vazio */ }
  | do stmt { /* vazio */ }
  | conditional stmt { /* vazio */ }
  | sizeof stmt { /* vazio */ }
  | functionCall stmt { /* vazio */ }
  | return ';' { /* vazio */ }
  | /* usado para permitir mais de um stmt dentro de um escopo */ { /* vazio */ }
  ;

switch 
  : SWITCH ABREEXPRESSAO identificador FECHAEXPRESSAO ABREESCOPO variosCase FECHAESCOPO { /* vazio */ }
  ;

variosCase 
  : variosCase variosCase ';' { /* vazio */ }
  | case ';' { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

bloco
  : ABREESCOPO stmtList FECHAESCOPO
  | stmt
  ;

blocoLoop
  : ABREESCOPO stmtListLoop FECHAESCOPO
  | stmtLoop
  ;

stmtLoop 
  : while stmtLoop { /* vazio */ }
  | definicaoFuncao stmtLoop { /* vazio */ }
  | definicaoVariavel stmtLoop { /* vazio */ }
  | assigment stmt
  | for stmtLoop { /* vazio */ }
  | switch stmtLoop { /* vazio */ }
  | goto { /* vazio */ }
  | break ';' { /* vazio */ }
  | continue ';' { /* vazio */ }
  | do stmtLoop { /* vazio */ }
  | conditional stmtLoop { /* vazio */ }
  | sizeof stmtLoop { /* vazio */ }
  | functionCall stmtLoop { /* vazio */ }
  | return ';' { /* vazio */ }
  | /* usado para permitir mais de um stmt dentro de um escopo */ { /* vazio */ }
  ;

while 
  : WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ABREESCOPO stmtLoop FECHAESCOPO { /* vazio */ }
  ;

start_point
  : START stmtList END
  ;

%% 

int lineno = 0;

/* auxiliary routines */
   
/* yacc error handler */
void yyerror(char *s) { // const char *s
  // fprintf(stderr, "%s\n", s);
  printf("\n\nErro na linha: %d %s %s\n", lineno, s, yytext);
  global_syntax_errors++;
}

int main() {

  #if YYDEBUG
    yydebug = 0;
  #endif

  printf("\n");

  initBlockList();
  yyparse();

  if(global_syntax_errors == 0) {
    printf("\nPrograma correto\n");
  }

  return 0;
}