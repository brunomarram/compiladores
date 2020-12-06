#ifndef EXPR_TABLE__
#define EXPR_TABLE__

#include <stdio.h>
#include <string.h>

struct expr{

	char operand1[3];
	char operand2[3];
	char operator[3];
	char result[3];
};

struct expr exprTable[20]; 

int temp = 0;
int proxExprId = 0;
char addToTable(struct pkg *a){
    temp++;
    printf("%d\n",proxExprId);
    strcpy((char *)&exprTable[proxExprId].operand1,"a");
    printf("asds %s \n", a->name);
    // exprTable[proxExprId].operand2 = b;
    // exprTable[proxExprId].operator = o;
    // exprTable[proxExprId].result = proxExprId;
    proxExprId += 1;
    return temp;
}

#endif