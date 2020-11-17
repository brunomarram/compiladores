/* definitions */

%token ASTERISCO BARRA CHAPEU MENOS PERCENTUAL SHIFTLEFT SHIFTRIGHT OPERADORDOIDO  /*unários*/

%token DIFERENTE IGUAL IGUALIGUAL MAIOROUIGUAL MAIORQUE MAIS MENOROUIGUAL MENORQUE /*relacionais*/

%token EDOUBLE ELOGICO PIPE PIPEDOUBLE /*lógicos*/

%token ABREEXPRESSAO FECHAEXPRESSAO ABREESCOPO FECHAESCOPO /*blocos*/

%token VOLATILE REGISTER
%token DOUBLE INT CHAR FLOAT VOID
%token SIGNED UNSIGNED
%token LONG SHORT
%token CONST

/*tokens indefinidos*/
%token ID
%token DEFAULT IF ELSE ELSEIF BREAK CASE CONTINUE RETURN SWITCH
%token DO WHILE FOR GOTO
%token LETTER POSITIVE NEGATIVE DECIMAL
%token SIZEOF

%start start_point
%% 
/* rules */ 

break 
  : BREAK ';'
  ;

term 
  : LETTER | ID | POSITIVE | NEGATIVE | DECIMAL
  ;

expr 
  : expr ASTERISCO expr
  | expr BARRA expr
  | expr CHAPEU expr
  | expr DIFERENTE expr
  | expr EDOUBLE expr
  | expr ELOGICO expr
  | expr IGUAL expr
  | expr IGUALIGUAL expr
  | expr MAIOROUIGUAL expr
  | expr MAIORQUE expr
  | expr MAIS expr
  | expr MENOROUIGUAL expr
  | expr MENORQUE expr
  | expr MENOS expr
  | expr PERCENTUAL expr
  | expr PIPE expr
  | expr PIPEDOUBLE expr
  | expr SHIFTLEFT expr
  | expr SHIFTRIGHT expr
  | expr OPERADORDOIDO expr
  | '(' expr ')'
  | term
  ;

case 
  : CASE expr ':' stmt ';'
  | DEFAULT ':' stmt ';'
  ;

continue 
  : CONTINUE ';'
  ;

conditional 
  : IF ABREEXPRESSAO expr FECHAEXPRESSAO elseif
  | IF ABREEXPRESSAO expr FECHAEXPRESSAO elseif ELSE ABREEXPRESSAO expr FECHAEXPRESSAO
  ;

definicaoVariavel 
  : modificadoresVariaveis ID IGUAL expr ';'
  ;

definicaoFuncao 
  : modificadoresFuncao ID ABREEXPRESSAO tipo_parametros FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO
  ;

do : 
  DO ABREESCOPO stmt FECHAESCOPO WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ';' 
  ;

elseif : ELSE conditional
  | /*vazio*/ 
  ;

for 
  : FOR ABREEXPRESSAO stmt ';' expr ';' stmt FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO ';'
  ;

goto 
  : GOTO label ';'
  ;

label 
  : ID ':'
  ;

modificadorSinal
  : MAIS
  | MENOS
  ;

modificadorTamanho
  : LONG
  | SHORT
  ;

modificadorTipo
  : DOUBLE
  | INT
  | CHAR
  | FLOAT
  ;

modificadorSomenteLeitura
  : CONST
  ;

modificadorEspecial
  : VOLATILE
  | REGISTER
  ;

modificadoresFuncao 
  : modificadoresFuncao modificadoresFuncao
  | modificadorSinal
  | modificadorTamanho
  | modificadorTipo
  | /*vazio*/
  ;

modificadoresVariaveis 
  : modificadoresVariaveis modificadoresVariaveis
  | modificadorSinal
  | modificadorEspecial
  | modificadorSomenteLeitura
  | modificadorTamanho
  | modificadorTipo
  | /*vazio*/
  ;

tipo_parametros 
  : tipo_parametros ',' tipo_parametros
  | modificadoresVariaveis ID
  | /*vazio*/
  ;

parametros
  : parametros ',' parametros
  | term
  | /*vazio*/
  ;

return 
  : RETURN expr ';'
  | RETURN ';'
  ;

sizeof 
  : SIZEOF ABREEXPRESSAO ID FECHAEXPRESSAO ';'
  ;

function_call
  : ID ABREEXPRESSAO parametros FECHAEXPRESSAO ';'
  ;
 
stmt 
  : ID IGUAL expr ';'
  | ID IGUAL ID ';'
  | stmt ';' stmt
  | while
  | for
  | switch
  | goto
  | break
  | continue
  | do
  | conditional
  | sizeof
  | function_call
  | return
  ;

switch 
  : SWITCH ABREEXPRESSAO ID FECHAEXPRESSAO ABREESCOPO variosCase FECHAESCOPO
  ;

variosCase 
  : variosCase variosCase ';'
  | case ';'
  | /*vazio*/
  ;

while 
  : WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO
  ;

start_point
  : definicaoFuncao
  | definicaoVariavel
  ;

%% 

/* auxiliary routines */
#include "lex.yy.c"  
   
/* yacc error handler */
void yyerror(char * s) {
  fprintf (stderr, "%s\n", s); 
}  

int main(void) { 
  return yyparse(); 
}