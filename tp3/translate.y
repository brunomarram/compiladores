%{
#include <stdio.h>
int yylex();
void yyerror(char *s); // const char *s
%}

%union {
  float decimal;
  int boolean;
  int integer;
}

/* definitions */
%token ASTERISCO BARRA CHAPEU MENOS PERCENTUAL SHIFTLEFT SHIFTRIGHT OPERADORDOIDO  /*unários*/

%token DIFERENTE IGUAL IGUALIGUAL MAIOROUIGUAL MAIORQUE MAIS MENOROUIGUAL MENORQUE /*relacionais*/

%token MODIFICADORESPECIAL MODIFICADORSINAL MODIFICADORSOMENTELEITURA MODIFICADORTAMANHO MODIFICADORTIPO

%token EDOUBLE ELOGICO PIPE PIPEDOUBLE /*lógicos*/

%token ABREEXPRESSAO FECHAEXPRESSAO ABREESCOPO FECHAESCOPO /*blocos*/

/*tokens modificadores*/
%token VOLATILE REGISTER
%token DOUBLE INT CHAR FLOAT VOID BOOLEAN
%token SIGNED UNSIGNED
%token LONG SHORT
%token CONST

/*tokens operadores*/
%token ID
%token DEFAULT IF ELSE ELSEIF BREAK CASE CONTINUE RETURN SWITCH
%token DO WHILE FOR GOTO
%token LETTER POSITIVE NEGATIVE DECIMAL
%token SIZEOF

%start start_point
%% 
/* rules */ 

break 
  : BREAK ';' { /* vazio */ }
  ;

term 
  : LETTER | ID | POSITIVE | NEGATIVE | DECIMAL { /* vazio */ }
  ;

expr 
  : expr ASTERISCO expr { /* vazio */ }
  | expr BARRA expr { /* vazio */ }
  | expr CHAPEU expr { /* vazio */ }
  | expr DIFERENTE expr { /* vazio */ }
  | expr EDOUBLE expr { /* vazio */ }
  | expr ELOGICO expr { /* vazio */ }
  | expr IGUAL expr { /* vazio */ }
  | expr IGUALIGUAL expr { /* vazio */ }
  | expr MAIOROUIGUAL expr { /* vazio */ }
  | expr MAIORQUE expr { /* vazio */ }
  | expr MAIS expr { /* vazio */ }
  | expr MENOROUIGUAL expr { /* vazio */ }
  | expr MENORQUE expr { /* vazio */ }
  | expr MENOS expr { /* vazio */ }
  | expr PERCENTUAL expr { /* vazio */ }
  | expr PIPE expr { /* vazio */ }
  | expr PIPEDOUBLE expr { /* vazio */ }
  | expr SHIFTLEFT expr { /* vazio */ }
  | expr SHIFTRIGHT expr { /* vazio */ }
  | expr OPERADORDOIDO expr { /* vazio */ }
  | '(' expr ')' { /* vazio */ }
  | term { /* vazio */ }
  ;

case 
  : CASE expr ':' stmt ';' { /* vazio */ }
  | DEFAULT ':' stmt ';' { /* vazio */ }
  ;

continue 
  : CONTINUE ';' { /* vazio */ }
  ;

conditional 
  : IF ABREEXPRESSAO expr FECHAEXPRESSAO elseif { /* vazio */ }
  | IF ABREEXPRESSAO expr FECHAEXPRESSAO elseif ELSE ABREEXPRESSAO expr FECHAEXPRESSAO { /* vazio */ }
  ;

definicaoVariavel 
  : modificadoresVariaveis ID IGUAL expr ';' { /* vazio */ }
  ;

definicaoFuncao 
  : modificadoresFuncao ID ABREEXPRESSAO tipo_parametros FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO { /* vazio */ }
  ;

do : 
  DO ABREESCOPO stmt FECHAESCOPO WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ';' { /* vazio */ }
  ;

elseif : ELSE conditional { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

for 
  : FOR ABREEXPRESSAO stmt ';' expr ';' stmt FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO ';' { /* vazio */ }
  ;

goto 
  : GOTO label ';' { /* vazio */ }
  ;

label 
  : ID ':' { /* vazio */ }
  ;

modificadorSinal
  : MAIS { /* vazio */ }
  | MENOS { /* vazio */ }
  ;

modificadorTamanho
  : LONG { /* vazio */ }
  | SHORT { /* vazio */ }
  ;

modificadorTipo
  : DOUBLE { /* vazio */ }
  | INT { /* vazio */ }
  | CHAR { /* vazio */ }
  | FLOAT { /* vazio */ }
  ;

modificadorSomenteLeitura
  : CONST { /* vazio */ }
  ;

modificadorEspecial
  : VOLATILE { /* vazio */ }
  | REGISTER { /* vazio */ }
  ;

modificadoresFuncao 
  : modificadoresFuncao modificadoresFuncao { /* vazio */ }
  | modificadorSinal { /* vazio */ }
  | modificadorTamanho { /* vazio */ }
  | modificadorTipo { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

modificadoresVariaveis 
  : modificadoresVariaveis modificadoresVariaveis { /* vazio */ }
  | modificadorSinal { /* vazio */ }
  | modificadorEspecial { /* vazio */ }
  | modificadorSomenteLeitura { /* vazio */ }
  | modificadorTamanho { /* vazio */ }
  | modificadorTipo { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

tipo_parametros 
  : tipo_parametros ',' tipo_parametros { /* vazio */ }
  | modificadoresVariaveis ID { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

parametros
  : parametros ',' parametros { /* vazio */ }
  | term { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

return 
  : RETURN expr ';' { /* vazio */ }
  | RETURN ';' { /* vazio */ }
  ;

sizeof 
  : SIZEOF ABREEXPRESSAO ID FECHAEXPRESSAO ';' { /* vazio */ }
  ;

function_call
  : ID ABREEXPRESSAO parametros FECHAEXPRESSAO ';' { /* vazio */ }
  ;
 
stmt 
  : ID IGUAL expr ';' { /* vazio */ }
  | ID IGUAL ID ';' { /* vazio */ }
  | stmt ';' stmt { /* vazio */ }
  | while { /* vazio */ }
  | for { /* vazio */ }
  | switch { /* vazio */ }
  | goto { /* vazio */ }
  | break { /* vazio */ }
  | continue { /* vazio */ }
  | do { /* vazio */ }
  | conditional { /* vazio */ }
  | sizeof { /* vazio */ }
  | function_call { /* vazio */ }
  | return { /* vazio */ }
  ;

switch 
  : SWITCH ABREEXPRESSAO ID FECHAEXPRESSAO ABREESCOPO variosCase FECHAESCOPO { /* vazio */ }
  ;

variosCase 
  : variosCase variosCase ';' { /* vazio */ }
  | case ';' { /* vazio */ }
  | /*vazio*/ { /* vazio */ }
  ;

while 
  : WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO { /* vazio */ }
  ;

start_point
  : definicaoFuncao { /* vazio */ }
  | definicaoVariavel { /* vazio */ }
  ;

%% 

int lineno = 0;

/* auxiliary routines */
// #include "lex.yy.c"  
   
/* yacc error handler */
void yyerror(char *s) { // const char *s
  // fprintf(stderr, "%s\n", s);
  printf("%s\n", s);
  printf("line %d\n", lineno);
}

// int main(void) { 
//   return yyparse(); 
// }

void main() {
  yyparse();
}