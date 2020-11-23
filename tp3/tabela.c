#include <string.h>
#include <stdio.h>
#include "tabela.h"

void initBlockList()
{
	indexOflastElementAtSymbolTable = 1;    /* Considera-se que a primeira posicao da tabela eh a de indice 1. */
	indexOflastestSymbolTableLevel = 1;           /* O primeiro indexOflastestSymbolTableLevel eh o 1 */
	escopo[indexOflastestSymbolTableLevel] = indexOflastElementAtSymbolTable;   /* escopo[1] contem o indice do primeiro elemento */
}

/************  Funcao que define os erros provaveis de ocorrer **********/

void handleError(int errno)
{
	switch (errno) {
		case 1:
			printf("SymbolTable Full\n");
			break;
		case 2:
			printf("Symbol not found \n");
			break;
		case 3:
			printf("Symbol already added\n");
			break;
		default: ;
	}
}

/******************* Funcao de entrada num bloco ********************/

 void startBlock()
{
	indexOflastestSymbolTableLevel++;
	if (indexOflastestSymbolTableLevel > NMax)
		handleError(1);
	else
		escopo[indexOflastestSymbolTableLevel] = indexOflastElementAtSymbolTable;
}

/******************** Funcao de saida de um bloco ***********************/

 void endBlock()
{
	indexOflastElementAtSymbolTable = escopo[indexOflastestSymbolTableLevel];
	indexOflastestSymbolTableLevel--;
}

/****************  Funcao que pesquisa item na tabela*******************/
/* Pesquisa o simbolo "X" e retorna o indice da Tabela de simbolos onde ele se encontra */

int searchEntryAtSymbolTable(char* symbol)
{
	int K; /* percorre a lista */
	K = indexOflastElementAtSymbolTable;

	while (K > 1)
	{
        K--;
        if( !strcmp(symbol, SymbolTable[K].name ) ) return K;		// identificador foi encontrado
	}
  /* Erro(2); */
	return 0;
}
//  void installFunctionAtSymbolTable(char* symbol, int kind)
 /// Instalar nome da função na tabela de símbolos anterior A. e instalar seus argumentos em uma tabela de símbolos nova B. B vem depois de A


/***************  Funcao que instala o item na tabela*****************/
/* Instala um identificador com os atributos na Tabela de Simbolos */

 void installSymbolAtSymbolTable(char* symbol, int kind)
{
	int K	;
	K = indexOflastElementAtSymbolTable;

	while (K > escopo[indexOflastestSymbolTableLevel]) {
        K--;
        if( !strcmp(symbol, SymbolTable[K].name) ) {	// identificador ja pertence aa tabela
						handleError(3);
						return;
				}
	}
	SymbolTable[indexOflastElementAtSymbolTable].kind = kind;
	SymbolTable[indexOflastElementAtSymbolTable].name = strdup(symbol);

	indexOflastElementAtSymbolTable++;
}

/******  Funcao que imprime alguns atributos da tabela de simbolos***********/

void printSymbolTable()
{
	printf("\nTabela de Simbolos:\n");
	printf("===================\n\n");
	printf("INDICE\t\tTIPO\t\tNOME\n");
	printf("======\t\t====\t\t====\n");
	for (int i = 1; i < indexOflastElementAtSymbolTable ; i++ )
	{
		printf("%d\t\t%d\t\t%s\n", i, SymbolTable[i].kind, SymbolTable[i].name);
	}
}
