%{ 
    /*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 
    #include<stdio.h>
%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 
delim   [ _/\t\n]
onews   [ ] 
ws		{delim}+ 
digit   [0-9]
letter [a-zA-Z]
id  ("CAF")({letter}+|{digit}+|_+)

comment ("comentar").*("comentado")

abreEscopo "bonito"
fechaEscopo "feio"
fechaExpressao "alto"
abreExpressao "baixo"

modificadorTipo ("daniel"|"dalila"|"paulo"|"joaoarthur"|"danielMendes")
modificadorTamanho ("gabriel"|"naiara")
modificadoresEspeciais ("heitor"|"kristtopher")
modificadorSomenteLeitura "glaucia"
modificadorSinal ("viegas"|"heitor")



break "nacif"
case "vinicius"
continue "nancy"
do "vitorhugo"
else "vitorputo"
for "bruno"
goto "iara"
if "pato"
return "pascal"
sizeof "brandao"
switch "thais"
while "espeto"



asterisco "amou"
barra "espatifou"
percentual "cortou"
mais "casou"
menos "estapeou"
shiftLeft "esquerdou"
shiftRight "direitou"
menorQue "recebeu"
igual "toma"
menorOuIgual "saiu"
maiorQue "enviou"
maiorOuIgual "ficou"
igualIgual "tomatoma"
diferente "julgou"
eLogico "comprou"
chapeu "parou"
pipe "estudou"
eDouble "corrigiu"
pipeDouble "seguiu"

operadorDoido "endoidou"

%% 
{id} { printf("Foi encontrado um identificador. LEXEMA: %s \n", yytext); }
{abreEscopo} { printf("Foi encontrado um abreEscopo. LEXEMA: %s \n", yytext); }
{fechaEscopo} { printf("Foi encontrado um fechaEscopo. LEXEMA: %s \n", yytext); }
{fechaExpressao} { printf("Foi encontrado um fechaExpressao. LEXEMA: %s \n", yytext); }
{modificadorTipo} { printf("Foi encontrado um modificadorTipo. LEXEMA: %s \n", yytext); }
{modificadorTamanho} { printf("Foi encontrado um modificadorTamanho. LEXEMA: %s \n", yytext); }
{modificadoresEspeciais} { printf("Foi encontrado um modificadoresEspeciais. LEXEMA: %s \n", yytext); }
{modificadorSomenteLeitura} { printf("Foi encontrado um modificadorSomenteLeitura. LEXEMA: %s \n", yytext); }
{modificadorSinal} { printf("Foi encontrado um modificadorSinal. LEXEMA: %s \n", yytext); }



{break} { printf("Foi encontrado um break. LEXEMA: %s \n", yytext); }
{case}  { printf("Foi encontrado um case. LEXEMA: %s \n", yytext); }
{char}  { printf("Foi encontrado um char. LEXEMA: %s \n", yytext); }
{const} { printf("Foi encontrado um const. LEXEMA: %s \n", yytext); }
{continue}  { printf("Foi encontrado um continue. LEXEMA: %s \n", yytext); }
{do}    { printf("Foi encontrado um do. LEXEMA: %s \n", yytext); }
{double}    { printf("Foi encontrado um double. LEXEMA: %s \n", yytext); }
{else}  { printf("Foi encontrado um else. LEXEMA: %s \n", yytext); }
{float} { printf("Foi encontrado um float. LEXEMA: %s \n", yytext); }
{for}   { printf("Foi encontrado um for. LEXEMA: %s \n", yytext); }
{goto}  { printf("Foi encontrado um goto. LEXEMA: %s \n", yytext); }
{if}    { printf("Foi encontrado um if. LEXEMA: %s \n", yytext); }
{int}   { printf("Foi encontrado um int. LEXEMA: %s \n", yytext); }
{long}  { printf("Foi encontrado um long. LEXEMA: %s \n", yytext); }
{return}    { printf("Foi encontrado um return. LEXEMA: %s \n", yytext); }
{short} { printf("Foi encontrado um short. LEXEMA: %s \n", yytext); }
{signed}    { printf("Foi encontrado um signed. LEXEMA: %s \n", yytext); }
{sizeof}    { printf("Foi encontrado um sizeof. LEXEMA: %s \n", yytext); }
{switch}    { printf("Foi encontrado um switch. LEXEMA: %s \n", yytext); }
{void}  { printf("Foi encontrado um void. LEXEMA: %s \n", yytext); }
{while} { printf("Foi encontrado um while. LEXEMA: %s \n", yytext); }

{asterisco}     { printf("Foi encontrado um asterisco. LEXEMA: %s \n", yytext); }
{barra}     { printf("Foi encontrado um barra. LEXEMA: %s \n", yytext); }
{percentual}        { printf("Foi encontrado um percentual. LEXEMA: %s \n", yytext); }
{mais}      { printf("Foi encontrado um mais. LEXEMA: %s \n", yytext); }
{menos}     { printf("Foi encontrado um menos. LEXEMA: %s \n", yytext); }
{shiftLeft}     { printf("Foi encontrado um shiftLeft. LEXEMA: %s \n", yytext); }
{shiftRight}        { printf("Foi encontrado um shiftRight. LEXEMA: %s \n", yytext); }
{menorQue}      { printf("Foi encontrado um menorQue. LEXEMA: %s \n", yytext); }
{menorOuIgual}      { printf("Foi encontrado um menorOuIgual. LEXEMA: %s \n", yytext); }
{maiorQue}      { printf("Foi encontrado um maiorQue. LEXEMA: %s \n", yytext); }
{maiorOuIgual}      { printf("Foi encontrado um maiorOuIgual. LEXEMA: %s \n", yytext); }
{igualIgual}        { printf("Foi encontrado um igualIgual. LEXEMA: %s \n", yytext); }
{diferente}     { printf("Foi encontrado um diferente. LEXEMA: %s \n", yytext); }
{eLogico}       { printf("Foi encontrado um eLogico. LEXEMA: %s \n", yytext); }
{chapeu}        { printf("Foi encontrado um chapeu. LEXEMA: %s \n", yytext); }
{pipe}      { printf("Foi encontrado um pipe. LEXEMA: %s \n", yytext); }
{eDouble}       { printf("Foi encontrado um eDouble. LEXEMA: %s \n", yytext); }
{pipeDouble}        { printf("Foi encontrado um pipeDouble. LEXEMA: %s \n", yytext); }

{ws}		{/*nenhuma acao e nenhum retorno*/} 
{comment} {/*nenhuma acao e nenhum retorno*/}
%%

/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 
int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}