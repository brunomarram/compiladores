#ifndef EXPR_TABLE__
#define EXPR_TABLE__

#include <stdio.h>
#include <string.h>

struct expr{

	char operand1[16];
	char operand2[16];
	char operator[16];
	char result[16];
};

struct expr exprTable[20]; 

int temp = 0;
int proxExprId = 0;
int id_IR = 0;

char addToTable(struct pkg *a, struct pkg *b, char *operator) {
    
    temp++;
    
    // printf("proxExprId: %d\n",proxExprId);

    // printf("\n\n %d", (a->value_int * b->value_int));
    // printf("\n\nIDENTIFICADOR: %s | VALOR1: %d | VALOR2: %d \n\n", a->name, a->value_int, b->value_int);
    
    sprintf(exprTable[proxExprId].operand1, "%d", a->value_int);
    sprintf(exprTable[proxExprId].operand2, "%d", b->value_int);
    strcpy(exprTable[proxExprId].operator, operator);
    // exprTable[proxExprId].result = id_IR;
    sprintf(exprTable[proxExprId].result, "t%d", id_IR);

    if(!strcmp(operator, "<-")) {
        printf("\nt%d = %d", id_IR, b->value_int);
    } else if(!strcmp(operator, "=")) {
        printf("\nt%d = t%d", id_IR, id_IR-1);
    } else {
        printf("\nt%d = %d %s %d", id_IR, a->value_int, operator, b->value_int);
    }

    id_IR++;
    // if(a->value_int ) {
    //     exprTable[proxExprId].operand1 = id_IR;
    //     exprTable[proxExprId].operand2 = ;
    //     exprTable[proxExprId].operator = o;
    //     exprTable[proxExprId].result = proxExprId;
    // }

    proxExprId += 1;
    return temp;
}

#endif