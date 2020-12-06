#ifndef __YYSTYPE
#define __YYSTYPE

#define YYDEBUG 1 

typedef union YYSTYPE {
struct pkg 
{     
	char *name;
	float value_float;
	int value_int;
	int is_id;
	int type;
	char letter; 
} pkg;


}YYSTYPE;
#define YYSTYPE YYSTYPE

#endif