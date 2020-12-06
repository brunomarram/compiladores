#ifndef EXPR_TABLE__
#define EXPR_TABLE__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct expr{

    char id[32];
	char operand1[16];
	char operand2[16];
	char operator[16];
	int result;

};

struct expr exprTable[20]; 

int proxExprId = 0;
int id_IR = 0;

int indexIdTable(char *id){
    for(int i = 0; i < 20; i++) {
        if(!strcmp(exprTable[i].id, id)) {
            return exprTable[i].result;
        }
    }
    return -1;
}

void addToTable(struct pkg *a, struct pkg *b, char *operator) {
    
    int index_Id = indexIdTable(a->name);
    
    if(index_Id == -1) {

        index_Id = proxExprId;

        sprintf(exprTable[index_Id].operand1, "%d", a->value_int);
        sprintf(exprTable[index_Id].operand2, "%d", b->value_int);
        strcpy(exprTable[index_Id].operator, operator);
        // sprintf(exprTable[index_Id].result, "t%d", id_IR);
        exprTable[index_Id].result = id_IR;
        
        if(!strcmp(operator, "<-"))
            strcpy(exprTable[index_Id].id, a->name);
        else
            strcpy(exprTable[index_Id].id, "");

        proxExprId++;
    }

    if(!strcmp(operator, "<-")) {
        printf("t%d = %d", index_Id, b->value_int);
    } else if(!strcmp(operator, "=")) {
        printf("t%d = t%d", index_Id, id_IR-1);
    } else {
        printf("t%d = %d %s %d", index_Id, a->value_int, operator, b->value_int);
    }

    printf("\n");

    id_IR++;

}

#endif