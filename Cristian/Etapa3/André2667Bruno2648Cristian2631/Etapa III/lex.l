%{
   #include <stdlib.h>
   #include <string.h>
   #include "y.tab.h"
   void yyerror_lex(char *s);
%}
%option noyywrap
%option yylineno

/* definicoes regulares */
delim                     [ \t]
digito                    [0-9]
letra                     [a-zA-Z]
ws                        {delim}+

comentario                "/*"(.|\n)*"*/"
caractere                 \'{letra}\'
inteiro_positivo          {digito}+
inteiro_negativo          \-{inteiro_positivo}
identificador             {letra}({digito}|{letra}){0,31}

%%
{ws}                      {printf("%s", yytext);}
\n                        {printf("\n%d\t", yylineno);}
{comentario}              {}

"("                       {printf("%s", yytext); return('(');}
")"                       {printf("%s", yytext); return(')');}
":"                       {printf("%s", yytext); return(':');}
";"                       {printf("%s", yytext); return(';');}
","                       {printf("%s", yytext); return(',');}

"|"                       {printf("%s", yytext); return(OR);}
"&"                       {printf("%s", yytext); return(AND);}
"not"                     {printf("%s", yytext); return(NOT);}

"not="                    {printf("%s", yytext); return(NE);}
"="                       {printf("%s", yytext); return(EQ);}
"<="                      {printf("%s", yytext); return(LE);}
"<"                       {printf("%s", yytext); return(LT);}
">"                       {printf("%s", yytext); return(GT);}
">="                      {printf("%s", yytext); return(GE);}

"+"                       {printf("%s", yytext); return(PLUS);}
"-"                       {printf("%s", yytext); return(MINUS);}
"*"                       {printf("%s", yytext); return(MULT);}
"/"                       {printf("%s", yytext); return(DIV);}
"**"                      {printf("%s", yytext); return(EXP);}

"false"                   {printf("%s", yytext); yylval.valor = 0; return(FALSE);}
"true"                    {printf("%s", yytext); yylval.valor = 1; return(TRUE);}
{caractere}               {printf("%s", yytext); yylval.valor = yytext[1]; return(CONST_CHAR);}
{inteiro_positivo}        {printf("%s", yytext); yylval.valor = atoi(yytext); return(NUMBER);}
{inteiro_negativo}        {printf("%s", yytext); return(UMINUS); yylval.valor = atoi(yytext); return(NUMBER);}

":="                      {printf("%s", yytext); return(ATR);}
"begin"                   {printf("%s", yytext); return(_BEGIN);}
"boolean"                 {printf("%s", yytext); return(BOOLEAN);}
"char"                    {printf("%s", yytext); return(CHAR);}
"do"                      {printf("%s", yytext); return(DO);}
"else"                    {printf("%s", yytext); return(ELSE);}
"end"                     {printf("%s", yytext); return(END);}
"endif"                   {printf("%s", yytext); return(ENDIF);}
"endwhile"                {printf("%s", yytext); return(ENDWHILE);}
"exit"                    {printf("%s", yytext); return(EXIT);}
"if"                      {printf("%s", yytext); return(IF);}
"integer"                 {printf("%s", yytext); return(INTEGER);}
"procedure"               {printf("%s", yytext); return(PROCEDURE);}
"program"                 {printf("%s", yytext); return(PROGRAM);}
"read"                    {printf("%s", yytext); return(READ);}
"reference"               {printf("%s", yytext); return(REFERENCE);}
"repeat"                  {printf("%s", yytext); return(REPEAT);}
"return"                  {printf("%s", yytext); return(RETURN);}
"then"                    {printf("%s", yytext); return(THEN);}
"type"                    {printf("%s", yytext); return(TYPE);}
"until"                   {printf("%s", yytext); return(UNTIL);}
"value"                   {printf("%s", yytext); return(VALUE);}
"while"                   {printf("%s", yytext); return(WHILE);}
"write"                   {printf("%s", yytext); return(WRITE);}

{identificador}           {printf("%s", yytext); yylval.ident = strdup(yytext); return (IDENT);}

.                         {yyerror_lex(yytext);}

%%
/* Procedimento para informar a ocorrência de caracteres inválidos */
void yyerror_lex(char *s) {
    printf("\n\nerro léxico próximo à linha %d: caractere %s inválido\n", yylineno, s);
    exit(1);
}
