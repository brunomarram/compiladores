/* This tells flex to read only one input file */ 
%option noyywrap

%{ 
    /*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 
    #include <stdio.h>
    #include "y.tab.h"
%}

/* definicoes regulares */ 
nl [\n]
delim [ _/\t]

ws		{delim}+ 
digit   [0-9]
boolean ("verdade"|"mentira")
letter  [a-zA-Z]
positive  ((\+){digit}+)|{digit}+
negative  (-){digit}+
decimal ({positive}|{negative})(\.{digit}+)?(E[+]?{digit}+)?
id  ("CAF")({letter}+|{digit}+|_+)

comment ("comentar").*("comentado")

start "comecou"
end "acabou"

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
{id}  { printf("%s", yytext); yylval.id = strdup(yytext); return ID;}

{start}    { printf("%s", yytext); return START;}
{end}   { printf("%s", yytext); return END;}

{abreEscopo}    { printf("%s", yytext); return ABREESCOPO;}
{fechaEscopo}   { printf("%s", yytext); return FECHAESCOPO;}

{abreExpressao} { printf("%s", yytext); return ABREEXPRESSAO;}
{fechaExpressao} { printf("%s", yytext); return FECHAEXPRESSAO;}

{modificadorEspecial}       { printf("%s \n", yytext); return MODIFICADORESPECIAL;}
{modificadorSinal}          { printf("%s \n", yytext); return MODIFICADORSINAL;}
{modificadorSomenteLeitura} { printf("%s \n", yytext); return MODIFICADORSOMENTELEITURA;}
{modificadorTamanho}        { printf("%s \n", yytext); return MODIFICADORTAMANHO;}
{modificadorTipo}           { printf("%s", yytext); return MODIFICADORTIPO;}

{boolean}   { printf("%s", yytext); return BOOLEAN;}
{break}     { printf("%s", yytext); return BREAK;}
{case}      { printf("%s \n", yytext); return CASE;}
{continue}  { printf("%s", yytext); return CONTINUE;}
{do}        { printf("%s \n", yytext); return DO;}
{else}      { printf("%s \n", yytext); return ELSE;}
{elseif}    { printf("%s", yytext); return ELSEIF;}
{for}       { printf("%s", yytext); return FOR;}
{goto}      { printf("%s \n", yytext); return GOTO;}
{if}        { printf("%s", yytext); return IF;}
{return}    { printf("%s", yytext); return RETURN;}
{sizeof}    { printf("%s \n", yytext); return SIZEOF;}
{switch}    { printf("%s \n", yytext); return SWITCH;}
{while}     { printf("%s \n", yytext); return WHILE;}

":"          {printf("%s", yytext); return(':');}
";"          {printf("%s", yytext); return(';');}
","          {printf("%s", yytext); return(',');}

{asterisco}     { printf("%s", yytext); return ASTERISCO;}
{barra}         { printf("%s \n", yytext); return BARRA;}
{chapeu}        { printf("%s \n", yytext); return CHAPEU;}
{diferente}     { printf("%s \n", yytext); return DIFERENTE;}
{eDouble}       { printf("%s \n", yytext); return EDOUBLE;}
{eLogico}       { printf("%s \n", yytext); return ELOGICO;}
{igual}         { printf("%s", yytext); return IGUAL;}
{igualIgual}    { printf("%s", yytext); return IGUALIGUAL;}
{maiorOuIgual}  { printf("%s \n", yytext); return MAIOROUIGUAL;}
{maiorQue}      { printf("%s \n", yytext); return MAIORQUE;}
{mais}          { printf("%s \n", yytext); return MAIS;}
{menorOuIgual}  { printf("%s", yytext); return MENOROUIGUAL;}
{menorQue}      { printf("%s \n", yytext); return MENORQUE;}
{menos}         { printf("%s \n", yytext); return MENOS;}
{percentual}    { printf("%s \n", yytext); return PERCENTUAL;}
{pipe}          { printf("%s \n", yytext); return PIPE;}
{pipeDouble}    { printf("%s \n", yytext); return PIPEDOUBLE;}
{shiftLeft}     { printf("%s \n", yytext); return SHIFTLEFT;}
{shiftRight}    { printf("%s \n", yytext); return SHIFTRIGHT;}

{letter}      { printf("%s", yytext); yylval.letter = yytext[1]; return LETTER;}
{positive}    { printf("%s", yytext); yylval.vavalue_intlor = atoi(yytext) ;return POSITIVE;}
{negative}    { printf("%s", yytext); yylval.value_int = atoi(yytext) ; return NEGATIVE;}
{decimal}     { printf("%s", yytext); yylval.value_float = atof(yytext) ;return DECIMAL;}

{nl} {extern int lineno; lineno++;printf("\n%d|", lineno);}

{ws}        {printf("\t");} 
{comment}   {/*nenhuma acao e nenhum retorno*/}
%%

    /*
        int main(void) 
        {
            yylex(); 
            return 0; 
        }
    */