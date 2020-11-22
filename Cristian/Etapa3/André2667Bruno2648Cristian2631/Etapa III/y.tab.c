/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translate.y" /* yacc.c:337  */

   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <math.h>
   #include "tabela.h"
   #include "tabela.c"

   int yylex(void);
   void yyerror(char *s);
   extern int yylineno; /* Variável responsável por armazenar a linha atual do arquivo fonte */
   int tipo_id_atual; /* Variável responsável por armazenar o tipo do identificador atual */
   int ocorreu_erro = 0; /* Variável responsável por sinalizar se houve ou não um erro (não exibir as tabelas) */

   int parametro_atual = 0; /* Variável responsável por armazenar o índice referente ao parâmetro atual do procedimento atual */
   int procedimento_atual = 0; /* Variável responsável por armazenar o índice referente ao procedimento atual na tabela de procedimentos */
   int tipo_procedimento_atual; /* Variável responsável por armazenar o tipo do procedimento atual */
   char *nome_parametro_atual; /* Variável responsável por armazenar o nome do identificador atual */
   int dentro_procedimento = 0; /* Variável responsável por indicar quando um procedimento está sendo definido */

#line 91 "y.tab.c" /* yacc.c:337  */
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
#line 22 "translate.y" /* yacc.c:352  */

    int valor;
    char *ident;

#line 231 "y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   278

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

#define YYUNDEFTOK  2
#define YYMAXUTOK   301

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    47,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    72,    76,    77,    81,    82,    83,    87,
      91,    92,    93,    94,    98,   102,   106,   110,   114,   118,
     122,   126,   130,   134,   139,   140,   144,   148,   149,   153,
     154,   155,   156,   160,   166,   167,   171,   177,   178,   182,
     183,   187,   191,   192,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   209,   213,   217,   221,   222,   227,
     231,   235,   239,   243,   247,   248,   252,   260,   261,   265,
     270,   276,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   299,   300,   301,   310,   311,
     315,   316,   320,   321,   325,   329,   330,   334
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FALSE", "TRUE", "NUMBER", "CONST_CHAR",
  "IDENT", "_BEGIN", "BOOLEAN", "CHAR", "DO", "ELSE", "END", "ENDIF",
  "ENDWHILE", "EXIT", "IF", "INTEGER", "PROCEDURE", "PROGRAM", "READ",
  "REFERENCE", "REPEAT", "RETURN", "THEN", "TYPE", "UNTIL", "VALUE",
  "WHILE", "WRITE", "OR", "AND", "NOT", "NE", "EQ", "LE", "LT", "GT", "GE",
  "PLUS", "MINUS", "MULT", "DIV", "EXP", "UMINUS", "ATR", "';'", "':'",
  "'='", "'('", "')'", "','", "$accept", "program", "bloco", "declaracoes",
  "declaracao", "decl_de_var", "tipo", "M0", "M1", "M2", "def_de_tipo",
  "nome_do_tipo", "definicao_de_tipo", "limites", "tipo_definido",
  "decl_de_proc", "proc_cab", "proc_corpo", "emit_return",
  "lista_de_parametros", "tipo_retornado", "parametro", "modo",
  "nome_do_proc", "lista_de_comandos", "lista_de_ids", "vazio",
  "espec_de_parametros", "comando", "comando_de_atribuicao",
  "comando_while", "comando_repeat", "comando_if", "comando_read",
  "comando_write", "comando_return", "comando_exit", "rotulo", "variavel",
  "chamada_ou_indexacao", "chamada_de_proc", "indices", "variavel2",
  "expr", "constante", "int_ou_char", "inteiro", "booleano",
  "identificador", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    59,    58,    61,
      40,    41,    44
};
# endif

#define YYPACT_NINF -143

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-143)))

#define YYTABLE_NINF -72

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,  -143,    33,  -143,  -143,  -143,  -143,  -143,    29,  -143,
    -143,   111,    21,    49,    52,    19,  -143,     1,  -143,    31,
    -143,  -143,  -143,    37,    55,  -143,  -143,    19,    11,    19,
    -143,    11,  -143,    11,    34,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,    38,    57,    60,  -143,     7,    51,
     -19,  -143,  -143,  -143,    19,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,    11,    11,    11,  -143,  -143,
     207,  -143,  -143,  -143,  -143,    58,  -143,   111,   221,    11,
     221,  -143,    70,   111,    11,  -143,    11,    11,    61,    63,
    -143,  -143,    19,    56,  -143,   185,  -143,  -143,  -143,    11,
      11,    11,    11,    11,    11,    11,    11,    11,    11,    11,
     -15,   168,   111,  -143,  -143,   221,   221,   221,  -143,    19,
      29,    59,  -143,  -143,   111,    11,    11,   117,   117,   117,
     117,   117,   117,    22,    22,    69,    69,    69,  -143,  -143,
    -143,    71,  -143,  -143,  -143,    35,  -143,  -143,   -12,   234,
      56,    11,   111,   114,  -143,  -143,  -143,  -143,    26,  -143,
      44,  -143,   112,   221,    -6,    80,    85,  -143,    35,  -143,
    -143,  -143,    88,  -143,  -143,    44,   114,  -143,    19,   111,
    -143,  -143,  -143,    -4,  -143
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    41,     0,    41,    16,     1,    41,     5,    41,    14,
      97,     0,    11,    12,    10,     0,     2,     0,     6,     0,
       7,    13,     8,    41,     0,    32,    21,     0,     0,     0,
      41,     0,    41,     0,    41,    37,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,    68,    52,     0,     0,
      67,    41,    18,     4,     0,    41,    22,    25,    26,    41,
      62,    96,    95,    94,    93,     0,     0,     0,    87,    65,
       0,    88,    90,    92,    91,    64,    59,     0,    61,     0,
      60,    41,     0,     0,     0,    66,     0,     0,     0,     9,
      39,    41,     0,    74,    86,     0,    41,    41,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    53,    54,    70,    69,    41,     0,
      41,    41,    36,    89,     0,     0,     0,    75,    76,    80,
      77,    78,    79,    81,    82,    83,    84,    85,    41,    41,
      38,     0,    15,    40,    41,     0,    43,    23,    41,    72,
      73,     0,     0,     0,    17,    24,    35,    34,     0,    27,
       0,    57,     0,    56,     0,     0,     0,    42,     0,    11,
      12,    10,     0,    41,    55,     0,     0,    28,     0,     0,
      19,    20,    33,     0,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,    17,    83,  -143,  -143,  -130,    -9,    -5,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,     2,  -143,
    -143,   -29,  -143,  -143,   -72,  -143,     5,  -143,   -63,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,    -7,   -10,
    -143,  -143,  -143,    89,  -143,  -143,  -142,  -143,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    16,     6,    17,    18,    19,     8,   141,     3,
      20,    51,   154,   165,    21,    22,    23,    56,    57,   158,
      24,   159,   160,   121,    34,    89,     9,   147,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    68,    69,
      47,    48,    49,    70,    71,    72,    73,    74,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    46,   161,    50,    45,   110,     4,    52,     7,   174,
     184,   166,   138,    25,    61,    62,    63,    64,    10,    60,
     114,    77,    76,    79,     1,    82,    10,   -64,    58,   -63,
     172,   -71,    81,     5,   181,    81,    10,    11,    12,    13,
     -30,    81,    88,    81,    65,   180,    90,    14,    53,   140,
      92,    10,   148,   169,   170,    15,    66,   156,    85,    86,
       7,    67,   171,   157,   107,   108,   109,    46,   -31,    50,
      45,   -29,   112,    46,    59,    50,    45,   167,   168,    54,
     164,    81,   120,   113,   122,    55,    83,   124,   125,   126,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    87,    46,    84,    50,    45,   -65,   183,   -71,   145,
     118,   143,    26,   109,    46,   119,    50,    45,    10,    63,
      78,   153,    80,   142,   173,    25,   146,    27,    28,   151,
     152,   175,    29,   176,    30,    31,   178,   144,    91,   177,
      32,    33,    46,   162,    50,    45,   155,     0,     0,    58,
       0,     0,    26,   142,    93,    94,    95,   105,   106,   107,
     108,   109,     0,     0,   179,     0,     0,    26,   111,    46,
     182,    50,    45,   115,     0,   116,   117,     0,     0,   139,
       0,     0,     0,     0,     0,     0,     0,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    97,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   149,   150,    97,    98,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
       0,     0,    96,     0,     0,     0,   123,     0,    97,    98,
     163,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    97,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109
};

static const yytype_int16 yycheck[] =
{
       8,    11,    14,    11,    11,    77,     1,    15,     3,    15,
      14,   153,    27,     8,     3,     4,     5,     6,     7,    27,
      83,    30,    29,    32,    20,    34,     7,    46,    23,    48,
     160,    50,    47,     0,   176,    47,     7,     8,     9,    10,
      19,    47,    51,    47,    33,   175,    54,    18,    47,   112,
      59,     7,   124,     9,    10,    26,    45,    22,    51,    52,
      55,    50,    18,    28,    42,    43,    44,    77,    19,    77,
      77,    19,    81,    83,    19,    83,    83,    51,    52,    48,
     152,    47,    91,    13,    92,    48,    48,    96,    97,    98,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    50,   112,    46,   112,   112,    46,   179,    50,    50,
      49,   119,   120,    44,   124,    52,   124,   124,     7,     5,
      31,    50,    33,   118,    12,   120,   121,    16,    17,   138,
     139,    51,    21,    48,    23,    24,    48,   120,    55,   168,
      29,    30,   152,   148,   152,   152,   144,    -1,    -1,   144,
      -1,    -1,   160,   148,    65,    66,    67,    40,    41,    42,
      43,    44,    -1,    -1,   173,    -1,    -1,   175,    79,   179,
     178,   179,   179,    84,    -1,    86,    87,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,   125,   126,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    25,    -1,    -1,    -1,    51,    -1,    31,    32,
     151,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    54,    62,    79,     0,    56,    79,    60,    79,
       7,     8,     9,    10,    18,    26,    55,    57,    58,    59,
      63,    67,    68,    69,    73,    79,   101,    16,    17,    21,
      23,    24,    29,    30,    77,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
     101,    64,   101,    47,    48,    48,    70,    71,    79,    19,
     101,     3,     4,     5,     6,    33,    45,    50,    91,    92,
      96,    97,    98,    99,   100,   101,    91,    60,    96,    60,
      96,    47,    60,    48,    46,    51,    52,    50,    60,    78,
     101,    56,    60,    96,    96,    96,    25,    31,    32,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      77,    96,    60,    13,    81,    96,    96,    96,    49,    52,
      60,    76,   101,    51,    60,    60,    60,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    27,    11,
      81,    61,    79,   101,    55,    50,    79,    80,    77,    96,
      96,    60,    60,    50,    65,    71,    22,    28,    72,    74,
      75,    14,    61,    96,    77,    66,    99,    51,    52,     9,
      10,    18,    59,    12,    15,    51,    48,    74,    48,    60,
      59,    99,   101,    77,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    56,    57,    57,    57,    58,
      59,    59,    59,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    70,    71,    72,    72,    73,
      73,    73,    73,    74,    75,    75,    76,    77,    77,    78,
      78,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    83,    84,    85,    85,    86,
      87,    88,    89,    90,    91,    91,    92,    93,    93,    94,
      94,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    99,   100,   100,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     4,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     6,     1,     4,
       3,     1,     2,     5,     5,     1,     1,     1,     3,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     4,     1,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     7,     6,     6,    10,     2,
       2,     2,     2,     1,     1,     1,     2,     1,     1,     3,
       3,     1,     4,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
        case 2:
#line 68 "translate.y" /* yacc.c:1652  */
    {}
#line 1480 "y.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 72 "translate.y" /* yacc.c:1652  */
    {}
#line 1486 "y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 76 "translate.y" /* yacc.c:1652  */
    {}
#line 1492 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 77 "translate.y" /* yacc.c:1652  */
    {}
#line 1498 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 81 "translate.y" /* yacc.c:1652  */
    {}
#line 1504 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 82 "translate.y" /* yacc.c:1652  */
    {}
#line 1510 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 83 "translate.y" /* yacc.c:1652  */
    {}
#line 1516 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 87 "translate.y" /* yacc.c:1652  */
    {}
#line 1522 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 91 "translate.y" /* yacc.c:1652  */
    {tipo_id_atual = T_INT;}
#line 1528 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 92 "translate.y" /* yacc.c:1652  */
    {tipo_id_atual = T_BOOLEAN;}
#line 1534 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 93 "translate.y" /* yacc.c:1652  */
    {tipo_id_atual = T_CHAR;}
#line 1540 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 94 "translate.y" /* yacc.c:1652  */
    {}
#line 1546 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 98 "translate.y" /* yacc.c:1652  */
    {}
#line 1552 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 102 "translate.y" /* yacc.c:1652  */
    {}
#line 1558 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 106 "translate.y" /* yacc.c:1652  */
    {}
#line 1564 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 110 "translate.y" /* yacc.c:1652  */
    {}
#line 1570 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 114 "translate.y" /* yacc.c:1652  */
    {}
#line 1576 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 118 "translate.y" /* yacc.c:1652  */
    {}
#line 1582 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 122 "translate.y" /* yacc.c:1652  */
    {}
#line 1588 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 126 "translate.y" /* yacc.c:1652  */
    {}
#line 1594 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 130 "translate.y" /* yacc.c:1652  */
    {dentro_procedimento = 0;}
#line 1600 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 135 "translate.y" /* yacc.c:1652  */
    {}
#line 1606 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 139 "translate.y" /* yacc.c:1652  */
    {}
#line 1612 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 140 "translate.y" /* yacc.c:1652  */
    {}
#line 1618 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 144 "translate.y" /* yacc.c:1652  */
    {}
#line 1624 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 148 "translate.y" /* yacc.c:1652  */
    {}
#line 1630 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 149 "translate.y" /* yacc.c:1652  */
    {}
#line 1636 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 153 "translate.y" /* yacc.c:1652  */
    {dentro_procedimento = 1; tipo_procedimento_atual = T_INT;}
#line 1642 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 154 "translate.y" /* yacc.c:1652  */
    {dentro_procedimento = 1; tipo_procedimento_atual = T_BOOLEAN;}
#line 1648 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 155 "translate.y" /* yacc.c:1652  */
    {dentro_procedimento = 1; tipo_procedimento_atual = T_CHAR;}
#line 1654 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 156 "translate.y" /* yacc.c:1652  */
    {dentro_procedimento = 1; tipo_procedimento_atual = T_VOID;}
#line 1660 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 160 "translate.y" /* yacc.c:1652  */
    {Instala_Parametro(procedimento_atual, tipo_id_atual, (yyvsp[0].ident));
                                                                         parametro_atual = 0;
                                                                        }
#line 1668 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 166 "translate.y" /* yacc.c:1652  */
    {}
#line 1674 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 167 "translate.y" /* yacc.c:1652  */
    {}
#line 1680 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 171 "translate.y" /* yacc.c:1652  */
    {Instala_Procedimento((yyvsp[0].ident), tipo_procedimento_atual);
                                                                         procedimento_atual = Recupera_Procedimento_Atual((yyvsp[0].ident));
                                                                        }
#line 1688 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 177 "translate.y" /* yacc.c:1652  */
    {}
#line 1694 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 178 "translate.y" /* yacc.c:1652  */
    {}
#line 1700 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 182 "translate.y" /* yacc.c:1652  */
    {if(dentro_procedimento == 0) Instala((yyvsp[0].ident), tipo_id_atual);}
#line 1706 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 183 "translate.y" /* yacc.c:1652  */
    {if(dentro_procedimento == 0) Instala((yyvsp[0].ident), tipo_id_atual);}
#line 1712 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 187 "translate.y" /* yacc.c:1652  */
    {}
#line 1718 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 191 "translate.y" /* yacc.c:1652  */
    {}
#line 1724 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 192 "translate.y" /* yacc.c:1652  */
    {}
#line 1730 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 196 "translate.y" /* yacc.c:1652  */
    {}
#line 1736 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 197 "translate.y" /* yacc.c:1652  */
    {}
#line 1742 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 198 "translate.y" /* yacc.c:1652  */
    {}
#line 1748 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 199 "translate.y" /* yacc.c:1652  */
    {}
#line 1754 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 200 "translate.y" /* yacc.c:1652  */
    {}
#line 1760 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 201 "translate.y" /* yacc.c:1652  */
    {}
#line 1766 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 202 "translate.y" /* yacc.c:1652  */
    {}
#line 1772 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 203 "translate.y" /* yacc.c:1652  */
    {}
#line 1778 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 204 "translate.y" /* yacc.c:1652  */
    {}
#line 1784 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 205 "translate.y" /* yacc.c:1652  */
    {}
#line 1790 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 209 "translate.y" /* yacc.c:1652  */
    {if(dentro_procedimento == 0) Atualiza_Valor_Identificador((yyvsp[-2].ident), (yyvsp[0].valor));}
#line 1796 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 213 "translate.y" /* yacc.c:1652  */
    {}
#line 1802 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 217 "translate.y" /* yacc.c:1652  */
    {}
#line 1808 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 221 "translate.y" /* yacc.c:1652  */
    {}
#line 1814 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 223 "translate.y" /* yacc.c:1652  */
    {}
#line 1820 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 227 "translate.y" /* yacc.c:1652  */
    {}
#line 1826 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 231 "translate.y" /* yacc.c:1652  */
    {}
#line 1832 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 235 "translate.y" /* yacc.c:1652  */
    {}
#line 1838 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 239 "translate.y" /* yacc.c:1652  */
    {}
#line 1844 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 243 "translate.y" /* yacc.c:1652  */
    {}
#line 1850 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 247 "translate.y" /* yacc.c:1652  */
    {(yyval.ident) = strdup((yyvsp[0].ident));}
#line 1856 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 248 "translate.y" /* yacc.c:1652  */
    {}
#line 1862 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 252 "translate.y" /* yacc.c:1652  */
    {if(parametro_atual != tabela_procedimentos[procedimento_atual].numero_parametros) {
                                                                            printf("\nerro semântico próximo à linha %d: quantidade insuficiente de parâmetros no procedimento %s\n", yylineno, tabela_procedimentos[procedimento_atual].nome);
                                                                            exit(1);
                                                                         }
                                                                        }
#line 1872 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 260 "translate.y" /* yacc.c:1652  */
    {}
#line 1878 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 261 "translate.y" /* yacc.c:1652  */
    {}
#line 1884 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 265 "translate.y" /* yacc.c:1652  */
    {procedimento_atual = Recupera_Procedimento_Atual((yyvsp[-2].ident));
                                                                         parametro_atual = 0;
                                                                         Confere_Tipo_Parametro(nome_parametro_atual, procedimento_atual, parametro_atual);
                                                                         parametro_atual++;
                                                                        }
#line 1894 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 270 "translate.y" /* yacc.c:1652  */
    {Confere_Tipo_Parametro(nome_parametro_atual, procedimento_atual, parametro_atual);
                                                                         parametro_atual++;
                                                                        }
#line 1902 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 276 "translate.y" /* yacc.c:1652  */
    {(yyval.ident) = strdup((yyvsp[0].ident));}
#line 1908 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 280 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-3].valor) || (yyvsp[-1].valor); Confere_Overflow((yyval.valor));}
#line 1914 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 281 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-3].valor) && (yyvsp[-1].valor); Confere_Overflow((yyval.valor));}
#line 1920 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 282 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = !(yyvsp[-1].valor); Confere_Overflow((yyval.valor));}
#line 1926 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 283 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) != (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1932 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 284 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) == (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1938 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 285 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) < (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1944 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 286 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) > (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1950 "y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 287 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) >= (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1956 "y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 288 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) <= (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1962 "y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 289 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) + (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1968 "y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 290 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) - (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1974 "y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 291 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[-2].valor) * (yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 1980 "y.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 292 "translate.y" /* yacc.c:1652  */
    {if((yyvsp[0].valor) == 0) {
                                                                           printf("\nerro semântico próximo à linha %d: divisão por zero\n", yylineno);
                                                                           exit(1);
                                                                         }
                                                                         (yyval.valor) = (yyvsp[-2].valor) / (yyvsp[0].valor);
                                                                         Confere_Overflow((yyval.valor));
                                                                        }
#line 1992 "y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 299 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = pow((yyvsp[-2].valor), (yyvsp[0].valor)); Confere_Overflow((yyval.valor));}
#line 1998 "y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 300 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = -(yyvsp[0].valor); Confere_Overflow((yyval.valor));}
#line 2004 "y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 301 "translate.y" /* yacc.c:1652  */
    {if(dentro_procedimento == 0) {
                                                                           int valor_variavel = Recupera_Valor_Identificador((yyvsp[0].ident));
                                                                           (yyval.valor) = valor_variavel;
                                                                           Confere_Overflow((yyval.valor));
                                                                         }
                                                                         else
                                                                           (yyval.valor) = 0;
                                                                         nome_parametro_atual = strdup((yyvsp[0].ident));
                                                                        }
#line 2018 "y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 310 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[0].valor);}
#line 2024 "y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 311 "translate.y" /* yacc.c:1652  */
    {}
#line 2030 "y.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 315 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[0].valor);}
#line 2036 "y.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 316 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[0].valor);}
#line 2042 "y.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 320 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[0].valor);}
#line 2048 "y.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 321 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[0].valor);}
#line 2054 "y.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 325 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = (yyvsp[0].valor);}
#line 2060 "y.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 329 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = 1;}
#line 2066 "y.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 330 "translate.y" /* yacc.c:1652  */
    {(yyval.valor) = 0;}
#line 2072 "y.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 334 "translate.y" /* yacc.c:1652  */
    {(yyval.ident) = strdup((yyvsp[0].ident));}
#line 2078 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2082 "y.tab.c" /* yacc.c:1652  */
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 337 "translate.y" /* yacc.c:1918  */

/* Procedimento para informar a ocorrência de caracteres inválidos */
void yyerror(char *s) {
    printf("\n\nerro sintático próximo à linha %d\n", yylineno);
    ocorreu_erro++;
}

int main(void){
    iniciaListaNO();
    printf("%d\t", yylineno);
    yyparse();
    if(ocorreu_erro == 0) {
      printf("\n\nPrograma sintaticamente correto\n");
      Imprime_Tabela();
      Imprime_Tabela_Procedimentos();
    }
    return 0;
}
