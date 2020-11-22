/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     START = 258,
     END = 259,
     ASTERISCO = 260,
     BARRA = 261,
     CHAPEU = 262,
     MENOS = 263,
     PERCENTUAL = 264,
     SHIFTLEFT = 265,
     SHIFTRIGHT = 266,
     OPERADORDOIDO = 267,
     DIFERENTE = 268,
     IGUAL = 269,
     IGUALIGUAL = 270,
     MAIOROUIGUAL = 271,
     MAIORQUE = 272,
     MAIS = 273,
     MENOROUIGUAL = 274,
     MENORQUE = 275,
     MODIFICADORESPECIAL = 276,
     MODIFICADORSINAL = 277,
     MODIFICADORSOMENTELEITURA = 278,
     MODIFICADORTAMANHO = 279,
     MODIFICADORTIPO = 280,
     EDOUBLE = 281,
     ELOGICO = 282,
     PIPE = 283,
     PIPEDOUBLE = 284,
     ABREEXPRESSAO = 285,
     FECHAEXPRESSAO = 286,
     ABREESCOPO = 287,
     FECHAESCOPO = 288,
     VOLATILE = 289,
     REGISTER = 290,
     DOUBLE = 291,
     INT = 292,
     CHAR = 293,
     FLOAT = 294,
     VOID = 295,
     BOOLEAN = 296,
     SIGNED = 297,
     UNSIGNED = 298,
     LONG = 299,
     SHORT = 300,
     CONST = 301,
     ID = 302,
     DEFAULT = 303,
     IF = 304,
     ELSE = 305,
     ELSEIF = 306,
     BREAK = 307,
     CASE = 308,
     CONTINUE = 309,
     RETURN = 310,
     SWITCH = 311,
     DO = 312,
     WHILE = 313,
     FOR = 314,
     GOTO = 315,
     LETTER = 316,
     POSITIVE = 317,
     NEGATIVE = 318,
     DECIMAL = 319,
     SIZEOF = 320
   };
#endif
/* Tokens.  */
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 8 "translate.y"
{
  float decimal;
  int boolean;
  int integer;
}
/* Line 1529 of yacc.c.  */
#line 185 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

