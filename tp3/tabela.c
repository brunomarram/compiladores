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
	switch (num) {
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
		Erro(1);
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
        if( !strcmp(symbol, SymbolTable[K].nome ) ) return K;		// identificador foi encontrado
	}
  /* Erro(2); */
	return 0;
}

/***************  Funcao que instala o item na tabela*****************/
/* Instala um identificador com os atributos na Tabela de Simbolos */

 void installSymbolAtSymbolTable(char* symbol, int kind)
{
	int K;
	K = indexOflastElementAtSymbolTable;

	while (K > escopo[indexOflastestSymbolTableLevel]) {
        K--;
        if( !strcmp(nome, tabela_simbolos[K].nome) ) {	// identificador ja pertence aa tabela
						Erro(3);
						return;
				}
	}
	tabela_simbolos[indexOflastElementAtSymbolTable].kind = kind;
	tabela_simbolos[indexOflastElementAtSymbolTable].name = strdup(nome);

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
		printf("%d\t\t%d\t\t%s\n", i, tabela_simbolos[i].tipo, tabela_simbolos[i].nome);
	}
}
