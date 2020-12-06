#ifndef __YYSTYPE
#define __YYSTYPE

#define YYDEBUG 1 

typedef union YYSTYPE {
struct pkg 
{     
	char *name;
	float value_float;
	int value_int;
	int type;
	char letter; 
} pkg;


}YYSTYPE;
#define YYSTYPE YYSTYPE

void printPkg(YYSTYPE *a)
{
printf("nome: %s\n", a->pkg.name);
printf("value float: %f\n", a->pkg.value_float);
printf("value int: %d\n", a->pkg.value_int);
printf("type : %d\n", a->pkg.type);
printf("letter %c \n", a->pkg.letter);

}


#endif