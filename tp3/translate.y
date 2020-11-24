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
%}

%union {
  char *name;
  float value_float;
  int value_int;
  int tipo;
  char letter;

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
%token <name> ID
%token <letter> LETTER
%token <value_int> POSITIVE
%token <value_int> NEGATIVE
%token <value_float> DECIMAL
%token DEFAULT IF ELSE ELSEIF BREAK CASE CONTINUE RETURN SWITCH
%token DO WHILE FOR GOTO
%token SIZEOF

%start start_point
%% 

break 
  : BREAK { /* vazio */ }
  ;

positiveNegative
  : POSITIVE {$<value_int>$ = $<value_int>1;}
  | NEGATIVE {$<value_int>$ = $<value_int>1;}
  ;
  
decimal
  : DECIMAL {$<value_float>$ = $<value_float>1;}
  ;

id 
  : ID {$<name>$ = $<name>1;}
  ;

letter
  : LETTER {$<letter>$ = $<letter>1;}
  ;

term
  : LETTER { }
  | ID {}
  | DECIMAL  {}
  | POSITIVE {}
  | NEGATIVE {}
  ;

expr 
  : expr ASTERISCO expr { /* vazio */ }
  | expr BARRA expr { /* vazio */ }
  | expr CHAPEU expr { /* vazio */ }
  | expr DIFERENTE expr { /* vazio */ }
  | expr EDOUBLE expr { /* vazio */ }
  | expr ELOGICO expr { /* vazio */ }
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
  | ID { /* searchEntryAtSymbolTable($<name>1); */ }
  | LETTER { /* vazio */ }
  | POSITIVE { /* vazio */ }
  | NEGATIVE { /* vazio */ }
  | DECIMAL { /* vazio */ }
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
  | /*vazio*/
  ;


definicaoVariavel 
  : modificadorTipo ID IGUAL expr { global_id_name = strdup($<name>1);installSymbolAtSymbolTable($<name>1, $<value_int>2); }
  ;

definicaoFuncao 
  : modificadorTipo ID ABREEXPRESSAO tipoParametros FECHAEXPRESSAO bloco { /* installSymbolAtSymbolTable($<integer>1, $<name>2); */ }
  ;

do : 
  DO ABREESCOPO stmt FECHAESCOPO WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ';' { /* vazio */ }
  ;


for 
  : FOR ABREEXPRESSAO stmt ';' expr ';' stmt FECHAEXPRESSAO bloco { /* vazio */ }
  ;

goto 
  : GOTO label ';' { /* vazio */ }
  ;

label 
  : ID ':' { /* install_label($<name>1); */ }
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
  | modificadorTipo ID { /* vazio */ }
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
  : SIZEOF ABREEXPRESSAO ID FECHAEXPRESSAO { /* vazio */ }
  ;

functionCall
  : ID ABREEXPRESSAO parametros FECHAEXPRESSAO { /* vazio */ }
  ;
 
stmtList
  : stmt ';'
  | stmt ';' stmtList
  ;

stmt 
  : while { /* vazio */ }
  | expr IGUAL expr { /* change_assigment($<word>1, $<tad_symbol_table>3); */ }
  | for { /* vazio */ }
  | switch { /* vazio */ }
  | goto { /* vazio */ }
  | break { /* vazio */ }
  | continue { /* vazio */ }
  | do { /* vazio */ }
  | conditional { /* vazio */ }
  | sizeof { /* vazio */ }
  | functionCall { /* vazio */ }
  | return { /* vazio */ }
  | definicaoFuncao { /* vazio */ }
  | definicaoVariavel { /* vazio */ }
  ;

switch 
  : SWITCH ABREEXPRESSAO ID FECHAEXPRESSAO ABREESCOPO variosCase FECHAESCOPO { /* vazio */ }
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

while 
  : WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO { /* vazio */ }
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
  printf("\n\nErro na linha: %d %s %s", lineno, s, yytext);
}

int main() {
  initBlockList();
  if(!yyparse()) printf("\n\nPrograma correto\n");
  else printf("\n\nPrograma errado\n");
  return 0;
}