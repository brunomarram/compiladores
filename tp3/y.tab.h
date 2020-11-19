/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
    ASTERISCO = 258,
    BARRA = 259,
    CHAPEU = 260,
    MENOS = 261,
    PERCENTUAL = 262,
    SHIFTLEFT = 263,
    SHIFTRIGHT = 264,
    OPERADORDOIDO = 265,
    DIFERENTE = 266,
    IGUAL = 267,
    IGUALIGUAL = 268,
    MAIOROUIGUAL = 269,
    MAIORQUE = 270,
    MAIS = 271,
    MENOROUIGUAL = 272,
    MENORQUE = 273,
    MODIFICADORESPECIAL = 274,
    MODIFICADORSINAL = 275,
    MODIFICADORSOMENTELEITURA = 276,
    MODIFICADORTAMANHO = 277,
    MODIFICADORTIPO = 278,
    EDOUBLE = 279,
    ELOGICO = 280,
    PIPE = 281,
    PIPEDOUBLE = 282,
    ABREEXPRESSAO = 283,
    FECHAEXPRESSAO = 284,
    ABREESCOPO = 285,
    FECHAESCOPO = 286,
    VOLATILE = 287,
    REGISTER = 288,
    DOUBLE = 289,
    INT = 290,
    CHAR = 291,
    FLOAT = 292,
    VOID = 293,
    BOOLEAN = 294,
    SIGNED = 295,
    UNSIGNED = 296,
    LONG = 297,
    SHORT = 298,
    CONST = 299,
    ID = 300,
    DEFAULT = 301,
    IF = 302,
    ELSE = 303,
    ELSEIF = 304,
    BREAK = 305,
    CASE = 306,
    CONTINUE = 307,
    RETURN = 308,
    SWITCH = 309,
    DO = 310,
    WHILE = 311,
    FOR = 312,
    GOTO = 313,
    LETTER = 314,
    POSITIVE = 315,
    NEGATIVE = 316,
    DECIMAL = 317,
    SIZEOF = 318
  };
#endif
/* Tokens.  */
#define ASTERISCO 258
#define BARRA 259
#define CHAPEU 260
#define MENOS 261
#define PERCENTUAL 262
#define SHIFTLEFT 263
#define SHIFTRIGHT 264
#define OPERADORDOIDO 265
#define DIFERENTE 266
#define IGUAL 267
#define IGUALIGUAL 268
#define MAIOROUIGUAL 269
#define MAIORQUE 270
#define MAIS 271
#define MENOROUIGUAL 272
#define MENORQUE 273
#define MODIFICADORESPECIAL 274
#define MODIFICADORSINAL 275
#define MODIFICADORSOMENTELEITURA 276
#define MODIFICADORTAMANHO 277
#define MODIFICADORTIPO 278
#define EDOUBLE 279
#define ELOGICO 280
#define PIPE 281
#define PIPEDOUBLE 282
#define ABREEXPRESSAO 283
#define FECHAEXPRESSAO 284
#define ABREESCOPO 285
#define FECHAESCOPO 286
#define VOLATILE 287
#define REGISTER 288
#define DOUBLE 289
#define INT 290
#define CHAR 291
#define FLOAT 292
#define VOID 293
#define BOOLEAN 294
#define SIGNED 295
#define UNSIGNED 296
#define LONG 297
#define SHORT 298
#define CONST 299
#define ID 300
#define DEFAULT 301
#define IF 302
#define ELSE 303
#define ELSEIF 304
#define BREAK 305
#define CASE 306
#define CONTINUE 307
#define RETURN 308
#define SWITCH 309
#define DO 310
#define WHILE 311
#define FOR 312
#define GOTO 313
#define LETTER 314
#define POSITIVE 315
#define NEGATIVE 316
#define DECIMAL 317
#define SIZEOF 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "translate.y" /* yacc.c:1909  */

  float decimal;
  int boolean;
  int integer;

#line 186 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
