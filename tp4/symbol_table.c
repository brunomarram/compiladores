#include <string.h>
#include <stdio.h>
#include "symbol_table.h"

void initBlockList()
{
	indexOfLastElementAtSymbolTable = 1;
	indexOfLastestSymbolTableLevel = 1; 
	escopo[indexOfLastestSymbolTableLevel] = indexOfLastElementAtSymbolTable;
}


void handleError(int err) {
	switch (err) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default: ;
	}
}


 void startBlock()
{
	indexOfLastestSymbolTableLevel++;
	if (indexOfLastestSymbolTableLevel > NMax)
		handleError(1);
	else
		escopo[indexOfLastestSymbolTableLevel] = indexOfLastElementAtSymbolTable;
}


 void endBlock()
{
	indexOfLastElementAtSymbolTable = escopo[indexOfLastestSymbolTableLevel];
	indexOfLastestSymbolTableLevel--;
}

int searchEntryAtSymbolTable(char* symbol)
{
	int K;
	K = indexOfLastElementAtSymbolTable;

	while (K > 1)
	{
        K--;
        if( !strcmp(symbol, SymbolTable[K].name ) ) return K;
	}
	return 0;
}

 void installSymbolAtSymbolTable(char* symbol, int kind)
{
	int K;
	K = indexOfLastElementAtSymbolTable;

	while (K > escopo[indexOfLastestSymbolTableLevel]) {
        K--;
        if( !strcmp(symbol, SymbolTable[K].name) ) {
			handleError(3);
			return;
		}
	}
	SymbolTable[indexOfLastElementAtSymbolTable].kind = kind;
	SymbolTable[indexOfLastElementAtSymbolTable].name = strdup(symbol);
	indexOfLastElementAtSymbolTable++;
}

void printSymbolTable()
{
	printf("\n\nTabela de Simbolos:\n");
	printf("Index\t	Tipo\tNome\n");
	for (int i = 1; i < indexOfLastElementAtSymbolTable ; i++ )
	{
		printf("%d\t\t%d\t\t%s\n", i, SymbolTable[i].kind, SymbolTable[i].name);
	}
}

int getTypeAtSymbolTable(char* symbol, int parameter1, int parameter2)
{
	int K, type;
	K = indexOfLastElementAtSymbolTable;

	while (K > 1)
	{
        K--;
        if( !strcmp(symbol, SymbolTable[K].name ) ) type = SymbolTable[K].kind;
	}

	if(type == parameter1 && type == parameter2) return type;
	
	return 0;
}