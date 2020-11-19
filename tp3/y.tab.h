/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    START = 258,                   /* START  */
    END = 259,                     /* END  */
    ASTERISCO = 260,               /* ASTERISCO  */
    BARRA = 261,                   /* BARRA  */
    CHAPEU = 262,                  /* CHAPEU  */
    MENOS = 263,                   /* MENOS  */
    PERCENTUAL = 264,              /* PERCENTUAL  */
    SHIFTLEFT = 265,               /* SHIFTLEFT  */
    SHIFTRIGHT = 266,              /* SHIFTRIGHT  */
    OPERADORDOIDO = 267,           /* OPERADORDOIDO  */
    DIFERENTE = 268,               /* DIFERENTE  */
    IGUAL = 269,                   /* IGUAL  */
    IGUALIGUAL = 270,              /* IGUALIGUAL  */
    MAIOROUIGUAL = 271,            /* MAIOROUIGUAL  */
    MAIORQUE = 272,                /* MAIORQUE  */
    MAIS = 273,                    /* MAIS  */
    MENOROUIGUAL = 274,            /* MENOROUIGUAL  */
    MENORQUE = 275,                /* MENORQUE  */
    MODIFICADORESPECIAL = 276,     /* MODIFICADORESPECIAL  */
    MODIFICADORSINAL = 277,        /* MODIFICADORSINAL  */
    MODIFICADORSOMENTELEITURA = 278, /* MODIFICADORSOMENTELEITURA  */
    MODIFICADORTAMANHO = 279,      /* MODIFICADORTAMANHO  */
    MODIFICADORTIPO = 280,         /* MODIFICADORTIPO  */
    EDOUBLE = 281,                 /* EDOUBLE  */
    ELOGICO = 282,                 /* ELOGICO  */
    PIPE = 283,                    /* PIPE  */
    PIPEDOUBLE = 284,              /* PIPEDOUBLE  */
    ABREEXPRESSAO = 285,           /* ABREEXPRESSAO  */
    FECHAEXPRESSAO = 286,          /* FECHAEXPRESSAO  */
    ABREESCOPO = 287,              /* ABREESCOPO  */
    FECHAESCOPO = 288,             /* FECHAESCOPO  */
    VOLATILE = 289,                /* VOLATILE  */
    REGISTER = 290,                /* REGISTER  */
    DOUBLE = 291,                  /* DOUBLE  */
    INT = 292,                     /* INT  */
    CHAR = 293,                    /* CHAR  */
    FLOAT = 294,                   /* FLOAT  */
    VOID = 295,                    /* VOID  */
    BOOLEAN = 296,                 /* BOOLEAN  */
    SIGNED = 297,                  /* SIGNED  */
    UNSIGNED = 298,                /* UNSIGNED  */
    LONG = 299,                    /* LONG  */
    SHORT = 300,                   /* SHORT  */
    CONST = 301,                   /* CONST  */
    ID = 302,                      /* ID  */
    DEFAULT = 303,                 /* DEFAULT  */
    IF = 304,                      /* IF  */
    ELSE = 305,                    /* ELSE  */
    ELSEIF = 306,                  /* ELSEIF  */
    BREAK = 307,                   /* BREAK  */
    CASE = 308,                    /* CASE  */
    CONTINUE = 309,                /* CONTINUE  */
    RETURN = 310,                  /* RETURN  */
    SWITCH = 311,                  /* SWITCH  */
    DO = 312,                      /* DO  */
    WHILE = 313,                   /* WHILE  */
    FOR = 314,                     /* FOR  */
    GOTO = 315,                    /* GOTO  */
    LETTER = 316,                  /* LETTER  */
    POSITIVE = 317,                /* POSITIVE  */
    NEGATIVE = 318,                /* NEGATIVE  */
    DECIMAL = 319,                 /* DECIMAL  */
    SIZEOF = 320                   /* SIZEOF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define START 258
#define END 259
#define ASTERISCO 260
#define BARRA 261
#define CHAPEU 262
#define MENOS 263
#define PERCENTUAL 264
#define SHIFTLEFT 265
#define SHIFTRIGHT 266
#define OPERADORDOIDO 267
#define DIFERENTE 268
#define IGUAL 269
#define IGUALIGUAL 270
#define MAIOROUIGUAL 271
#define MAIORQUE 272
#define MAIS 273
#define MENOROUIGUAL 274
#define MENORQUE 275
#define MODIFICADORESPECIAL 276
#define MODIFICADORSINAL 277
#define MODIFICADORSOMENTELEITURA 278
#define MODIFICADORTAMANHO 279
#define MODIFICADORTIPO 280
#define EDOUBLE 281
#define ELOGICO 282
#define PIPE 283
#define PIPEDOUBLE 284
#define ABREEXPRESSAO 285
#define FECHAEXPRESSAO 286
#define ABREESCOPO 287
#define FECHAESCOPO 288
#define VOLATILE 289
#define REGISTER 290
#define DOUBLE 291
#define INT 292
#define CHAR 293
#define FLOAT 294
#define VOID 295
#define BOOLEAN 296
#define SIGNED 297
#define UNSIGNED 298
#define LONG 299
#define SHORT 300
#define CONST 301
#define ID 302
#define DEFAULT 303
#define IF 304
#define ELSE 305
#define ELSEIF 306
#define BREAK 307
#define CASE 308
#define CONTINUE 309
#define RETURN 310
#define SWITCH 311
#define DO 312
#define WHILE 313
#define FOR 314
#define GOTO 315
#define LETTER 316
#define POSITIVE 317
#define NEGATIVE 318
#define DECIMAL 319
#define SIZEOF 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "translate.y"

  float decimal;
  int boolean;
  int integer;

#line 202 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
