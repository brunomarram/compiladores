#ifndef __TABELA_H__
#define __TABELA_H__

#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"

#define T_VOID 1
#define T_PROCEDURE 2
#define T_BOOLEAN 3
#define T_INT 4
#define T_CHAR 5

#define NMax 10 /* numero maximo de niveis */

#define MAX_NOME 50		/* tamanho maximo para um string */
#define MAX_PARAMETROS 10	/* limite para o numero de parametros em um procedimento */
#define TAB_SIZE 100		/* tamanho da tabela de simbolos */

typedef struct procedimento_str {
    char nome[MAX_NOME];
    int parametro[MAX_PARAMETROS];
    int modo[MAX_PARAMETROS];
    int numero_parametros;
    int tipo_retornado;
} procedimento_t;

typedef struct tipo_definido_str {
    char nome[MAX_NOME];
    int limites[50][2];
    int dimensoes;
    int tipo_apontado;
} tipo_definido_t;

typedef struct symbolTable
{
  char *name;
  int kind;
  union {
    int bool;
    int number;
    char string;
  } valor;

} symbolTable;

symbolTable SymbolTable[TAB_SIZE];

extern YYSTYPE yylval;
extern int linha;
extern FILE *yyin, *yyout;

//Funcoes da TS
void initBlockList(void);
void handleError(int);
int  Recupera_Entrada(char *);
void installSymbolAtSymbolTable(char *, int );
void printSymbolTable();
void startBlock(void);
void endBlock(void);

// Tabela de Simbolos
int escopo[10];
int indexOflastestSymbolTableLevel;    /* inteiro que contem o numero do indexOflastestSymbolTableLevel atual */
int indexOflastElementAtSymbolTable;     		/* inteiro que contem o indice do ultimo elemento da Tabela de Simbolos */

#endif
