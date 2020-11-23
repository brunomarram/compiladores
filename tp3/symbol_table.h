#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int tipo;
    char *nome;
    int valor;
} parameter;

typedef struct {
    int integer;
    float decimal;
    char letra;
    char *palavra;
} tad_symbol_table;

void install_var(int tipo, char *nome, int valor);

void install_function(int tipo, char *nome, parameter *parameters);

void install_label(char *nome);

void change_assigment(char *nome, int valor);

tad_symbol_table get_item_value(char *nome);
