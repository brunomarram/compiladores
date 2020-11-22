%{
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <math.h>
   #include "tabela.h"
   #include "tabela.c"

   int yylex(void);
   void yyerror(char *s);
   extern int yylineno; /* Variável responsável por armazenar a linha atual do arquivo fonte */
   int tipo_id_atual; /* Variável responsável por armazenar o tipo do identificador atual */
   int ocorreu_erro = 0; /* Variável responsável por sinalizar se houve ou não um erro (não exibir as tabelas) */

   int parametro_atual = 0; /* Variável responsável por armazenar o índice referente ao parâmetro atual do procedimento atual */
   int procedimento_atual = 0; /* Variável responsável por armazenar o índice referente ao procedimento atual na tabela de procedimentos */
   int tipo_procedimento_atual; /* Variável responsável por armazenar o tipo do procedimento atual */
   char *nome_parametro_atual; /* Variável responsável por armazenar o nome do identificador atual */
   int dentro_procedimento = 0; /* Variável responsável por indicar quando um procedimento está sendo definido */
%}

%union {
    int valor;
    char *ident;
};

%token <valor> FALSE
%token <valor> TRUE
%token <valor> NUMBER
%token <valor> CONST_CHAR
%token <ident> IDENT
%token _BEGIN
%token BOOLEAN
%token CHAR
%token DO
%token ELSE
%token END
%token ENDIF
%token ENDWHILE
%token EXIT
%token IF
%token INTEGER
%token PROCEDURE
%token PROGRAM
%token READ
%token REFERENCE
%token REPEAT
%token RETURN
%token THEN
%token TYPE
%token UNTIL
%token VALUE
%token WHILE
%token WRITE

%left OR
%left AND
%left NOT
%left NE EQ LE LT GT GE
%left PLUS MINUS
%left MULT DIV
%right EXP
%left UMINUS
%nonassoc ATR

%%
program:
                      PROGRAM M2 declaracoes M0 bloco                   {}
                      ;

bloco:
                      _BEGIN lista_de_comandos M0 END                    {}
                      ;

declaracoes:
                      declaracoes M0 declaracao ';'                     {}
                      | vazio                                           {}
                      ;

declaracao:
                      decl_de_var                                       {}
                      | def_de_tipo                                     {}
                      | decl_de_proc                                    {}
                      ;

decl_de_var:
                      tipo ':' lista_de_ids                             {}
                      ;

tipo:
                      INTEGER                                           {tipo_id_atual = T_INT;}
                      | BOOLEAN                                         {tipo_id_atual = T_BOOLEAN;}
                      | CHAR                                            {tipo_id_atual = T_CHAR;}
                      | tipo_definido                                   {}
                      ;

M0:
                      vazio                                             {}
                      ;

M1:
                      vazio                                             {}
                      ;

M2:
                      vazio                                             {}
                      ;

def_de_tipo:
                      TYPE nome_do_tipo M0 '=' M1 definicao_de_tipo     {}
                      ;

nome_do_tipo:
                      identificador                                     {}
                      ;

definicao_de_tipo:
                      '(' limites ')' tipo                              {}
                      ;

limites:
                      inteiro ':' inteiro                               {}
                      ;

tipo_definido:
                      identificador                                     {}
                      ;

decl_de_proc:
                      proc_cab proc_corpo                               {dentro_procedimento = 0;}
                      ;

proc_cab:
                      tipo_retornado PROCEDURE M0 nome_do_proc
                      espec_de_parametros                               {}
                      ;

proc_corpo:
                      ':' declaracoes M0 bloco emit_return              {}
                      | emit_return                                     {}
                      ;

emit_return:
                      vazio                                             {}
                      ;

lista_de_parametros:
                      parametro                                         {}
                      | lista_de_parametros ',' parametro               {}
                      ;

tipo_retornado :
                      INTEGER                                           {dentro_procedimento = 1; tipo_procedimento_atual = T_INT;}
                      | BOOLEAN                                         {dentro_procedimento = 1; tipo_procedimento_atual = T_BOOLEAN;}
                      | CHAR                                            {dentro_procedimento = 1; tipo_procedimento_atual = T_CHAR;}
                      | vazio                                           {dentro_procedimento = 1; tipo_procedimento_atual = T_VOID;}
                      ;

parametro:
                      modo tipo ':' identificador                       {Instala_Parametro(procedimento_atual, tipo_id_atual, $<ident>4);
                                                                         parametro_atual = 0;
                                                                        }
                      ;

modo:
                      VALUE                                             {}
                      | REFERENCE                                       {}
                      ;

nome_do_proc:
                      identificador                                     {Instala_Procedimento($<ident>1, tipo_procedimento_atual);
                                                                         procedimento_atual = Recupera_Procedimento_Atual($<ident>1);
                                                                        }
                      ;

lista_de_comandos:
                      comando                                           {}
                      | lista_de_comandos ';' M0 comando                {}
                      ;

lista_de_ids:
                      identificador                                     {if(dentro_procedimento == 0) Instala($<ident>1, tipo_id_atual);}
                      | lista_de_ids ',' identificador                  {if(dentro_procedimento == 0) Instala($<ident>3, tipo_id_atual);}
                      ;

vazio:
                      /* epsilon */                                     {}
                      ;

espec_de_parametros:
                      '(' lista_de_parametros ')'                       {}
                      | vazio                                           {}
                      ;

comando:
                      comando_de_atribuicao                             {}
                      | comando_while                                   {}
                      | comando_repeat                                  {}
                      | comando_if                                      {}
                      | comando_read                                    {}
                      | comando_write                                   {}
                      | comando_return                                  {}
                      | comando_exit                                    {}
                      | chamada_de_proc                                 {}
                      | rotulo ':' comando                              {}
                      ;

comando_de_atribuicao:
                      variavel ATR expr                                 {if(dentro_procedimento == 0) Atualiza_Valor_Identificador($<ident>1, $<valor>3);}
                      ;

comando_while:
                      WHILE M0 expr DO M0 lista_de_comandos ENDWHILE    {}
                      ;

comando_repeat:
                      REPEAT M0 lista_de_comandos UNTIL M0 expr         {}
                      ;

comando_if:
                      IF expr THEN M0 lista_de_comandos ENDIF           {}
                      | IF expr THEN M0 lista_de_comandos M1
                        ELSE M0 lista_de_comandos ENDIF                 {}
                      ;

comando_read:
                      READ variavel                                     {}
                      ;

comando_write:
                      WRITE expr                                        {}
                      ;

comando_return:
                      RETURN expr                                       {}
                      ;

comando_exit:
                      EXIT identificador                                {}
                      ;

rotulo:
                      identificador                                     {}
                      ;

variavel:
                      identificador                                     {$<ident>$ = strdup($<ident>1);}
                      | chamada_ou_indexacao                            {}
                      ;

chamada_ou_indexacao:
                      indices ')'                                       {if(parametro_atual != tabela_procedimentos[procedimento_atual].numero_parametros) {
                                                                            printf("\nerro semântico próximo à linha %d: quantidade insuficiente de parâmetros no procedimento %s\n", yylineno, tabela_procedimentos[procedimento_atual].nome);
                                                                            exit(1);
                                                                         }
                                                                        }
                      ;

chamada_de_proc:
                      identificador                                     {}
                      | chamada_ou_indexacao                            {}
                      ;

indices:
                      variavel2 '(' expr                                {procedimento_atual = Recupera_Procedimento_Atual($<ident>1);
                                                                         parametro_atual = 0;
                                                                         Confere_Tipo_Parametro(nome_parametro_atual, procedimento_atual, parametro_atual);
                                                                         parametro_atual++;
                                                                        }
                      | indices ',' expr                                {Confere_Tipo_Parametro(nome_parametro_atual, procedimento_atual, parametro_atual);
                                                                         parametro_atual++;
                                                                        }
                      ;

variavel2:
                      identificador                                     {$<ident>$ = strdup($<ident>1);}
                      ;

expr:
                      expr OR M0 expr                                   {$<valor>$ = $<valor>1 || $<valor>3; Confere_Overflow($<valor>$);}
                      | expr AND M0 expr                                {$<valor>$ = $<valor>1 && $<valor>3; Confere_Overflow($<valor>$);}
                      | NOT expr                                        {$<valor>$ = !$<valor>1; Confere_Overflow($<valor>$);}
                      | expr NE expr                                    {$<valor>$ = $<valor>1 != $<valor>3; Confere_Overflow($<valor>$);}
                      | expr EQ expr                                    {$<valor>$ = $<valor>1 == $<valor>3; Confere_Overflow($<valor>$);}
                      | expr LT expr                                    {$<valor>$ = $<valor>1 < $<valor>3; Confere_Overflow($<valor>$);}
                      | expr GT expr                                    {$<valor>$ = $<valor>1 > $<valor>3; Confere_Overflow($<valor>$);}
                      | expr GE expr                                    {$<valor>$ = $<valor>1 >= $<valor>3; Confere_Overflow($<valor>$);}
                      | expr LE expr                                    {$<valor>$ = $<valor>1 <= $<valor>3; Confere_Overflow($<valor>$);}
                      | expr PLUS expr                                  {$<valor>$ = $<valor>1 + $<valor>3; Confere_Overflow($<valor>$);}
                      | expr MINUS expr                                 {$<valor>$ = $<valor>1 - $<valor>3; Confere_Overflow($<valor>$);}
                      | expr MULT expr                                  {$<valor>$ = $<valor>1 * $<valor>3; Confere_Overflow($<valor>$);}
                      | expr DIV expr                                   {if($<valor>3 == 0) {
                                                                           printf("\nerro semântico próximo à linha %d: divisão por zero\n", yylineno);
                                                                           exit(1);
                                                                         }
                                                                         $<valor>$ = $<valor>1 / $<valor>3;
                                                                         Confere_Overflow($<valor>$);
                                                                        }
                      | expr EXP expr                                   {$<valor>$ = pow($<valor>1, $<valor>3); Confere_Overflow($<valor>$);}
                      | UMINUS expr %prec UMINUS                        {$<valor>$ = -$<valor>2; Confere_Overflow($<valor>$);}
                      | variavel                                        {if(dentro_procedimento == 0) {
                                                                           int valor_variavel = Recupera_Valor_Identificador($<ident>1);
                                                                           $<valor>$ = valor_variavel;
                                                                           Confere_Overflow($<valor>$);
                                                                         }
                                                                         else
                                                                           $<valor>$ = 0;
                                                                         nome_parametro_atual = strdup($<ident>1);
                                                                        }
                      | constante                                       {$<valor>$ = $<valor>1;}
                      | '('expr')'                                      {}
                      ;

constante:
                      int_ou_char                                       {$<valor>$ = $<valor>1;}
                      | booleano                                        {$<valor>$ = $<valor>1;}
                      ;

int_ou_char:
                      inteiro                                           {$<valor>$ = $<valor>1;}
                      | CONST_CHAR                                      {$<valor>$ = $1;}
                      ;

inteiro:
                      NUMBER                                            {$<valor>$ = $1;}
                      ;

booleano:
                      TRUE                                              {$<valor>$ = 1;}
                      | FALSE                                           {$<valor>$ = 0;}
                      ;

identificador:
                      IDENT                                             {$<ident>$ = strdup($<ident>1);}
                      ;

%%
/* Procedimento para informar a ocorrência de caracteres inválidos */
void yyerror(char *s) {
    printf("\n\nerro sintático próximo à linha %d\n", yylineno);
    ocorreu_erro++;
}

int main(void){
    iniciaListaNO();
    printf("%d\t", yylineno);
    yyparse();
    if(ocorreu_erro == 0) {
      printf("\n\nPrograma sintaticamente correto\n");
      Imprime_Tabela();
      Imprime_Tabela_Procedimentos();
    }
    return 0;
}
