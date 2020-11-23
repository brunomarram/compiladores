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
{id}  { printf("%s", yytext); return ID;}

{start}    { printf("%s", yytext); return START;}
{end}   { printf("%s", yytext); return END;}

{abreEscopo}    { printf("%s", yytext); return ABREESCOPO;}
{fechaEscopo}   { printf("%s", yytext); return FECHAESCOPO;}

{abreExpressao} { printf("%s", yytext); return ABREEXPRESSAO;}
{fechaExpressao} { printf("%s", yytext); return FECHAEXPRESSAO;}

    /* Acredito que em modificador não precisa passar nenhuma flag para representar, pois ao reconhecer o token no Yacc já deve ser capaz de inserir na tabela de símbolo de acordo com a gramática equivalente */
{modificadorEspecial}       { printf("Foi encontrado um modificadorEspecial. LEXEMA: %s \n", yytext); return MODIFICADORESPECIAL;}
{modificadorSinal}          { printf("Foi encontrado um modificadorSinal. LEXEMA: %s \n", yytext); return MODIFICADORSINAL;}
{modificadorSomenteLeitura} { printf("Foi encontrado um modificadorSomenteLeitura. LEXEMA: %s \n", yytext); return MODIFICADORSOMENTELEITURA;}
{modificadorTamanho}        { printf("Foi encontrado um modificadorTamanho. LEXEMA: %s \n", yytext); return MODIFICADORTAMANHO;}
{modificadorTipo}           { printf("%s", yytext); return MODIFICADORTIPO;}

{boolean}   { printf("Foi encontrado um booleano. LEXEMA: %s \n", yytext); return BOOLEAN;}
{break}     { printf("%s", yytext); return BREAK;}
{case}      { printf("Foi encontrado um case. LEXEMA: %s \n", yytext); return CASE;}
{continue}  { printf("%s", yytext); return CONTINUE;}
{do}        { printf("Foi encontrado um do. LEXEMA: %s \n", yytext); return DO;}
{else}      { printf("Foi encontrado um else. LEXEMA: %s \n", yytext); return ELSE;}
{elseif}    { printf("%s", yytext); return ELSEIF;}
{for}       { printf("%s", yytext); return FOR;}
{goto}      { printf("Foi encontrado um goto. LEXEMA: %s \n", yytext); return GOTO;}
{if}        { printf("%s", yytext); return IF;}
{return}    { printf("%s", yytext); return RETURN;}
{sizeof}    { printf("Foi encontrado um sizeof. LEXEMA: %s \n", yytext); return SIZEOF;}
{switch}    { printf("Foi encontrado um switch. LEXEMA: %s \n", yytext); return SWITCH;}
{while}     { printf("Foi encontrado um while. LEXEMA: %s \n", yytext); return WHILE;}

":"          {printf("%s", yytext); return(':');}
";"          {printf("%s", yytext); return(';');}
","          {printf("%s", yytext); return(',');}

{asterisco}     { printf("%s", yytext); return ASTERISCO;}
{barra}         { printf("Foi encontrado um barra. LEXEMA: %s \n", yytext); return BARRA;}
{chapeu}        { printf("Foi encontrado um chapeu. LEXEMA: %s \n", yytext); return CHAPEU;}
{diferente}     { printf("Foi encontrado um diferente. LEXEMA: %s \n", yytext); return DIFERENTE;}
{eDouble}       { printf("Foi encontrado um eDouble. LEXEMA: %s \n", yytext); return EDOUBLE;}
{eLogico}       { printf("Foi encontrado um eLogico. LEXEMA: %s \n", yytext); return ELOGICO;}
{igual}         { printf("%s", yytext); return IGUAL;}
{igualIgual}    { printf("%s", yytext); return IGUALIGUAL;}
{maiorOuIgual}  { printf("Foi encontrado um maiorOuIgual. LEXEMA: %s \n", yytext); return MAIOROUIGUAL;}
{maiorQue}      { printf("Foi encontrado um maiorQue. LEXEMA: %s \n", yytext); return MAIORQUE;}
{mais}          { printf("Foi encontrado um mais. LEXEMA: %s \n", yytext); return MAIS;}
{menorOuIgual}  { printf("%s", yytext); return MENOROUIGUAL;}
{menorQue}      { printf("Foi encontrado um menorQue. LEXEMA: %s \n", yytext); return MENORQUE;}
{menos}         { printf("Foi encontrado um menos. LEXEMA: %s \n", yytext); return MENOS;}
{percentual}    { printf("Foi encontrado um percentual. LEXEMA: %s \n", yytext); return PERCENTUAL;}
{pipe}          { printf("Foi encontrado um pipe. LEXEMA: %s \n", yytext); return PIPE;}
{pipeDouble}    { printf("Foi encontrado um pipeDouble. LEXEMA: %s \n", yytext); return PIPEDOUBLE;}
{shiftLeft}     { printf("Foi encontrado um shiftLeft. LEXEMA: %s \n", yytext); return SHIFTLEFT;}
{shiftRight}    { printf("Foi encontrado um shiftRight. LEXEMA: %s \n", yytext); return SHIFTRIGHT;}

{letter}      { printf("%s", yytext);  /* yylval.tad_yyval.letter = yytext; */ return LETTER;}
{positive}    { printf("%s", yytext);  /* yylval.tad_yyval.integer = yytext; */ return POSITIVE;}
{negative}    { printf("%s", yytext);  /* yytext.tad_yyval.integer = yytext; */ return NEGATIVE;}
{decimal}     { printf("%s", yytext);  /* yylval.tad_yyval.decimal = yytext; */ return DECIMAL;}

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