%{ 
    /*codigo colocado aqui aparece no arquivo gerado pelo flex*/ 
    #include<stdio.h>
%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 
delim		[ \t\n]
onews [ ] 
ws		{delim}+ 
digit   [0-9]
palavra [a-zA-z]+
positive  ((\+){digit}+)|{digit}+
negative  (-){digit}+
decimal ({positive}|{negative})(\.{digit}+)?(E[+]?{digit}+)?
placa [A-Z]{3}(-)[0-9]{4}
telefone [0-9]{4}(-)[0-9]{4}
nome ({palavra}{onews}{palavra}{onews}{palavra})|({palavra}{onews}{palavra}{onews}{palavra}{onews}{palavra}) 

%% 

{telefone}     { printf("Foi encontrado um telefone. LEXEMA: %s \n",  yytext) ; }
{placa}     { printf("Foi encontrado uma placa. LEXEMA: %s \n",  yytext) ; }
{nome}     { printf("Foi encontrado um nome próprio. LEXEMA: %s \n",  yytext) ; }
{palavra}     { printf("Foi encontrado uma palavra. LEXEMA: %s \n",  yytext) ; }
{positive}     { printf("Foi encontrado um número inteiro positivo. LEXEMA: %s \n",  yytext) ; }
{negative}     { printf("Foi encontrado um número inteiro negativo. LEXEMA: %s \n",  yytext) ; }
{decimal}     { printf("Foi encontrado um numero com parte decimal. LEXEMA: %s \n",  yytext) ; }
{ws}		{/*nenhuma acao e nenhum retorno*/} 

%% 

/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 
int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}