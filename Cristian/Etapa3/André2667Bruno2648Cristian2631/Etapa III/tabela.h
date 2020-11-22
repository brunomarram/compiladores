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

#define MAX_NOME 32		/* tamanho maximo para um string */
#define MAX_PARAMETROS 10	/* limite para o numero de parametros em um procedimento */
#define TAB_SIZE 100		/* tamanho da tabela de simbolos */

typedef struct {
    char nome[MAX_NOME];
    int limites[50][2];
    int dimensoes;
    int tipo_apontado;
} tipo_definido;

typedef struct {
    char *nome;
    int tipo;
} parametro;

typedef struct {
    parametro parametros[MAX_PARAMETROS];
    char *nome;
    int numero_parametros;
    int tipo_retornado;
} procedimento;

typedef struct {
  char *nome;
  int tipo;
  int valor;
} simbolo;

simbolo tabela_simbolos[TAB_SIZE];
procedimento tabela_procedimentos[TAB_SIZE];

extern YYSTYPE yylval;
extern int linha;
extern FILE *yyin, *yyout;

//Funcoes da TS
void iniciaListaNO(void);
void Entrada_Bloco(void);
void Saida_Bloco(void);
void Erro(int numero);
int  Recupera_Entrada(char *nome);
void Instala(char *nome, int tipo);
void Imprime_Tabela();
void Atualiza_Valor_Identificador(char *nome, int valor);
int Recupera_Valor_Identificador(char* nome);
int Recupera_Tipo_Identificador(char* nome);
void Confere_Overflow(int expr);
void Confere_Tipo_Parametro(char* nome_formal, int procedimento_atual, int parametro_atual);
int Recupera_Procedimento_Atual(char *nome);
void Instala_Procedimento(char *nome, int tipo);
void Imprime_Tabela_Procedimentos();


// Tabela de Simbolos
int escopo[10];
int nivel;    /* inteiro que contem o numero do nivel atual */
int L;     		/* inteiro que contem o indice do ultimo elemento da Tabela de Simbolos */
int T;
int Raiz;   /* inteiro que contem o indice do primeiro elemento da Tabela de Simbolos */
extern int yylineno;

#endif
