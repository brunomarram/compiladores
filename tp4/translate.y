%{
  #include "lex.yy.c"  
  #include <stdio.h>
  #include "symbol_table.h"
  #include "symbol_table.c"

  int yylex();
  void yyerror(char *s); // const char *s
  int global_type;
  char *global_id_name;
  int global_syntax_errors = 0;

  typedef struct pkg{
    char *name;
    float value_float;
    int value_int;
    int type;
    char letter;
  }pkg;

  void chama(pkg* result, pkg* id, pkg* a, pkg* b, char operacao) {
    global_type = getTypeAtSymbolTable(id->name, a->type, b->type);

    switch(global_type) {
      case 2:
        result->value_int = a->value_int * b->value_int;
        break;
      case 3:
        result->letter = a->letter * b->letter;
        break;
      case 5:
        result->value_float = a->value_float * b->value_float;
        break;
      default:
        printf("Operação de tipos inválida\n");
        break;
    }

    printf("|| %d ", result->value_int);
  }
%}

%union {
  struct {
    char *name;
    float value_float;
    int value_int;
    int type;
    char letter;
  }a;
}

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
  : expr ASTERISCO expr { chama(&$<a>$, &$<a>0, &$<a>1, &$<a>3, '*'); }
  | expr BARRA expr {  }
  | expr CHAPEU expr {  }
  | expr DIFERENTE expr {  }
  | expr EDOUBLE expr {  }
  | expr ELOGICO expr {  }
  | expr IGUALIGUAL expr { /* vazio *name */ }
  | expr MAIORQUE expr {  }
  | expr MAIS expr {  }
  | expr MENOROUIGUAL expr {  }
  | expr MAIOROUIGUAL expr {  }
  | expr MENORQUE expr {  }
  | expr MENOS expr {  }
  | expr PERCENTUAL expr {  }
  | expr PIPE expr {  }
  | expr PIPEDOUBLE expr {  }
  | expr SHIFTLEFT expr {  }
  | expr SHIFTRIGHT expr {  }
  | expr OPERADORDOIDO expr {  }
  | ABREEXPRESSAO expr FECHAEXPRESSAO {  }
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
  : IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco { /* vazio */ }
  | IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif { /* vazio */ }
  | IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco ELSE bloco { /* vazio */ }
  ;

elseif 
  : ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco { /* vazio */ }
  | ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif { /* vazio */ }
  | ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif ELSE bloco { /* vazio */ }
  ;

identificador
  : ID { global_id_name = strdup($<a.name>1);installSymbolAtSymbolTable($<a.name>1, global_type); }
  ;

definicaoVariavel 
  : modificadorTipo identificador IGUAL expr ';' { /* vazio */ }
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

stmt 
  : while stmt { /* vazio */ }
  | identificador IGUAL expr ';' { /* vazio */ }
  | for stmt { /* vazio */ }
  | switch stmt { /* vazio */ }
  | goto { /* vazio */ }
  | do stmt { /* vazio */ }
  | conditional stmt { /* vazio */ }
  | sizeof stmt { /* vazio */ }
  | functionCall stmt { /* vazio */ }
  | return ';' { /* vazio */ }
  | definicaoFuncao stmt { /* vazio */ }
  | definicaoVariavel stmt { /* vazio */ }
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
  | expr IGUAL expr ';' { /* vazio */ }
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
  | definicaoFuncao stmtLoop { /* vazio */ }
  | definicaoVariavel stmtLoop { /* vazio */ }
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
  printf("\n--- PROGRAMA EM FLORESTROLL ---\n");
  initBlockList();
  yyparse();

  if(global_syntax_errors == 0) {
    printSymbolTable();
    printf("\nPrograma correto\n");
  }

  return 0;
}