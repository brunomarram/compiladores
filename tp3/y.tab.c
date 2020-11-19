/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "translate.y" /* yacc.c:339  */

#include <stdio.h>
int yylex();
void yyerror(char *s); // const char *s

#line 72 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 7 "translate.y" /* yacc.c:355  */

  float decimal;
  int boolean;
  int integer;

#line 244 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   557

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      65,    66,     2,     2,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    64,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    47,    47,    47,    47,    47,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      76,    77,    81,    85,    86,    90,    94,    98,   101,   102,
     106,   110,   114,   118,   119,   123,   124,   128,   129,   130,
     131,   135,   139,   140,   144,   145,   146,   147,   148,   152,
     153,   154,   155,   156,   157,   158,   162,   163,   164,   168,
     169,   170,   174,   175,   179,   183,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     204,   208,   209,   210,   214,   218,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASTERISCO", "BARRA", "CHAPEU", "MENOS",
  "PERCENTUAL", "SHIFTLEFT", "SHIFTRIGHT", "OPERADORDOIDO", "DIFERENTE",
  "IGUAL", "IGUALIGUAL", "MAIOROUIGUAL", "MAIORQUE", "MAIS",
  "MENOROUIGUAL", "MENORQUE", "MODIFICADORESPECIAL", "MODIFICADORSINAL",
  "MODIFICADORSOMENTELEITURA", "MODIFICADORTAMANHO", "MODIFICADORTIPO",
  "EDOUBLE", "ELOGICO", "PIPE", "PIPEDOUBLE", "ABREEXPRESSAO",
  "FECHAEXPRESSAO", "ABREESCOPO", "FECHAESCOPO", "VOLATILE", "REGISTER",
  "DOUBLE", "INT", "CHAR", "FLOAT", "VOID", "BOOLEAN", "SIGNED",
  "UNSIGNED", "LONG", "SHORT", "CONST", "ID", "DEFAULT", "IF", "ELSE",
  "ELSEIF", "BREAK", "CASE", "CONTINUE", "RETURN", "SWITCH", "DO", "WHILE",
  "FOR", "GOTO", "LETTER", "POSITIVE", "NEGATIVE", "DECIMAL", "SIZEOF",
  "';'", "'('", "')'", "':'", "','", "$accept", "break", "term", "expr",
  "case", "continue", "conditional", "definicaoVariavel",
  "definicaoFuncao", "do", "elseif", "for", "goto", "label",
  "modificadorSinal", "modificadorTamanho", "modificadorTipo",
  "modificadorSomenteLeitura", "modificadorEspecial",
  "modificadoresFuncao", "modificadoresVariaveis", "tipo_parametros",
  "parametros", "return", "sizeof", "function_call", "stmt", "switch",
  "variosCase", "while", "start_point", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    59,    40,    41,    58,    44
};
# endif

#define YYPACT_NINF -69

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     332,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,    81,   144,   152,   -69,   -69,   310,
      53,     3,    33,   -69,   -69,   -69,   343,    51,   -69,   -69,
     -69,   332,   -69,   276,   198,   298,   -25,   -69,   -69,   -69,
     -69,   -69,   198,   -69,   156,   -69,    34,   276,   131,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   -69,
     494,    -3,   -69,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,    42,    43,     8,    13,   130,    54,    49,
      73,    76,    62,    82,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,    16,   -69,   -69,   238,   311,   198,   -69,
     -69,   -69,   197,    64,   494,   198,   494,    44,    52,    70,
     -69,   494,    55,   222,   -69,   -24,   384,   -69,    88,    29,
     411,    56,   -69,   -69,    94,    68,   -69,   -69,    86,   311,
     104,   121,    97,   124,   475,   114,   -69,   111,   139,   145,
     -45,   159,   494,    42,   263,   -69,   -69,   170,   132,   198,
     153,    22,   198,    35,   494,   198,   494,    24,   -69,   -69,
      11,   438,   -69,    17,   465,   154,   494,   -69,   155,   186,
     -69,   494,   177,   -69,   494,   494,    36,   178,   -69
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      58,    44,    43,    52,    53,    47,    48,    49,    50,    45,
      46,    51,    96,    95,    55,    56,    57,    62,    61,     0,
       0,     0,     0,    55,    56,    57,    54,     0,    60,    63,
      64,    59,     1,    68,     0,     0,     0,     4,     3,     5,
       6,     7,     0,    29,     0,    67,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,    66,    28,     8,     9,    10,    21,    22,    25,    26,
      27,    11,    14,    15,    16,    17,    18,    19,    20,    12,
      13,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    86,    85,    80,    82,
      89,    87,    88,     0,    81,    79,     0,    71,     0,     2,
      32,    73,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     4,     0,    70,     0,     0,    72,     0,     0,
       0,     0,    42,    41,     0,    78,    77,    76,     0,    71,
      39,     0,     0,     0,     0,     0,    75,    69,     0,    33,
      93,     0,     0,     4,     0,    74,    38,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,    92,    90,
       0,     0,    94,     0,     0,     0,     0,    91,     0,     0,
      34,    31,     0,    37,     0,    30,     0,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -65,   -42,   -69,   -69,    87,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   102,   103,   105,   -69,   -69,   244,
      45,   203,   106,   -69,   -69,   -69,   -68,   -69,    91,   -69,
     -69
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   104,    43,    44,   170,   105,   106,    12,    13,   107,
     159,   108,   109,   128,    28,    29,    30,    17,    18,    26,
      31,    36,   135,   110,   111,   112,   145,   114,   180,   115,
      21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   168,   113,    32,    46,   148,   169,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    47,   149,    20,   189,   130,    65,    66,
      67,    68,   134,   179,   116,   122,   139,   168,   141,     1,
     152,    33,   169,    34,    70,    47,   182,   197,   168,     2,
     117,   118,   119,   169,   133,   187,   136,   120,    35,   124,
     131,   131,   123,   140,   134,     3,     4,     5,     6,     7,
       8,   186,    35,   131,   173,     9,    10,    11,    27,   131,
     131,   125,    14,    15,   126,    16,   183,   127,   185,   138,
     129,   142,   164,   -60,   -60,   144,   143,   151,   192,   146,
     154,    23,    24,   155,    25,   -60,   196,   177,    23,    24,
     181,    25,   131,   184,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     156,   160,   158,   161,   162,    65,    66,    67,    68,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    37,   -63,   -63,   165,   149,
      65,    66,    67,    68,   -64,   -64,    94,   172,   -63,    38,
      39,    40,    41,   167,   121,    42,   -64,    72,   175,   176,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,   194,   178,   191,   193,
      69,    65,    66,    67,    68,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   195,   198,    37,    19,   166,    65,    66,    67,    68,
      71,   171,     0,     0,     0,   157,     0,    38,    39,    40,
      41,   137,     0,    42,     0,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     1,   132,     0,     0,   147,    65,    66,    67,
      68,     0,     2,     0,     0,     0,     0,    38,    39,    40,
      41,     0,     0,    42,     1,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     2,     0,     1,     0,     9,    10,
      11,   -65,     0,     0,     0,     0,     2,   174,     0,     0,
       3,     4,     5,     6,     7,     8,     0,     0,     1,     0,
       9,    10,    11,    45,     5,     6,     7,     8,     2,     1,
       0,     0,     9,    10,     0,    22,    37,     0,     0,     2,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
      38,    39,    40,    41,     9,    10,    11,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     0,   150,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,    65,    66,    67,    68,     0,
     153,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,   188,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,   190,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    67,    68,
     163,     0,    94,     0,     0,    95,     0,    96,    97,    98,
      99,   100,   101,   102,    38,    39,    40,    41,   103,    93,
      42,    94,     0,     0,    95,     0,    96,    97,    98,    99,
     100,   101,   102,     0,     0,     0,     0,   103
};

static const yytype_int16 yycheck[] =
{
      42,    46,    70,     0,    29,    29,    51,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    68,    68,     0,    29,    31,    24,    25,
      26,    27,   117,    31,    12,    97,   124,    46,   126,     6,
      31,    28,    51,    12,    30,    68,    31,    31,    46,    16,
      28,    28,    64,    51,   116,    64,   118,    64,    33,    30,
      64,    64,    28,   125,   149,    32,    33,    34,    35,    36,
      37,    67,    47,    64,   162,    42,    43,    44,    45,    64,
      64,    28,     0,     0,    28,     0,   174,    45,   176,    45,
      28,    67,   154,    32,    33,    45,    64,    29,   186,    64,
      64,    19,    19,    29,    19,    44,   194,   169,    26,    26,
     172,    26,    64,   175,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      64,    30,    48,    56,    30,    24,    25,    26,    27,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    45,    32,    33,    64,    68,
      24,    25,    26,    27,    32,    33,    47,    28,    44,    59,
      60,    61,    62,    48,    64,    65,    44,    66,    28,    67,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    30,    64,    64,    64,
      64,    24,    25,    26,    27,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    64,    64,    45,     0,   158,    24,    25,    26,    27,
      47,   160,    -1,    -1,    -1,   149,    -1,    59,    60,    61,
      62,    64,    -1,    65,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     6,    45,    -1,    -1,    64,    24,    25,    26,
      27,    -1,    16,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    65,     6,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    16,    -1,     6,    -1,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    16,    64,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,     6,    -1,
      42,    43,    44,    45,    34,    35,    36,    37,    16,     6,
      -1,    -1,    42,    43,    -1,    45,    45,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      59,    60,    61,    62,    42,    43,    44,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    43,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      45,    -1,    47,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    45,
      65,    47,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    16,    32,    33,    34,    35,    36,    37,    42,
      43,    44,    76,    77,    83,    84,    85,    86,    87,    88,
      89,    99,    45,    83,    84,    85,    88,    45,    83,    84,
      85,    89,     0,    28,    12,    89,    90,    45,    59,    60,
      61,    62,    65,    71,    72,    45,    29,    68,    72,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    24,    25,    26,    27,    64,
      30,    90,    66,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    45,    47,    50,    52,    53,    54,    55,
      56,    57,    58,    63,    70,    74,    75,    78,    80,    81,
      92,    93,    94,    95,    96,    98,    12,    28,    28,    64,
      64,    64,    72,    28,    30,    28,    28,    45,    82,    28,
      31,    64,    45,    72,    71,    91,    72,    64,    45,    95,
      72,    95,    67,    64,    45,    95,    64,    64,    29,    68,
      29,    29,    31,    29,    64,    29,    64,    91,    48,    79,
      30,    56,    30,    45,    72,    64,    75,    48,    46,    51,
      73,    97,    28,    95,    64,    28,    67,    72,    64,    31,
      97,    72,    31,    95,    72,    95,    67,    64,    29,    29,
      29,    64,    95,    64,    30,    64,    95,    31,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    75,    75,    76,    77,    78,    79,    79,
      80,    81,    82,    83,    83,    84,    84,    85,    85,    85,
      85,    86,    87,    87,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    92,    92,    93,    94,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    97,    97,    97,    98,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       5,     4,     2,     5,     9,     5,     8,     9,     2,     0,
      12,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     0,     3,     2,     0,     3,
       1,     0,     3,     2,     5,     5,     4,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     3,     2,     0,     7,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 43 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 60 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 61 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 62 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 63 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 64 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 65 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 69 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 70 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 71 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 72 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 76 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 77 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 85 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 86 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 90 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 94 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 98 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 101 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 102 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 106 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 118 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 119 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 123 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 124 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 128 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 129 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 130 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 131 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 135 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 139 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 140 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 144 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 145 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 146 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 147 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 148 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 153 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 154 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 155 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 156 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 157 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 158 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 162 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 163 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 164 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 168 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 169 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 170 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 174 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 175 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 179 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 183 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 187 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 188 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 189 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 190 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 191 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 192 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 193 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 194 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 195 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 196 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 197 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 198 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 199 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 200 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 204 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 208 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 209 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 210 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 214 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 218 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 219 "translate.y" /* yacc.c:1646  */
    { /* vazio */ }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2099 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
  return yyresult;
}
#line 222 "translate.y" /* yacc.c:1906  */
 

int lineno = 0;

/* auxiliary routines */
// #include "lex.yy.c"  
   
/* yacc error handler */
void yyerror(char *s) { // const char *s
  // fprintf(stderr, "%s\n", s);
  printf("%s\n", s);
  printf("line %d\n", lineno);
}

// int main(void) { 
//   return yyparse(); 
// }

void main() {
  yyparse();
}
