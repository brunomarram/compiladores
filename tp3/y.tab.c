/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translate.y"

  #include "lex.yy.c"  
  #include <stdio.h>
  int yylex();
  void yyerror(char *s); // const char *s

#line 78 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 266 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_START = 3,                      /* START  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASTERISCO = 5,                  /* ASTERISCO  */
  YYSYMBOL_BARRA = 6,                      /* BARRA  */
  YYSYMBOL_CHAPEU = 7,                     /* CHAPEU  */
  YYSYMBOL_MENOS = 8,                      /* MENOS  */
  YYSYMBOL_PERCENTUAL = 9,                 /* PERCENTUAL  */
  YYSYMBOL_SHIFTLEFT = 10,                 /* SHIFTLEFT  */
  YYSYMBOL_SHIFTRIGHT = 11,                /* SHIFTRIGHT  */
  YYSYMBOL_OPERADORDOIDO = 12,             /* OPERADORDOIDO  */
  YYSYMBOL_DIFERENTE = 13,                 /* DIFERENTE  */
  YYSYMBOL_IGUAL = 14,                     /* IGUAL  */
  YYSYMBOL_IGUALIGUAL = 15,                /* IGUALIGUAL  */
  YYSYMBOL_MAIOROUIGUAL = 16,              /* MAIOROUIGUAL  */
  YYSYMBOL_MAIORQUE = 17,                  /* MAIORQUE  */
  YYSYMBOL_MAIS = 18,                      /* MAIS  */
  YYSYMBOL_MENOROUIGUAL = 19,              /* MENOROUIGUAL  */
  YYSYMBOL_MENORQUE = 20,                  /* MENORQUE  */
  YYSYMBOL_MODIFICADORESPECIAL = 21,       /* MODIFICADORESPECIAL  */
  YYSYMBOL_MODIFICADORSINAL = 22,          /* MODIFICADORSINAL  */
  YYSYMBOL_MODIFICADORSOMENTELEITURA = 23, /* MODIFICADORSOMENTELEITURA  */
  YYSYMBOL_MODIFICADORTAMANHO = 24,        /* MODIFICADORTAMANHO  */
  YYSYMBOL_MODIFICADORTIPO = 25,           /* MODIFICADORTIPO  */
  YYSYMBOL_EDOUBLE = 26,                   /* EDOUBLE  */
  YYSYMBOL_ELOGICO = 27,                   /* ELOGICO  */
  YYSYMBOL_PIPE = 28,                      /* PIPE  */
  YYSYMBOL_PIPEDOUBLE = 29,                /* PIPEDOUBLE  */
  YYSYMBOL_ABREEXPRESSAO = 30,             /* ABREEXPRESSAO  */
  YYSYMBOL_FECHAEXPRESSAO = 31,            /* FECHAEXPRESSAO  */
  YYSYMBOL_ABREESCOPO = 32,                /* ABREESCOPO  */
  YYSYMBOL_FECHAESCOPO = 33,               /* FECHAESCOPO  */
  YYSYMBOL_VOLATILE = 34,                  /* VOLATILE  */
  YYSYMBOL_REGISTER = 35,                  /* REGISTER  */
  YYSYMBOL_DOUBLE = 36,                    /* DOUBLE  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_CHAR = 38,                      /* CHAR  */
  YYSYMBOL_FLOAT = 39,                     /* FLOAT  */
  YYSYMBOL_VOID = 40,                      /* VOID  */
  YYSYMBOL_BOOLEAN = 41,                   /* BOOLEAN  */
  YYSYMBOL_SIGNED = 42,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 43,                  /* UNSIGNED  */
  YYSYMBOL_LONG = 44,                      /* LONG  */
  YYSYMBOL_SHORT = 45,                     /* SHORT  */
  YYSYMBOL_CONST = 46,                     /* CONST  */
  YYSYMBOL_ID = 47,                        /* ID  */
  YYSYMBOL_DEFAULT = 48,                   /* DEFAULT  */
  YYSYMBOL_IF = 49,                        /* IF  */
  YYSYMBOL_ELSE = 50,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 51,                    /* ELSEIF  */
  YYSYMBOL_BREAK = 52,                     /* BREAK  */
  YYSYMBOL_CASE = 53,                      /* CASE  */
  YYSYMBOL_CONTINUE = 54,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 55,                    /* RETURN  */
  YYSYMBOL_SWITCH = 56,                    /* SWITCH  */
  YYSYMBOL_DO = 57,                        /* DO  */
  YYSYMBOL_WHILE = 58,                     /* WHILE  */
  YYSYMBOL_FOR = 59,                       /* FOR  */
  YYSYMBOL_GOTO = 60,                      /* GOTO  */
  YYSYMBOL_LETTER = 61,                    /* LETTER  */
  YYSYMBOL_POSITIVE = 62,                  /* POSITIVE  */
  YYSYMBOL_NEGATIVE = 63,                  /* NEGATIVE  */
  YYSYMBOL_DECIMAL = 64,                   /* DECIMAL  */
  YYSYMBOL_SIZEOF = 65,                    /* SIZEOF  */
  YYSYMBOL_66_ = 66,                       /* '('  */
  YYSYMBOL_67_ = 67,                       /* ')'  */
  YYSYMBOL_68_ = 68,                       /* ':'  */
  YYSYMBOL_69_ = 69,                       /* ';'  */
  YYSYMBOL_70_ = 70,                       /* ','  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_break = 72,                     /* break  */
  YYSYMBOL_term = 73,                      /* term  */
  YYSYMBOL_expr = 74,                      /* expr  */
  YYSYMBOL_case = 75,                      /* case  */
  YYSYMBOL_continue = 76,                  /* continue  */
  YYSYMBOL_conditional = 77,               /* conditional  */
  YYSYMBOL_elseif = 78,                    /* elseif  */
  YYSYMBOL_definicaoVariavel = 79,         /* definicaoVariavel  */
  YYSYMBOL_definicaoFuncao = 80,           /* definicaoFuncao  */
  YYSYMBOL_do = 81,                        /* do  */
  YYSYMBOL_for = 82,                       /* for  */
  YYSYMBOL_goto = 83,                      /* goto  */
  YYSYMBOL_label = 84,                     /* label  */
  YYSYMBOL_modificadoresVariaveis = 85,    /* modificadoresVariaveis  */
  YYSYMBOL_tipo_parametros = 86,           /* tipo_parametros  */
  YYSYMBOL_parametros = 87,                /* parametros  */
  YYSYMBOL_return = 88,                    /* return  */
  YYSYMBOL_sizeof = 89,                    /* sizeof  */
  YYSYMBOL_function_call = 90,             /* function_call  */
  YYSYMBOL_stmt_list = 91,                 /* stmt_list  */
  YYSYMBOL_stmt = 92,                      /* stmt  */
  YYSYMBOL_switch = 93,                    /* switch  */
  YYSYMBOL_variosCase = 94,                /* variosCase  */
  YYSYMBOL_bloco = 95,                     /* bloco  */
  YYSYMBOL_while = 96,                     /* while  */
  YYSYMBOL_start_point = 97                /* start_point  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      66,    67,     2,     2,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    69,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    50,    50,    50,    50,    50,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      79,    80,    84,    88,    89,    90,    94,    95,    96,    97,
     101,   105,   109,   113,   117,   121,   133,   134,   135,   136,
     137,   138,   139,   143,   144,   145,   149,   150,   151,   155,
     156,   157,   161,   165,   169,   170,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     191,   195,   196,   197,   201,   202,   206,   210
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "START", "END",
  "ASTERISCO", "BARRA", "CHAPEU", "MENOS", "PERCENTUAL", "SHIFTLEFT",
  "SHIFTRIGHT", "OPERADORDOIDO", "DIFERENTE", "IGUAL", "IGUALIGUAL",
  "MAIOROUIGUAL", "MAIORQUE", "MAIS", "MENOROUIGUAL", "MENORQUE",
  "MODIFICADORESPECIAL", "MODIFICADORSINAL", "MODIFICADORSOMENTELEITURA",
  "MODIFICADORTAMANHO", "MODIFICADORTIPO", "EDOUBLE", "ELOGICO", "PIPE",
  "PIPEDOUBLE", "ABREEXPRESSAO", "FECHAEXPRESSAO", "ABREESCOPO",
  "FECHAESCOPO", "VOLATILE", "REGISTER", "DOUBLE", "INT", "CHAR", "FLOAT",
  "VOID", "BOOLEAN", "SIGNED", "UNSIGNED", "LONG", "SHORT", "CONST", "ID",
  "DEFAULT", "IF", "ELSE", "ELSEIF", "BREAK", "CASE", "CONTINUE", "RETURN",
  "SWITCH", "DO", "WHILE", "FOR", "GOTO", "LETTER", "POSITIVE", "NEGATIVE",
  "DECIMAL", "SIZEOF", "'('", "')'", "':'", "';'", "','", "$accept",
  "break", "term", "expr", "case", "continue", "conditional", "elseif",
  "definicaoVariavel", "definicaoFuncao", "do", "for", "goto", "label",
  "modificadoresVariaveis", "tipo_parametros", "parametros", "return",
  "sizeof", "function_call", "stmt_list", "stmt", "switch", "variosCase",
  "bloco", "while", "start_point", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    40,    41,    58,    59,
      44
};
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   176,    11,   -35,     1,     2,   -85,   -85,    68,    10,
      35,    39,    40,   -14,   -85,   -85,   -85,   -85,    41,    91,
     -85,   -85,   346,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,    96,    37,   -85,   -85,   -85,    84,   131,
      91,   346,   -85,    60,   176,    91,   176,    43,    44,    61,
     -85,   157,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,   -85,   176,    91,    52,   -85,   -28,   238,    87,
      86,   265,    56,   -85,   -85,   108,   -85,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   -85,   346,   -85,
     -85,   -85,   -85,   -85,    99,   -26,   -85,   131,   155,    95,
      83,   110,    91,   -85,   -85,   175,   155,    52,    78,   176,
     -85,   -43,   -44,   119,   176,     9,   -85,    80,   123,   155,
     128,   -85,    92,    91,    90,    64,    91,   146,   176,   -85,
     -85,    91,   176,    75,   -85,   -85,    57,   292,   -85,   150,
     319,   113,   176,   -85,   120,   155,   155,   -85,   121,   -85,
     -85,   137,   -85,   141,   155,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     2,    32,    61,     0,
       0,     0,     0,     0,     3,     5,     6,     7,     0,     0,
      70,    29,    79,    71,    73,    78,    77,    72,    67,    69,
      76,    74,    75,     0,     0,    68,    66,     1,     0,    58,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    64,     0,    55,    57,     0,     0,     0,
       0,     0,     0,    45,    44,     0,    28,     8,     9,    10,
      21,    22,    25,    26,    27,    11,    14,    15,    16,    17,
      18,    19,    20,    12,    13,    23,    24,    65,    40,    48,
      47,    49,    50,    51,     0,     0,    63,    58,     0,     0,
       0,     0,     0,    62,    54,    46,     0,    55,    56,     0,
      85,    33,    83,     0,     0,     0,    41,    53,     0,     0,
       0,    34,     0,     0,     0,    83,     0,     0,     0,    84,
      35,     0,     0,     0,    82,    80,     0,     0,    86,     0,
       0,     0,     0,    81,     0,     0,     0,    31,     0,    42,
      43,    36,    30,    37,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -38,    -6,   -85,   -85,   -85,    32,   -85,   -85,
     -85,   -85,   -85,   -85,   -84,    79,    88,   -85,   -85,   200,
     -63,    -1,   -85,    94,   -30,   -85,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,   144,    23,    24,   141,    25,    26,
      27,    28,    29,    48,   114,   115,    77,    30,    31,    32,
      33,   130,    35,   156,   131,    36,     2
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    76,    41,   116,   142,   126,     1,   139,   140,   143,
     107,    37,    38,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     125,    39,    40,    47,    78,    68,    69,    70,    71,    81,
      43,   125,   117,    80,   127,    82,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   138,    44,   108,    45,
      46,    49,    34,   109,   110,   111,   112,   113,   148,    76,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,   136,   155,    74,   -52,
      72,    68,    69,    70,    71,   142,    73,    79,    85,   150,
     143,    83,   142,    84,    75,     4,   135,   143,   119,   120,
     109,   110,   111,   112,   113,   122,   163,   132,    34,    14,
      15,    16,    17,   147,    19,   170,   171,   153,    50,   123,
     157,   133,   134,   162,   175,   160,   124,   159,   117,   146,
     127,   161,    14,    15,    16,    17,   149,    19,   151,   154,
     152,   168,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    50,   158,
       3,   165,   167,    68,    69,    70,    71,   129,   140,   169,
     172,   174,    14,    15,    16,    17,   109,   110,   111,   112,
     113,     3,     4,   173,     5,   128,   137,     6,    42,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     4,    86,     5,   145,     0,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     0,
       0,     0,     0,     0,    68,    69,    70,    71,     0,   118,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,     0,     0,
       0,    68,    69,    70,    71,     0,   121,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,     0,     0,     0,    68,    69,
      70,    71,     0,   164,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,     0,     0,     0,    68,    69,    70,    71,     0,
     166,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     0,     0,     0,
       0,     0,    68,    69,    70,    71
};

static const yytype_int16 yycheck[] =
{
       1,    39,     8,    31,    48,    31,     3,    50,    51,    53,
      73,     0,    47,    19,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     114,    30,    30,    47,    40,    26,    27,    28,    29,    45,
      30,   125,    70,    44,    70,    46,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   129,    32,    74,    30,
      30,    30,    73,    21,    22,    23,    24,    25,    69,   117,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   126,    33,    14,    47,
       4,    26,    27,    28,    29,    48,    69,    47,    47,   139,
      53,    68,    48,    69,    30,    47,   122,    53,    31,    33,
      21,    22,    23,    24,    25,    69,    69,    32,   129,    61,
      62,    63,    64,   134,    66,   165,   166,   143,    47,    31,
     146,    58,    32,    68,   174,   151,    47,   148,    70,    30,
      70,   152,    61,    62,    63,    64,    33,    66,    30,    69,
      68,   162,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    47,    33,
      25,    31,    69,    26,    27,    28,    29,    32,    51,    69,
      69,    50,    61,    62,    63,    64,    21,    22,    23,    24,
      25,    25,    47,   171,    49,   117,   127,    52,     8,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    47,    67,    49,   132,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    31,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    31,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    31,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      31,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    97,    25,    47,    49,    52,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      72,    73,    74,    76,    77,    79,    80,    81,    82,    83,
      88,    89,    90,    91,    92,    93,    96,     0,    47,    30,
      30,    74,    90,    30,    32,    30,    30,    47,    84,    30,
      47,    74,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    26,    27,
      28,    29,     4,    69,    14,    30,    73,    87,    74,    47,
      92,    74,    92,    68,    69,    47,    67,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    91,    74,    21,
      22,    23,    24,    25,    85,    86,    31,    70,    31,    31,
      33,    31,    69,    31,    47,    85,    31,    70,    87,    32,
      92,    95,    32,    58,    32,    74,    95,    86,    91,    50,
      51,    78,    48,    53,    75,    94,    30,    92,    69,    33,
      95,    30,    68,    74,    69,    33,    94,    74,    33,    92,
      74,    92,    68,    69,    31,    31,    31,    69,    92,    69,
      95,    95,    69,    78,    50,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    76,    77,    77,    77,    78,    78,    78,    78,
      79,    80,    81,    82,    83,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    89,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    94,    94,    94,    95,    95,    96,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       5,     4,     1,     5,     6,     7,     5,     6,     8,     0,
       4,     6,     9,     9,     3,     2,     2,     1,     1,     1,
       1,     1,     0,     3,     2,     0,     3,     1,     0,     2,
       2,     1,     4,     4,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     3,     2,     0,     3,     1,     7,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* break: BREAK  */
#line 46 "translate.y"
          { /* vazio */ }
#line 1503 "y.tab.c"
    break;

  case 7: /* term: DECIMAL  */
#line 50 "translate.y"
                                                { /* vazio */ }
#line 1509 "y.tab.c"
    break;

  case 8: /* expr: expr ASTERISCO expr  */
#line 54 "translate.y"
                        { /* vazio */ }
#line 1515 "y.tab.c"
    break;

  case 9: /* expr: expr BARRA expr  */
#line 55 "translate.y"
                    { /* vazio */ }
#line 1521 "y.tab.c"
    break;

  case 10: /* expr: expr CHAPEU expr  */
#line 56 "translate.y"
                     { /* vazio */ }
#line 1527 "y.tab.c"
    break;

  case 11: /* expr: expr DIFERENTE expr  */
#line 57 "translate.y"
                        { /* vazio */ }
#line 1533 "y.tab.c"
    break;

  case 12: /* expr: expr EDOUBLE expr  */
#line 58 "translate.y"
                      { /* vazio */ }
#line 1539 "y.tab.c"
    break;

  case 13: /* expr: expr ELOGICO expr  */
#line 59 "translate.y"
                      { /* vazio */ }
#line 1545 "y.tab.c"
    break;

  case 14: /* expr: expr IGUAL expr  */
#line 60 "translate.y"
                    { /* vazio */ }
#line 1551 "y.tab.c"
    break;

  case 15: /* expr: expr IGUALIGUAL expr  */
#line 61 "translate.y"
                         { /* vazio */ }
#line 1557 "y.tab.c"
    break;

  case 16: /* expr: expr MAIOROUIGUAL expr  */
#line 62 "translate.y"
                           { /* vazio */ }
#line 1563 "y.tab.c"
    break;

  case 17: /* expr: expr MAIORQUE expr  */
#line 63 "translate.y"
                       { /* vazio */ }
#line 1569 "y.tab.c"
    break;

  case 18: /* expr: expr MAIS expr  */
#line 64 "translate.y"
                   { /* vazio */ }
#line 1575 "y.tab.c"
    break;

  case 19: /* expr: expr MENOROUIGUAL expr  */
#line 65 "translate.y"
                           { /* vazio */ }
#line 1581 "y.tab.c"
    break;

  case 20: /* expr: expr MENORQUE expr  */
#line 66 "translate.y"
                       { /* vazio */ }
#line 1587 "y.tab.c"
    break;

  case 21: /* expr: expr MENOS expr  */
#line 67 "translate.y"
                    { /* vazio */ }
#line 1593 "y.tab.c"
    break;

  case 22: /* expr: expr PERCENTUAL expr  */
#line 68 "translate.y"
                         { /* vazio */ }
#line 1599 "y.tab.c"
    break;

  case 23: /* expr: expr PIPE expr  */
#line 69 "translate.y"
                   { /* vazio */ }
#line 1605 "y.tab.c"
    break;

  case 24: /* expr: expr PIPEDOUBLE expr  */
#line 70 "translate.y"
                         { /* vazio */ }
#line 1611 "y.tab.c"
    break;

  case 25: /* expr: expr SHIFTLEFT expr  */
#line 71 "translate.y"
                        { /* vazio */ }
#line 1617 "y.tab.c"
    break;

  case 26: /* expr: expr SHIFTRIGHT expr  */
#line 72 "translate.y"
                         { /* vazio */ }
#line 1623 "y.tab.c"
    break;

  case 27: /* expr: expr OPERADORDOIDO expr  */
#line 73 "translate.y"
                            { /* vazio */ }
#line 1629 "y.tab.c"
    break;

  case 28: /* expr: '(' expr ')'  */
#line 74 "translate.y"
                 { /* vazio */ }
#line 1635 "y.tab.c"
    break;

  case 29: /* expr: term  */
#line 75 "translate.y"
         { /* vazio */ }
#line 1641 "y.tab.c"
    break;

  case 30: /* case: CASE expr ':' stmt ';'  */
#line 79 "translate.y"
                           { /* vazio */ }
#line 1647 "y.tab.c"
    break;

  case 31: /* case: DEFAULT ':' stmt ';'  */
#line 80 "translate.y"
                         { /* vazio */ }
#line 1653 "y.tab.c"
    break;

  case 32: /* continue: CONTINUE  */
#line 84 "translate.y"
             { /* vazio */ }
#line 1659 "y.tab.c"
    break;

  case 33: /* conditional: IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco  */
#line 88 "translate.y"
                                               { /* vazio */ }
#line 1665 "y.tab.c"
    break;

  case 34: /* conditional: IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif  */
#line 89 "translate.y"
                                                      { /* vazio */ }
#line 1671 "y.tab.c"
    break;

  case 35: /* conditional: IF ABREEXPRESSAO expr FECHAEXPRESSAO bloco ELSE bloco  */
#line 90 "translate.y"
                                                          { /* vazio */ }
#line 1677 "y.tab.c"
    break;

  case 36: /* elseif: ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco  */
#line 94 "translate.y"
                                                   { /* vazio */ }
#line 1683 "y.tab.c"
    break;

  case 37: /* elseif: ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif  */
#line 95 "translate.y"
                                                          { /* vazio */ }
#line 1689 "y.tab.c"
    break;

  case 38: /* elseif: ELSEIF ABREEXPRESSAO expr FECHAEXPRESSAO bloco elseif ELSE bloco  */
#line 96 "translate.y"
                                                                     { /* vazio */ }
#line 1695 "y.tab.c"
    break;

  case 39: /* elseif: %empty  */
#line 97 "translate.y"
              { /* vazio */ }
#line 1701 "y.tab.c"
    break;

  case 40: /* definicaoVariavel: MODIFICADORTIPO ID IGUAL expr  */
#line 101 "translate.y"
                                  { /* vazio */ }
#line 1707 "y.tab.c"
    break;

  case 41: /* definicaoFuncao: MODIFICADORTIPO ID ABREEXPRESSAO tipo_parametros FECHAEXPRESSAO bloco  */
#line 105 "translate.y"
                                                                          { /* vazio */ }
#line 1713 "y.tab.c"
    break;

  case 42: /* do: DO ABREESCOPO stmt FECHAESCOPO WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ';'  */
#line 109 "translate.y"
                                                                             { /* vazio */ }
#line 1719 "y.tab.c"
    break;

  case 43: /* for: FOR ABREEXPRESSAO stmt ';' expr ';' stmt FECHAEXPRESSAO bloco  */
#line 113 "translate.y"
                                                                  { /* vazio */ }
#line 1725 "y.tab.c"
    break;

  case 44: /* goto: GOTO label ';'  */
#line 117 "translate.y"
                   { /* vazio */ }
#line 1731 "y.tab.c"
    break;

  case 45: /* label: ID ':'  */
#line 121 "translate.y"
           { /* vazio */ }
#line 1737 "y.tab.c"
    break;

  case 46: /* modificadoresVariaveis: modificadoresVariaveis modificadoresVariaveis  */
#line 133 "translate.y"
                                                  { /* vazio */ }
#line 1743 "y.tab.c"
    break;

  case 47: /* modificadoresVariaveis: MODIFICADORSINAL  */
#line 134 "translate.y"
                     { /* vazio */ }
#line 1749 "y.tab.c"
    break;

  case 48: /* modificadoresVariaveis: MODIFICADORESPECIAL  */
#line 135 "translate.y"
                        { /* vazio */ }
#line 1755 "y.tab.c"
    break;

  case 49: /* modificadoresVariaveis: MODIFICADORSOMENTELEITURA  */
#line 136 "translate.y"
                              { /* vazio */ }
#line 1761 "y.tab.c"
    break;

  case 50: /* modificadoresVariaveis: MODIFICADORTAMANHO  */
#line 137 "translate.y"
                       { /* vazio */ }
#line 1767 "y.tab.c"
    break;

  case 51: /* modificadoresVariaveis: MODIFICADORTIPO  */
#line 138 "translate.y"
                    { /* vazio */ }
#line 1773 "y.tab.c"
    break;

  case 52: /* modificadoresVariaveis: %empty  */
#line 139 "translate.y"
              { /* vazio */ }
#line 1779 "y.tab.c"
    break;

  case 53: /* tipo_parametros: tipo_parametros ',' tipo_parametros  */
#line 143 "translate.y"
                                        { /* vazio */ }
#line 1785 "y.tab.c"
    break;

  case 54: /* tipo_parametros: modificadoresVariaveis ID  */
#line 144 "translate.y"
                              { /* vazio */ }
#line 1791 "y.tab.c"
    break;

  case 55: /* tipo_parametros: %empty  */
#line 145 "translate.y"
              { /* vazio */ }
#line 1797 "y.tab.c"
    break;

  case 56: /* parametros: parametros ',' parametros  */
#line 149 "translate.y"
                              { /* vazio */ }
#line 1803 "y.tab.c"
    break;

  case 57: /* parametros: term  */
#line 150 "translate.y"
         { /* vazio */ }
#line 1809 "y.tab.c"
    break;

  case 58: /* parametros: %empty  */
#line 151 "translate.y"
              { /* vazio */ }
#line 1815 "y.tab.c"
    break;

  case 59: /* return: RETURN expr  */
#line 155 "translate.y"
                { /* vazio */ }
#line 1821 "y.tab.c"
    break;

  case 60: /* return: RETURN function_call  */
#line 156 "translate.y"
                         { /* vazio */ }
#line 1827 "y.tab.c"
    break;

  case 61: /* return: RETURN  */
#line 157 "translate.y"
           { /* vazio */ }
#line 1833 "y.tab.c"
    break;

  case 62: /* sizeof: SIZEOF ABREEXPRESSAO ID FECHAEXPRESSAO  */
#line 161 "translate.y"
                                           { /* vazio */ }
#line 1839 "y.tab.c"
    break;

  case 63: /* function_call: ID ABREEXPRESSAO parametros FECHAEXPRESSAO  */
#line 165 "translate.y"
                                               { /* vazio */ }
#line 1845 "y.tab.c"
    break;

  case 66: /* stmt: while  */
#line 174 "translate.y"
          { /* vazio */ }
#line 1851 "y.tab.c"
    break;

  case 67: /* stmt: for  */
#line 175 "translate.y"
        { /* vazio */ }
#line 1857 "y.tab.c"
    break;

  case 68: /* stmt: switch  */
#line 176 "translate.y"
           { /* vazio */ }
#line 1863 "y.tab.c"
    break;

  case 69: /* stmt: goto  */
#line 177 "translate.y"
         { /* vazio */ }
#line 1869 "y.tab.c"
    break;

  case 70: /* stmt: break  */
#line 178 "translate.y"
          { /* vazio */ }
#line 1875 "y.tab.c"
    break;

  case 71: /* stmt: continue  */
#line 179 "translate.y"
             { /* vazio */ }
#line 1881 "y.tab.c"
    break;

  case 72: /* stmt: do  */
#line 180 "translate.y"
       { /* vazio */ }
#line 1887 "y.tab.c"
    break;

  case 73: /* stmt: conditional  */
#line 181 "translate.y"
                { /* vazio */ }
#line 1893 "y.tab.c"
    break;

  case 74: /* stmt: sizeof  */
#line 182 "translate.y"
           { /* vazio */ }
#line 1899 "y.tab.c"
    break;

  case 75: /* stmt: function_call  */
#line 183 "translate.y"
                  { /* vazio */ }
#line 1905 "y.tab.c"
    break;

  case 76: /* stmt: return  */
#line 184 "translate.y"
           { /* vazio */ }
#line 1911 "y.tab.c"
    break;

  case 77: /* stmt: definicaoFuncao  */
#line 185 "translate.y"
                    { /* vazio */ }
#line 1917 "y.tab.c"
    break;

  case 78: /* stmt: definicaoVariavel  */
#line 186 "translate.y"
                      { /* vazio */ }
#line 1923 "y.tab.c"
    break;

  case 80: /* switch: SWITCH ABREEXPRESSAO ID FECHAEXPRESSAO ABREESCOPO variosCase FECHAESCOPO  */
#line 191 "translate.y"
                                                                             { /* vazio */ }
#line 1929 "y.tab.c"
    break;

  case 81: /* variosCase: variosCase variosCase ';'  */
#line 195 "translate.y"
                              { /* vazio */ }
#line 1935 "y.tab.c"
    break;

  case 82: /* variosCase: case ';'  */
#line 196 "translate.y"
             { /* vazio */ }
#line 1941 "y.tab.c"
    break;

  case 83: /* variosCase: %empty  */
#line 197 "translate.y"
              { /* vazio */ }
#line 1947 "y.tab.c"
    break;

  case 86: /* while: WHILE ABREEXPRESSAO expr FECHAEXPRESSAO ABREESCOPO stmt FECHAESCOPO  */
#line 206 "translate.y"
                                                                        { /* vazio */ }
#line 1953 "y.tab.c"
    break;


#line 1957 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 213 "translate.y"
 

int lineno = 0;

/* auxiliary routines */
   
/* yacc error handler */
void yyerror(char *s) { // const char *s
  // fprintf(stderr, "%s\n", s);
  printf("\n\nErro na linha: %d %s %s", lineno, s, yytext);
}

int main() {
  if(!yyparse()) printf("\n\nPrograma correto\n");
  else printf("\n\nPrograma errado\n");
  return 0;
}
