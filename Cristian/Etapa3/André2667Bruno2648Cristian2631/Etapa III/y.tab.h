/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FALSE = 258,
    TRUE = 259,
    NUMBER = 260,
    CONST_CHAR = 261,
    IDENT = 262,
    _BEGIN = 263,
    BOOLEAN = 264,
    CHAR = 265,
    DO = 266,
    ELSE = 267,
    END = 268,
    ENDIF = 269,
    ENDWHILE = 270,
    EXIT = 271,
    IF = 272,
    INTEGER = 273,
    PROCEDURE = 274,
    PROGRAM = 275,
    READ = 276,
    REFERENCE = 277,
    REPEAT = 278,
    RETURN = 279,
    THEN = 280,
    TYPE = 281,
    UNTIL = 282,
    VALUE = 283,
    WHILE = 284,
    WRITE = 285,
    OR = 286,
    AND = 287,
    NOT = 288,
    NE = 289,
    EQ = 290,
    LE = 291,
    LT = 292,
    GT = 293,
    GE = 294,
    PLUS = 295,
    MINUS = 296,
    MULT = 297,
    DIV = 298,
    EXP = 299,
    UMINUS = 300,
    ATR = 301
  };
#endif
/* Tokens.  */
#define FALSE 258
#define TRUE 259
#define NUMBER 260
#define CONST_CHAR 261
#define IDENT 262
#define _BEGIN 263
#define BOOLEAN 264
#define CHAR 265
#define DO 266
#define ELSE 267
#define END 268
#define ENDIF 269
#define ENDWHILE 270
#define EXIT 271
#define IF 272
#define INTEGER 273
#define PROCEDURE 274
#define PROGRAM 275
#define READ 276
#define REFERENCE 277
#define REPEAT 278
#define RETURN 279
#define THEN 280
#define TYPE 281
#define UNTIL 282
#define VALUE 283
#define WHILE 284
#define WRITE 285
#define OR 286
#define AND 287
#define NOT 288
#define NE 289
#define EQ 290
#define LE 291
#define LT 292
#define GT 293
#define GE 294
#define PLUS 295
#define MINUS 296
#define MULT 297
#define DIV 298
#define EXP 299
#define UMINUS 300
#define ATR 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "translate.y" /* yacc.c:1921  */

    int valor;
    char *ident;

#line 155 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
