/* This tells flex to read only one input file */ 
%option noyywrap

%{ 
    /*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 
    #include <stdio.h>
    #include "y.tab.h"
    #include "symbol_table.h"
%}

/* definicoes regulares */ 
nl [\n]
delim [ _/\t]

ws		{delim}+ 
digit   [0-9]
true "verdade"
false "mentira"
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

char "dalila"
float "paulo"
double "joaoarthur"
void "danielmendes"
int "daniel"

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
{id}  { yylval.pkg.name = strdup(yytext); yylval.pkg.is_id = 1; return ID;}

{start}    { return START;}
{end}   { return END;}

{abreEscopo}    { return ABREESCOPO;}
{fechaEscopo}   { return FECHAESCOPO;}

{abreExpressao} { return ABREEXPRESSAO;}
{fechaExpressao} { return FECHAEXPRESSAO;}

 
{void}      { return VOID;}

{char}      { yylval.pkg.type = TYPE_CHAR; return CHAR; }
{float}     { yylval.pkg.type = TYPE_FLOAT; return FLOAT; }
{double}    { yylval.pkg.type = TYPE_DOUBLE; return DOUBLE; }
{int}       { yylval.pkg.type = TYPE_INT; return INT; }

{true}      { return TRUE;}
{false}     { return FALSE;}
{break}     { return BREAK;}
{case}      { return CASE;}
{continue}  { return CONTINUE;}
{do}        { return DO;}
{else}      { return ELSE;}
{elseif}    { return ELSEIF;}
{for}       { return FOR;}
{goto}      { return GOTO;}
{if}        { return IF;}
{return}    { return RETURN;}
{sizeof}    { return SIZEOF;}
{switch}    { return SWITCH;}
{while}     { return WHILE;}

":"          {return(':');}
";"          {return(';');}
","          {return(',');}

{asterisco}     { return ASTERISCO;}
{barra}         { return BARRA;}
{chapeu}        { return CHAPEU;}
{diferente}     { return DIFERENTE;}
{eDouble}       { return EDOUBLE;}
{eLogico}       { return ELOGICO;}
{igual}         { return IGUAL;}
{igualIgual}    { return IGUALIGUAL;}
{maiorOuIgual}  { return MAIOROUIGUAL;}
{maiorQue}      { return MAIORQUE;}
{mais}          { return MAIS;}
{menorOuIgual}  { return MENOROUIGUAL;}
{menorQue}      { return MENORQUE;}
{menos}         { return MENOS;}
{percentual}    { return PERCENTUAL;}
{pipe}          { return PIPE;}
{pipeDouble}    { return PIPEDOUBLE;}
{shiftLeft}     { return SHIFTLEFT;}
{shiftRight}    { return SHIFTRIGHT;}

{letter}      { yylval.pkg.name = strdup("-1"); yylval.pkg.letter = yytext[1]; yylval.pkg.is_id = 0; yylval.pkg.type = TYPE_CHAR; return LETTER;}
{positive}    { yylval.pkg.name = strdup("-1"); yylval.pkg.value_int = atoi(yytext); yylval.pkg.is_id = 0; yylval.pkg.type = TYPE_INT; return POSITIVE;}
{negative}    { yylval.pkg.name = strdup("-1"); yylval.pkg.value_int = atoi(yytext); yylval.pkg.is_id = 0; yylval.pkg.type = TYPE_INT; return NEGATIVE;}
{decimal}     { yylval.pkg.name = strdup("-1"); yylval.pkg.value_float = atof(yytext); yylval.pkg.is_id = 0; yylval.pkg.type = TYPE_FLOAT; return DECIMAL;}

{nl} {extern int lineno; lineno++;}

{ws}        {} 
{comment}   {/*nenhuma acao e nenhum retorno*/}
%%

    /*
        int main(void) 
        {
            yylex(); 
            return 0; 
        }
    */