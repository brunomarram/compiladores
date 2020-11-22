#include <string.h>
#include <stdio.h>
#include "tabela.h"

#define NMax 10 /* numero maximo de niveis */

/* Procedimento responsável por inicializar a tabela de símbolos */
void iniciaListaNO() {
	T = 1;
	L = 1;    /* Considera-se que a primeira posicao da tabela eh a de indice 1. */
	nivel = 1;           /* O primeiro nivel eh o 1 */
	escopo[nivel] = L;   /* escopo[1] contem o indice do primeiro elemento */
}

/************  Funcao que define os erros provaveis de ocorrer **********/
void Erro(int num) {
	switch (num) {
		case 1: printf("Tabela de Simbolos cheia\n"); break;
		case 2: printf("Item nao foi encontrado\n"); break;
		case 3: printf("Item ja foi inserido\n"); break;
		default: ;
	}
}

/******************* Funcao de entrada num bloco ********************/
 void Entrada_Bloco() {
	nivel++;
	if (nivel > NMax) Erro(1);
	else escopo[nivel] = L;
}

/******************** Funcao de saida de um bloco ***********************/
 void Saida_Bloco() {
	L = escopo[nivel];
	nivel--;
}

/* Função responsável por pesquisar e retornar o índice de uma variável na tabela de símbolos */
int Recupera_Entrada(char* nome) {
	int K; /* percorre a lista */
	K = L;

	while (K > 1)
	{
		K--;
		if( !strcmp(nome, tabela_simbolos[K].nome ) ) return K;		// identificador foi encontrado
	}
  /* Erro(2); */
	return 0;
}

/* Função responsável por instalar um identificador na tabela de símbolos */
 void Instala(char* nome, int tipo) {
	int K;
	K = L;

	while (K > escopo[nivel]) {
		K--;
		if( !strcmp(nome, tabela_simbolos[K].nome) ) {	// identificador ja pertence aa tabela
				printf("\nerro semântico próximo à linha %d: identificador %s já está sendo utilizado\n", yylineno, nome);
				exit(1);
		}
	}
	tabela_simbolos[L].nome = strdup(nome);
	tabela_simbolos[L].tipo = tipo;

	L++;
}

/* Procedimento responsável por imprimir o conteúdo da tabela de símbolos */
void Imprime_Tabela()
{
	int i;
	printf("\nTabela de Simbolos:\n");
	printf("===================\n\n");
	printf("INDICE\t\tTIPO\t\tNOME\t\tVALOR\n");
	printf("======\t\t====\t\t====\t\t=====\n");
	for (i = 1; i < L ; i++ )
	{
		printf("%d\t\t%d\t\t%s\t\t", i, tabela_simbolos[i].tipo, tabela_simbolos[i].nome);
		if(tabela_simbolos[i].tipo == T_BOOLEAN) {
			if(tabela_simbolos[i].valor == 0)
				printf("false");
			else {
				printf("true");
			}
		}
		else if(tabela_simbolos[i].tipo == T_CHAR) {
			printf("%c", tabela_simbolos[i].valor);
		}
		else if(tabela_simbolos[i].tipo == T_INT){
			printf("%d", tabela_simbolos[i].valor);
		}
		else if(tabela_simbolos[i].tipo == T_PROCEDURE) {
			printf("PROCEDURE");
		}
		else {
			printf("VOID");
		}
		printf("\n");
	}
}

/* Procedimento responsável por atualizar o valor de uma variável na tabela de símbolos */
void Atualiza_Valor_Identificador(char *nome, int valor) {
	int K;
	K = L;

	while (K > escopo[nivel]) {
    K--;
    if( !strcmp(nome, tabela_simbolos[K].nome) ) {
			if(tabela_simbolos[K].tipo == T_INT && valor >= -32768 && valor <= 32767 ||
				(tabela_simbolos[K].tipo == T_BOOLEAN && (valor == 0 || valor == 1)) ||
		    (tabela_simbolos[K].tipo == T_CHAR && ((valor >= 65 && valor <= 90) || (valor >= 97 && valor <= 122))))
			{
				tabela_simbolos[K].valor = valor;
				return;
			}
			else {
				printf("\nerro semântico próximo à linha %d: %s não pode assumir o valor %d\n", yylineno, nome, valor);
				exit(1);
			}
		}
	}
	printf("\nerro semântico próximo à linha %d: variável %s não disponível para ser atualizada\n", yylineno, nome);
	exit(1);
}

/* Função responsável por recuperar o valor de uma variável na tabela de símbolos */
int Recupera_Valor_Identificador(char* nome)
{
	int indice = Recupera_Entrada(nome);
	if (indice == 0) {
		printf("\nerro semântico próximo à linha %d: variável %s não disponível\n", yylineno, nome);
		exit(1);
	}
	else {
		return tabela_simbolos[indice].valor;
	}
}

/* Função responsável por recuperar o tipo de uma variável na tabela de símbolos */
int Recupera_Tipo_Identificador(char* nome)
{
	int indice = Recupera_Entrada(nome);
	if (indice == 0) {
		printf("\nerro semântico próximo à linha %d: variável %s não disponível\n", yylineno, nome);
		exit(1);
	}
	else {
		return tabela_simbolos[indice].tipo;
	}
}

/* Procedimento responsável por conferir se o valor associado a uma expressão excedeu o tamanho de um inteiro */
void Confere_Overflow(int expr) {
	if (expr < -32768 || expr > 32767) {
		printf("\nerro semântico próximo à linha %d: overflow\n", yylineno);
		exit(1);
	}
}

/* Função responsável por pesquisar e retornar o índice de um procedimento na tabela de procedimentos */
int Recupera_Procedimento_Atual(char *nome) {
  int K; /* percorre a lista */
	K = T;

	while (K > 1)
	{
		K--;
		if( !strcmp(nome, tabela_procedimentos[K].nome ) ) return K;		// identificador foi encontrado
	}
	printf("\nerro semântico próximo à linha %d: procedimento %s não definido\n", yylineno, nome);
	exit(1);
}

/* Procedimento responsável por conferir se o tipo do parâmetro formal corresponde com o tipo do parâmetro real de um procedimento */
void Confere_Tipo_Parametro(char* nome_real, int procedimento_atual, int parametro_atual) {
	int tipo_real = Recupera_Tipo_Identificador(nome_real);
	int tipo_formal = tabela_procedimentos[procedimento_atual].parametros[parametro_atual].tipo;
	if(tipo_formal != tipo_real) {
	  printf("\nerro semântico próximo à linha %d: tipos inconsistentes entre parâmetro formal e parâmetro real\n", yylineno);
		exit(1);
	}
}

/* Procedimento responsável por inserir um parâmetro no vetor de parâmetros de um procedimento */
void Instala_Parametro(int procedimento_atual, int tipo_parametro, char *nome_parametro) {
	int indice = tabela_procedimentos[procedimento_atual].numero_parametros;
	tabela_procedimentos[procedimento_atual].parametros[indice].nome = strdup(nome_parametro);
	tabela_procedimentos[procedimento_atual].parametros[indice].tipo = tipo_parametro;
	tabela_procedimentos[procedimento_atual].numero_parametros++;
}

/* Procedimento responsável por inserir um procedimento na tabela de procedimentos */
void Instala_Procedimento(char *nome, int tipo_procedimento) {
	int K;
	K = T;

	while (K > escopo[nivel]) {
		K--;
		if( !strcmp(nome, tabela_procedimentos[K].nome) ) {	// identificador ja pertence aa tabela
				Erro(3);
				return;
		}
	}
	tabela_procedimentos[T].nome = strdup(nome);
	tabela_procedimentos[T].tipo_retornado = tipo_procedimento;
	tabela_procedimentos[T].numero_parametros = 0;

	T++;
}

/* Procedimento responsável por imprimir o conteúdo da tabela de procedimentos */
void Imprime_Tabela_Procedimentos() {
	int i;
	printf("\nTabela de Procedimentos:\n");
	printf("===================\n\n");
	printf("INDICE\t\tTIPO RETORNO\t\tNOME\t\tQTD PARÂMETROS\n");
	printf("======\t\t============\t\t====\t\t==============\n");
	for (i = 1; i < T ; i++ )
	{
		printf("%d\t\t%d\t\t\t%s\t%d\n", i, tabela_procedimentos[i].tipo_retornado, tabela_procedimentos[i].nome, tabela_procedimentos[i].numero_parametros);
	}
}
