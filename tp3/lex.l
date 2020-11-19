/* This tells flex to read only one input file */ 
%option noyywrap

%{ 
    /*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 
    #include <stdio.h>
    #include "y.tab.h"
%}

/* definicoes regulares */ 
nl [\n]
delim   [ _/\t]
    /* onews   [ ] */
ws		{delim}+ 
digit   [0-9]
boolean ("verdade"|"mentira")
letter  [a-zA-Z]
positive  ((\+){digit}+)|{digit}+
negative  (-){digit}+
decimal ({positive}|{negative})(\.{digit}+)?(E[+]?{digit}+)?
id  ("CAF")({letter}+|{digit}+|_+)

comment ("comentar").*("comentado")

abreEscopo "bonito"
fechaEscopo "feio"

abreExpressao "baixo"
fechaExpressao "alto"

modificadorEspecial ("heitor"|"kristtopher")
modificadorSinal ("viegas"|"jose")
modificadorSomenteLeitura "glaucia"
modificadorTamanho ("gabriel"|"naiara")
modificadorTipo ("daniel"|"dalila"|"paulo"|"joaoarthur"|"danielMendes")

break "nacif"
case "vinicius"
continue "nancy"
do "vitorhugo"
else "vitorputo"
elseif "vitormudo"
for "bruno"
goto "iara"
if "pato"
return "pascal"
sizeof "brandao"
switch "thais"
while "espeto"

asterisco "amou"
barra "espatifou"
chapeu "parou"
diferente "julgou"
eDouble "corrigiu"
eLogico "comprou"
igual "toma"
igualIgual "tomatoma"
maiorOuIgual "ficou"
maiorQue "enviou"
mais "casou"
menorOuIgual "saiu"
menorQue "recebeu"
menos "estapeou"
percentual "cortou"
pipe "estudou"
pipeDouble "seguiu"
shiftLeft "esquerdou"
shiftRight "direitou"

operadorDoido "endoidou"

%% 
{id}  { printf("Foi encontrado um identificador. LEXEMA: %s \n", yytext); return ID;}

{abreEscopo}    { printf("Foi encontrado um abreEscopo. LEXEMA: %s \n", yytext); return ABREESCOPO;}
{fechaEscopo}   { printf("Foi encontrado um fechaEscopo. LEXEMA: %s \n", yytext); return FECHAESCOPO;}

{abreExpressao} { printf("Foi encontrado um abreExpressao. LEXEMA: %s \n", yytext); return ABREEXPRESSAO;}
{fechaExpressao} { printf("Foi encontrado um fechaExpressao. LEXEMA: %s \n", yytext); return FECHAEXPRESSAO;}

{modificadorEspecial}       { printf("Foi encontrado um modificadorEspecial. LEXEMA: %s \n", yytext); return MODIFICADORESPECIAL;}
{modificadorSinal}          { printf("Foi encontrado um modificadorSinal. LEXEMA: %s \n", yytext); return MODIFICADORSINAL;}
{modificadorSomenteLeitura} { printf("Foi encontrado um modificadorSomenteLeitura. LEXEMA: %s \n", yytext); return MODIFICADORSOMENTELEITURA;}
{modificadorTamanho}        { printf("Foi encontrado um modificadorTamanho. LEXEMA: %s \n", yytext); return MODIFICADORTAMANHO;}
{modificadorTipo}           { printf("Foi encontrado um modificadorTipo. LEXEMA: %s \n", yytext); return MODIFICADORTIPO;}

{boolean}   { printf("Foi encontrado um booleano. LEXEMA: %s \n", yytext); return BOOLEAN;}
{break}     { printf("Foi encontrado um break. LEXEMA: %s \n", yytext); return BREAK;}
{case}      { printf("Foi encontrado um case. LEXEMA: %s \n", yytext); return CASE;}
{continue}  { printf("Foi encontrado um continue. LEXEMA: %s \n", yytext); return CONTINUE;}
{do}        { printf("Foi encontrado um do. LEXEMA: %s \n", yytext); return DO;}
{else}      { printf("Foi encontrado um else. LEXEMA: %s \n", yytext); return ELSE;}
{elseif}    { printf("Foi encontrado um elseif. LEXEMA: %s \n", yytext); return ELSEIF;}
{for}       { printf("Foi encontrado um for. LEXEMA: %s \n", yytext); return FOR;}
{goto}      { printf("Foi encontrado um goto. LEXEMA: %s \n", yytext); return GOTO;}
{if}        { printf("Foi encontrado um if. LEXEMA: %s \n", yytext); return IF;}
{return}    { printf("Foi encontrado um return. LEXEMA: %s \n", yytext); return RETURN;}
{sizeof}    { printf("Foi encontrado um sizeof. LEXEMA: %s \n", yytext); return SIZEOF;}
{switch}    { printf("Foi encontrado um switch. LEXEMA: %s \n", yytext); return SWITCH;}
{while}     { printf("Foi encontrado um while. LEXEMA: %s \n", yytext); return WHILE;}

    /* {char}      { printf("Foi encontrado um char. LEXEMA: %s \n", yytext); } */
    /* {const}     { printf("Foi encontrado um const. LEXEMA: %s \n", yytext); } */
    /* {decimal}   { printf("Foi encontrado um decimal. LEXEMA: %s \n", yytext); } */
    /* {double}    { printf("Foi encontrado um double. LEXEMA: %s \n", yytext); } */
    /* {float}     { printf("Foi encontrado um float. LEXEMA: %s \n", yytext); } */
    /* {int}       { printf("Foi encontrado um int. LEXEMA: %s \n", yytext); } */
    /* {long}      { printf("Foi encontrado um long. LEXEMA: %s \n", yytext); } */
    /* {negative}  { printf("Foi encontrado um negative. LEXEMA: %s \n", yytext); } */
    /* {positive}  { printf("Foi encontrado um positive. LEXEMA: %s \n", yytext); } */
    /* {short}     { printf("Foi encontrado um short. LEXEMA: %s \n", yytext); } */
    /* {signed}    { printf("Foi encontrado um signed. LEXEMA: %s \n", yytext); } */
    /* {void}      { printf("Foi encontrado um void. LEXEMA: %s \n", yytext); } */

{asterisco}     { printf("Foi encontrado um asterisco. LEXEMA: %s \n", yytext); return ASTERISCO;}
{barra}         { printf("Foi encontrado um barra. LEXEMA: %s \n", yytext); return BARRA;}
{chapeu}        { printf("Foi encontrado um chapeu. LEXEMA: %s \n", yytext); return CHAPEU;}
{diferente}     { printf("Foi encontrado um diferente. LEXEMA: %s \n", yytext); return DIFERENTE;}
{eDouble}       { printf("Foi encontrado um eDouble. LEXEMA: %s \n", yytext); return EDOUBLE;}
{eLogico}       { printf("Foi encontrado um eLogico. LEXEMA: %s \n", yytext); return ELOGICO;}
{igualIgual}    { printf("Foi encontrado um igualIgual. LEXEMA: %s \n", yytext); return IGUALIGUAL;}
{maiorOuIgual}  { printf("Foi encontrado um maiorOuIgual. LEXEMA: %s \n", yytext); return MAIOROUIGUAL;}
{maiorQue}      { printf("Foi encontrado um maiorQue. LEXEMA: %s \n", yytext); return MAIORQUE;}
{mais}          { printf("Foi encontrado um mais. LEXEMA: %s \n", yytext); return MAIS;}
{menorOuIgual}  { printf("Foi encontrado um menorOuIgual. LEXEMA: %s \n", yytext); return MENOROUIGUAL;}
{menorQue}      { printf("Foi encontrado um menorQue. LEXEMA: %s \n", yytext); return MENORQUE;}
{menos}         { printf("Foi encontrado um menos. LEXEMA: %s \n", yytext); return MENOS;}
{percentual}    { printf("Foi encontrado um percentual. LEXEMA: %s \n", yytext); return PERCENTUAL;}
{pipe}          { printf("Foi encontrado um pipe. LEXEMA: %s \n", yytext); return PIPE;}
{pipeDouble}    { printf("Foi encontrado um pipeDouble. LEXEMA: %s \n", yytext); return PIPEDOUBLE;}
{shiftLeft}     { printf("Foi encontrado um shiftLeft. LEXEMA: %s \n", yytext); return SHIFTLEFT;}
{shiftRight}    { printf("Foi encontrado um shiftRight. LEXEMA: %s \n", yytext); return SHIFTRIGHT;}

{nl} {extern int lineno; lineno++; return '\n';}
{ws}        {/*nenhuma acao e nenhum retorno*/} 
{comment}   {/*nenhuma acao e nenhum retorno*/}
%%

    /*
        int main(void) 
        {
            yylex(); 
            return 0; 
        }
    */