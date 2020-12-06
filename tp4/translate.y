%{

#define YYDEBUG 1 

typedef union YYSTYPE {
struct pkg 
{     
	char *name;
	float value_float;
	int value_int;
	int type;
	char letter; 
} pkg;


}YYSTYPE;


  #include "yystype.h"
  #include "lex.yy.c"  
  #include <stdio.h>
  #include "symbol_table.h"
  #include "symbol_table.c"

  int proxIR = 0;
  int proxExprId = 0;
  int temp = 0;

  int yylex();
  void yyerror(char *s); 
  int global_type;
  char *global_id_name;
  int global_syntax_errors = 0;
  void printPkg(YYSTYPE *a)
  {
    printf("nome: %s\n", a->pkg.name);
    printf("value float: %f\n", a->pkg.value_float);
    printf("value int: %d\n", a->pkg.value_int);
    printf("type : %d\n", a->pkg.type);
    printf("letter %c \n", a->pkg.letter);

  }

struct expr{

	char *operand1;
	char operand2;
	char operator;
	char result;
};

struct expr exprTable[20]; 


char addToTable(struct pkg *a){
    temp++;
    printf("%d\n",proxExprId);
    exprTable[proxExprId].operand1 = a->name;
    printf("asds %s \n", a->name);
    // exprTable[proxExprId].operand2 = b;
    // exprTable[proxExprId].operator = o;
    // exprTable[proxExprId].result = proxExprId;
    proxExprId += 1;
    return temp;
}


  void gerar(YYSTYPE *identificador, YYSTYPE *a)
  {
    // printf("identificador.name(gerar) %s\n", identificador->pkg.name);
    // printf("a.name(gerar) %d\n", a->pkg.name);
    // printf("a.value_int(gerar) %d\n", a->pkg.value_int);
    // int symbolTableID = searchEntryAtSymbolTable(identificador->pkg.name);
    //  printf("symboltable[identicador].name(gerar) %s\n", identificador->pkg.name);
    // printf("t%s = \n", identificador->pkg.name);
    // printf("t%s = ", SymbolTable[symbolTableID].name);
    // printf("t%d = ", SymbolTable[symbolTableID].idIR);
    // if(a->pkg.type == TYPE_CHAR)
    //   printf("%c", a->pkg.letter);

    // else if(a->pkg.type == TYPE_INT)
    //   printf("%d", a->pkg.value_int);
    
    // else
    //   printf("%f", a->pkg.value_float);


    // printf("\n");
  }

  void multiplica(YYSTYPE *result, YYSTYPE *a, YYSTYPE *b) {
    if(a->pkg.type == b->pkg.type) {

      if(a->pkg.type == TYPE_INT) {

        result->pkg.type = TYPE_INT;
        result->pkg.value_int = a->pkg.value_int * b->pkg.value_int;
      }
    }
    else {
      
      result->pkg.type = -1;
    }
  }
  


  void chama(YYSTYPE* result, YYSTYPE* id, YYSTYPE* a, YYSTYPE* b, void (operacao)(YYSTYPE *result, YYSTYPE *a, YYSTYPE *b)) {
    global_type = getTypeAtSymbolTable(id->pkg.name, a->pkg.type, b->pkg.type);
  
    YYSTYPE resultOp;
    multiplica(&resultOp, a,b);
    if(resultOp.pkg.type == -1) {
      printf("Operação binária com tipos diferentes\n");
      exit(-1);
    }
    switch(global_type) { // Não é para ver o tipo em a->pkg.type ou b->pkg.type?

      case 2:
        result->pkg.value_int = a->pkg.value_int * b->pkg.value_int;
        break;
      case 3:
        result->pkg.letter = a->pkg.letter * b->pkg.letter;
        break;
      case 5:
        result->pkg.value_float = a->pkg.value_float * b->pkg.value_float;
        break;
      default:
        printf("Operação de tipos inválida\n");
        break;
    }

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
  | expr ASTERISCO expr { addToTable(&$<pkg>1); }
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
  : modificadorTipo identificador IGUAL expr ';' { addToTable(&$<pkg>1);}
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
  : identificador IGUAL expr ';' { addToTable(&$<pkg>1); };

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
    yydebug = 1;
  #endif
  initBlockList();
  yyparse();

  if(global_syntax_errors == 0) {
    printf("\nPrograma correto\n");
  }

  return 0;
}