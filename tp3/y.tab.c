/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "translate.y"

  #include "lex.yy.c"  
  #include <stdio.h>
  int yylex();
  void yyerror(char *s); // const char *s


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 8 "translate.y"
{
  float decimal;
  int boolean;
  int integer;
}
/* Line 193 of yacc.c.  */
#line 239 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 252 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      23,    27,    31,    35,    39,    43,    47,    51,    55,    59,
      63,    67,    71,    75,    79,    83,    87,    91,    95,    97,
     103,   108,   110,   116,   123,   131,   137,   144,   153,   154,
     159,   166,   176,   186,   190,   193,   196,   198,   200,   202,
     204,   206,   207,   211,   214,   215,   219,   221,   222,   225,
     228,   230,   235,   240,   243,   247,   249,   253,   255,   257,
     259,   261,   263,   265,   267,   269,   271,   273,   275,   277,
     285,   289,   292,   293,   297,   299,   307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      97,     0,    -1,    52,    -1,    61,    -1,    47,    -1,    62,
      -1,    63,    -1,    64,    -1,    74,     5,    74,    -1,    74,
       6,    74,    -1,    74,     7,    74,    -1,    74,    13,    74,
      -1,    74,    26,    74,    -1,    74,    27,    74,    -1,    74,
      15,    74,    -1,    74,    16,    74,    -1,    74,    17,    74,
      -1,    74,    18,    74,    -1,    74,    19,    74,    -1,    74,
      20,    74,    -1,    74,     8,    74,    -1,    74,     9,    74,
      -1,    74,    28,    74,    -1,    74,    29,    74,    -1,    74,
      10,    74,    -1,    74,    11,    74,    -1,    74,    12,    74,
      -1,    66,    74,    67,    -1,    73,    -1,    53,    74,    68,
      92,    69,    -1,    48,    68,    92,    69,    -1,    54,    -1,
      49,    30,    74,    31,    95,    -1,    49,    30,    74,    31,
      95,    78,    -1,    49,    30,    74,    31,    95,    50,    95,
      -1,    51,    30,    74,    31,    95,    -1,    51,    30,    74,
      31,    95,    78,    -1,    51,    30,    74,    31,    95,    78,
      50,    95,    -1,    -1,    25,    47,    14,    74,    -1,    25,
      47,    30,    86,    31,    95,    -1,    57,    32,    92,    33,
      58,    30,    74,    31,    69,    -1,    59,    30,    92,    69,
      74,    69,    92,    31,    95,    -1,    60,    84,    69,    -1,
      47,    68,    -1,    85,    85,    -1,    22,    -1,    21,    -1,
      23,    -1,    24,    -1,    25,    -1,    -1,    86,    70,    86,
      -1,    85,    47,    -1,    -1,    87,    70,    87,    -1,    73,
      -1,    -1,    55,    74,    -1,    55,    90,    -1,    55,    -1,
      65,    30,    47,    31,    -1,    47,    30,    87,    31,    -1,
      92,    69,    -1,    92,    69,    91,    -1,    96,    -1,    74,
      14,    74,    -1,    82,    -1,    93,    -1,    83,    -1,    72,
      -1,    76,    -1,    81,    -1,    77,    -1,    89,    -1,    90,
      -1,    88,    -1,    80,    -1,    79,    -1,    56,    30,    47,
      31,    32,    94,    33,    -1,    94,    94,    69,    -1,    75,
      69,    -1,    -1,    32,    91,    33,    -1,    92,    -1,    58,
      30,    74,    31,    32,    92,    33,    -1,     3,    91,     4,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    50,    50,    50,    50,    50,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    78,
      79,    83,    87,    88,    89,    93,    94,    95,    96,   100,
     104,   108,   112,   116,   120,   132,   133,   134,   135,   136,
     137,   138,   142,   143,   144,   148,   149,   150,   154,   155,
     156,   160,   164,   168,   169,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   190,
     194,   195,   196,   200,   201,   205,   209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "END", "ASTERISCO", "BARRA",
  "CHAPEU", "MENOS", "PERCENTUAL", "SHIFTLEFT", "SHIFTRIGHT",
  "OPERADORDOIDO", "DIFERENTE", "IGUAL", "IGUALIGUAL", "MAIOROUIGUAL",
  "MAIORQUE", "MAIS", "MENOROUIGUAL", "MENORQUE", "MODIFICADORESPECIAL",
  "MODIFICADORSINAL", "MODIFICADORSOMENTELEITURA", "MODIFICADORTAMANHO",
  "MODIFICADORTIPO", "EDOUBLE", "ELOGICO", "PIPE", "PIPEDOUBLE",
  "ABREEXPRESSAO", "FECHAEXPRESSAO", "ABREESCOPO", "FECHAESCOPO",
  "VOLATILE", "REGISTER", "DOUBLE", "INT", "CHAR", "FLOAT", "VOID",
  "BOOLEAN", "SIGNED", "UNSIGNED", "LONG", "SHORT", "CONST", "ID",
  "DEFAULT", "IF", "ELSE", "ELSEIF", "BREAK", "CASE", "CONTINUE", "RETURN",
  "SWITCH", "DO", "WHILE", "FOR", "GOTO", "LETTER", "POSITIVE", "NEGATIVE",
  "DECIMAL", "SIZEOF", "'('", "')'", "':'", "';'", "','", "$accept",
  "break", "term", "expr", "case", "continue", "conditional", "elseif",
  "definicaoVariavel", "definicaoFuncao", "do", "for", "goto", "label",
  "modificadoresVariaveis", "tipo_parametros", "parametros", "return",
  "sizeof", "function_call", "stmt_list", "stmt", "switch", "variosCase",
  "bloco", "while", "start_point", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
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
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    77,    77,    77,    78,    78,    78,    78,    79,
      80,    81,    82,    83,    84,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    88,    88,
      88,    89,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      94,    94,    94,    95,    95,    96,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     5,
       4,     1,     5,     6,     7,     5,     6,     8,     0,     4,
       6,     9,     9,     3,     2,     2,     1,     1,     1,     1,
       1,     0,     3,     2,     0,     3,     1,     0,     2,     2,
       1,     4,     4,     2,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       3,     2,     0,     3,     1,     7,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     2,    31,    60,     0,
       0,     0,     0,     0,     3,     5,     6,     7,     0,     0,
      70,    28,     0,    71,    73,    78,    77,    72,    67,    69,
      76,    74,    75,     0,     0,    68,    65,     1,     0,    57,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    63,     0,    54,    56,     0,     0,     0,
       0,     0,     0,    44,    43,     0,    27,     8,     9,    10,
      20,    21,    24,    25,    26,    11,    66,    14,    15,    16,
      17,    18,    19,    12,    13,    22,    23,    64,    39,    47,
      46,    48,    49,    50,     0,     0,    62,    57,     0,     0,
       0,     0,     0,    61,    53,    45,     0,    54,    55,     0,
      84,    32,    82,     0,     0,     0,    40,    52,     0,     0,
       0,    33,     0,     0,     0,    82,     0,     0,     0,    83,
      34,     0,     0,     0,    81,    79,     0,     0,    85,     0,
       0,     0,     0,    80,     0,     0,     0,    30,     0,    41,
      42,    35,    29,    36,     0,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,   144,    23,    24,   141,    25,    26,
      27,    28,    29,    48,   114,   115,    77,    30,    31,    32,
      33,   130,    35,   156,   131,    36,     2
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -85
static const yytype_int16 yypact[] =
{
       3,   166,     8,   -16,     2,    10,   -85,   -85,    68,    37,
       1,    39,    40,    24,   -85,   -85,   -85,   -85,    59,   121,
     -85,   -85,   336,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,    94,    31,   -85,   -85,   -85,    -7,   335,
     121,   361,   -85,    60,   166,   121,   166,    38,    42,    61,
     -85,   147,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   -85,   166,   121,    52,   -85,   -28,   228,    82,
      81,   255,    49,   -85,   -85,    88,   -85,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   -85,   361,   -85,
     -85,   -85,   -85,   -85,    99,   -26,   -85,   335,   145,    93,
      69,   106,   121,   -85,   -85,   370,   145,    52,    71,   166,
     -85,   -39,   -44,   109,   166,     9,   -85,    72,   115,   145,
     119,   -85,   101,   121,   102,    64,   121,   117,   166,   -85,
     -85,   121,   166,    75,   -85,   -85,    57,   282,   -85,   141,
     309,   110,   166,   -85,   111,   145,   145,   -85,   112,   -85,
     -85,   127,   -85,   136,   145,   -85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -38,    -6,   -85,   -85,   -85,    17,   -85,   -85,
     -85,   -85,   -85,   -85,   -84,    62,    73,   -85,   -85,   185,
     -63,    -1,   -85,    63,   -30,   -85,   -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -52
static const yytype_int16 yytable[] =
{
      34,    76,    41,   116,   142,   126,     1,    74,    37,   143,
     107,   139,   140,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    75,    62,    63,    64,    65,    66,    67,
     125,    38,    39,    44,    78,    68,    69,    70,    71,    81,
      40,   125,   117,    80,   127,    82,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   138,    43,   108,    45,
      46,    47,    34,   109,   110,   111,   112,   113,   148,    76,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    49,
      62,    63,    64,    65,    66,    67,   136,   155,    72,   -51,
      73,    68,    69,    70,    71,   142,    83,    79,    85,   150,
     143,    84,   142,   119,   120,     4,   135,   143,   122,   123,
     109,   110,   111,   112,   113,   132,   163,   133,    34,    14,
      15,    16,    17,   147,    19,   170,   171,   153,   134,   146,
     157,   117,   127,   162,   175,   160,   124,   159,   149,   151,
     158,   161,    52,    53,    54,    55,    56,    57,    58,    59,
      60,   168,    62,    63,    64,    65,    66,    67,    50,   152,
       3,   154,   165,    68,    69,    70,    71,   129,   140,   167,
     169,   172,    14,    15,    16,    17,   174,    19,   173,   137,
     128,     3,     4,    42,     5,   145,     0,     6,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     4,    86,     5,     0,     0,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,    62,    63,    64,    65,    66,    67,     0,
       0,     0,     0,     0,    68,    69,    70,    71,     0,   118,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
      62,    63,    64,    65,    66,    67,     0,     0,     0,     0,
       0,    68,    69,    70,    71,     0,   121,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,    62,    63,    64,
      65,    66,    67,     0,     0,     0,     0,     0,    68,    69,
      70,    71,     0,   164,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,    62,    63,    64,    65,    66,    67,
       0,     0,     0,     0,     0,    68,    69,    70,    71,     0,
     166,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     0,    62,    63,    64,    65,
      66,    67,    50,     0,     0,     0,     0,    68,    69,    70,
      71,   109,   110,   111,   112,   113,    14,    15,    16,    17
};

static const yytype_int16 yycheck[] =
{
       1,    39,     8,    31,    48,    31,     3,    14,     0,    53,
      73,    50,    51,    19,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    30,    15,    16,    17,    18,    19,    20,
     114,    47,    30,    32,    40,    26,    27,    28,    29,    45,
      30,   125,    70,    44,    70,    46,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   129,    30,    74,    30,
      30,    47,    73,    21,    22,    23,    24,    25,    69,   117,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    30,
      15,    16,    17,    18,    19,    20,   126,    33,     4,    47,
      69,    26,    27,    28,    29,    48,    68,    47,    47,   139,
      53,    69,    48,    31,    33,    47,   122,    53,    69,    31,
      21,    22,    23,    24,    25,    32,    69,    58,   129,    61,
      62,    63,    64,   134,    66,   165,   166,   143,    32,    30,
     146,    70,    70,    68,   174,   151,    47,   148,    33,    30,
      33,   152,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   162,    15,    16,    17,    18,    19,    20,    47,    68,
      25,    69,    31,    26,    27,    28,    29,    32,    51,    69,
      69,    69,    61,    62,    63,    64,    50,    66,   171,   127,
     117,    25,    47,     8,    49,   132,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    47,    67,    49,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    31,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    31,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    31,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      31,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    47,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    21,    22,    23,    24,    25,    61,    62,    63,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 46 "translate.y"
    { /* vazio */ }
    break;

  case 7:
#line 50 "translate.y"
    { /* vazio */ }
    break;

  case 8:
#line 54 "translate.y"
    { /* vazio */ }
    break;

  case 9:
#line 55 "translate.y"
    { /* vazio */ }
    break;

  case 10:
#line 56 "translate.y"
    { /* vazio */ }
    break;

  case 11:
#line 57 "translate.y"
    { /* vazio */ }
    break;

  case 12:
#line 58 "translate.y"
    { /* vazio */ }
    break;

  case 13:
#line 59 "translate.y"
    { /* vazio */ }
    break;

  case 14:
#line 60 "translate.y"
    { /* vazio */ }
    break;

  case 15:
#line 61 "translate.y"
    { /* vazio */ }
    break;

  case 16:
#line 62 "translate.y"
    { /* vazio */ }
    break;

  case 17:
#line 63 "translate.y"
    { /* vazio */ }
    break;

  case 18:
#line 64 "translate.y"
    { /* vazio */ }
    break;

  case 19:
#line 65 "translate.y"
    { /* vazio */ }
    break;

  case 20:
#line 66 "translate.y"
    { /* vazio */ }
    break;

  case 21:
#line 67 "translate.y"
    { /* vazio */ }
    break;

  case 22:
#line 68 "translate.y"
    { /* vazio */ }
    break;

  case 23:
#line 69 "translate.y"
    { /* vazio */ }
    break;

  case 24:
#line 70 "translate.y"
    { /* vazio */ }
    break;

  case 25:
#line 71 "translate.y"
    { /* vazio */ }
    break;

  case 26:
#line 72 "translate.y"
    { /* vazio */ }
    break;

  case 27:
#line 73 "translate.y"
    { /* vazio */ }
    break;

  case 28:
#line 74 "translate.y"
    { /* vazio */ }
    break;

  case 29:
#line 78 "translate.y"
    { /* vazio */ }
    break;

  case 30:
#line 79 "translate.y"
    { /* vazio */ }
    break;

  case 31:
#line 83 "translate.y"
    { /* vazio */ }
    break;

  case 32:
#line 87 "translate.y"
    { /* vazio */ }
    break;

  case 33:
#line 88 "translate.y"
    { /* vazio */ }
    break;

  case 34:
#line 89 "translate.y"
    { /* vazio */ }
    break;

  case 35:
#line 93 "translate.y"
    { /* vazio */ }
    break;

  case 36:
#line 94 "translate.y"
    { /* vazio */ }
    break;

  case 37:
#line 95 "translate.y"
    { /* vazio */ }
    break;

  case 38:
#line 96 "translate.y"
    { /* vazio */ }
    break;

  case 39:
#line 100 "translate.y"
    { /* vazio */ }
    break;

  case 40:
#line 104 "translate.y"
    { /* vazio */ }
    break;

  case 41:
#line 108 "translate.y"
    { /* vazio */ }
    break;

  case 42:
#line 112 "translate.y"
    { /* vazio */ }
    break;

  case 43:
#line 116 "translate.y"
    { /* vazio */ }
    break;

  case 44:
#line 120 "translate.y"
    { /* vazio */ }
    break;

  case 45:
#line 132 "translate.y"
    { /* vazio */ }
    break;

  case 46:
#line 133 "translate.y"
    { /* vazio */ }
    break;

  case 47:
#line 134 "translate.y"
    { /* vazio */ }
    break;

  case 48:
#line 135 "translate.y"
    { /* vazio */ }
    break;

  case 49:
#line 136 "translate.y"
    { /* vazio */ }
    break;

  case 50:
#line 137 "translate.y"
    { /* vazio */ }
    break;

  case 51:
#line 138 "translate.y"
    { /* vazio */ }
    break;

  case 52:
#line 142 "translate.y"
    { /* vazio */ }
    break;

  case 53:
#line 143 "translate.y"
    { /* vazio */ }
    break;

  case 54:
#line 144 "translate.y"
    { /* vazio */ }
    break;

  case 55:
#line 148 "translate.y"
    { /* vazio */ }
    break;

  case 56:
#line 149 "translate.y"
    { /* vazio */ }
    break;

  case 57:
#line 150 "translate.y"
    { /* vazio */ }
    break;

  case 58:
#line 154 "translate.y"
    { /* vazio */ }
    break;

  case 59:
#line 155 "translate.y"
    { /* vazio */ }
    break;

  case 60:
#line 156 "translate.y"
    { /* vazio */ }
    break;

  case 61:
#line 160 "translate.y"
    { /* vazio */ }
    break;

  case 62:
#line 164 "translate.y"
    { /* vazio */ }
    break;

  case 65:
#line 173 "translate.y"
    { /* vazio */ }
    break;

  case 66:
#line 174 "translate.y"
    { /* vazio */ }
    break;

  case 67:
#line 175 "translate.y"
    { /* vazio */ }
    break;

  case 68:
#line 176 "translate.y"
    { /* vazio */ }
    break;

  case 69:
#line 177 "translate.y"
    { /* vazio */ }
    break;

  case 70:
#line 178 "translate.y"
    { /* vazio */ }
    break;

  case 71:
#line 179 "translate.y"
    { /* vazio */ }
    break;

  case 72:
#line 180 "translate.y"
    { /* vazio */ }
    break;

  case 73:
#line 181 "translate.y"
    { /* vazio */ }
    break;

  case 74:
#line 182 "translate.y"
    { /* vazio */ }
    break;

  case 75:
#line 183 "translate.y"
    { /* vazio */ }
    break;

  case 76:
#line 184 "translate.y"
    { /* vazio */ }
    break;

  case 77:
#line 185 "translate.y"
    { /* vazio */ }
    break;

  case 78:
#line 186 "translate.y"
    { /* vazio */ }
    break;

  case 79:
#line 190 "translate.y"
    { /* vazio */ }
    break;

  case 80:
#line 194 "translate.y"
    { /* vazio */ }
    break;

  case 81:
#line 195 "translate.y"
    { /* vazio */ }
    break;

  case 82:
#line 196 "translate.y"
    { /* vazio */ }
    break;

  case 85:
#line 205 "translate.y"
    { /* vazio */ }
    break;


/* Line 1267 of yacc.c.  */
#line 2036 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 212 "translate.y"
 

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
