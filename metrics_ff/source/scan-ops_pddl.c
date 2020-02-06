/* A Bison parser, made by GNU Bison 3.4.1.  */

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
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ops_pddlparse
#define yylex           ops_pddllex
#define yyerror         ops_pddlerror
#define yydebug         ops_pddldebug
#define yynerrs         ops_pddlnerrs

#define yylval          ops_pddllval
#define yychar          ops_pddlchar

/* First part of user prologue.  */
#line 24 "../scan-ops_pddl.y"

#ifdef YYDEBUG
  extern int yydebug=1;
#endif


#include <stdio.h>
#include <string.h> 
#include "ff.h"
#include "memory.h"
#include "parse.h"
#include "lex-ops_pddl.h"


#ifndef SCAN_ERR
#define SCAN_ERR
#define DOMDEF_EXPECTED            0
#define DOMAIN_EXPECTED            1
#define DOMNAME_EXPECTED           2
#define LBRACKET_EXPECTED          3
#define RBRACKET_EXPECTED          4
#define DOMDEFS_EXPECTED           5
#define REQUIREM_EXPECTED          6
#define TYPEDLIST_EXPECTED         7
#define LITERAL_EXPECTED           8
#define PRECONDDEF_UNCORRECT       9
#define TYPEDEF_EXPECTED          10
#define CONSTLIST_EXPECTED        11
#define PREDDEF_EXPECTED          12 
#define NAME_EXPECTED             13
#define VARIABLE_EXPECTED         14
#define ACTIONFUNCTOR_EXPECTED    15
#define ATOM_FORMULA_EXPECTED     16
#define EFFECT_DEF_EXPECTED       17
#define NEG_FORMULA_EXPECTED      18
#define NOT_SUPPORTED             19
#define ACTION                    20
#endif


#define NAME_STR "name\0"
#define VARIABLE_STR "variable\0"
#define STANDARD_TYPE "OBJECT\0"
 

static char *serrmsg[] = {
  "domain definition expected",
  "'domain' expected",
  "domain name expected",
  "'(' expected",
  "')' expected",
  "additional domain definitions expected",
  "requirements (e.g. ':STRIPS') expected",
  "typed list of <%s> expected",
  "literal expected",
  "uncorrect precondition definition",
  "type definition expected",
  "list of constants expected",
  "predicate definition expected",
  "<name> expected",
  "<variable> expected",
  "action functor expected",
  "atomic formula expected",
  "effect definition expected",
  "negated atomic formula expected",
  "requirement %s not supported by this FF version",  
  "action definition is not correct",
  NULL
};

void opserr( int errno, char *par );
int yyerror( char *msg );
void load_ops_file( char *filename );
int supported( char *str );


static int sact_err;
static char *sact_err_par = NULL;
static PlOperator *scur_op = NULL;
static Bool sis_negated = FALSE;


int supported( char *str )

{

  int i;
  char * sup[] = { ":STRIPS", ":NEGATION", ":EQUALITY",":TYPING", 
		   ":CONDITIONAL-EFFECTS", ":NEGATIVE-PRECONDITIONS", ":DISJUNCTIVE-PRECONDITIONS", 
		   ":EXISTENTIAL-PRECONDITIONS", ":UNIVERSAL-PRECONDITIONS", 
		   ":QUANTIFIED-PRECONDITIONS", ":ADL", ":FLUENTS", ":ACTION-COSTS",
		   NULL };     

  for (i=0; NULL != sup[i]; i++) {
    if ( SAME == strcmp(sup[i], str) ) {
      return TRUE;
    }
  }
  
  return FALSE;

}


#line 183 "c/scan-ops_pddl.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_OPS_PDDL_INCLUDE_SCAN_OPS_PDDL_H_INCLUDED
# define YY_OPS_PDDL_INCLUDE_SCAN_OPS_PDDL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ops_pddldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DEFINE_TOK = 258,
    DOMAIN_TOK = 259,
    REQUIREMENTS_TOK = 260,
    TYPES_TOK = 261,
    NUMBER_TOK = 262,
    EITHER_TOK = 263,
    CONSTANTS_TOK = 264,
    PREDICATES_TOK = 265,
    FUNCTIONS_TOK = 266,
    ACTION_TOK = 267,
    VARS_TOK = 268,
    IMPLIES_TOK = 269,
    PRECONDITION_TOK = 270,
    PARAMETERS_TOK = 271,
    EFFECT_TOK = 272,
    AND_TOK = 273,
    NOT_TOK = 274,
    WHEN_TOK = 275,
    FORALL_TOK = 276,
    IMPLY_TOK = 277,
    OR_TOK = 278,
    EXISTS_TOK = 279,
    LE_TOK = 280,
    LEQ_TOK = 281,
    EQ_TOK = 282,
    GEQ_TOK = 283,
    GE_TOK = 284,
    MINUS_TOK = 285,
    AD_TOK = 286,
    MU_TOK = 287,
    DI_TOK = 288,
    ASSIGN_TOK = 289,
    SCALE_UP_TOK = 290,
    SCALE_DOWN_TOK = 291,
    INCREASE_TOK = 292,
    DECREASE_TOK = 293,
    NAME = 294,
    VARIABLE = 295,
    NUM = 296,
    OPEN_PAREN = 297,
    CLOSE_PAREN = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 133 "../scan-ops_pddl.y"


  char string[MAX_LENGTH];
  char *pstring;
  ParseExpNode *pParseExpNode;
  PlNode *pPlNode;
  FactList *pFactList;
  TokenList *pTokenList;
  TypedList *pTypedList;


#line 282 "c/scan-ops_pddl.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ops_pddllval;

int ops_pddlparse (void);

#endif /* !YY_OPS_PDDL_INCLUDE_SCAN_OPS_PDDL_H_INCLUDED  */



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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   207,   207,   207,   218,   217,   231,   241,   243,   245,
     247,   249,   251,   253,   260,   259,   269,   272,   271,   301,
     300,   310,   313,   312,   338,   337,   367,   371,   366,   382,
     386,   385,   399,   398,   412,   411,   427,   431,   426,   445,
     449,   463,   466,   485,   484,   491,   490,   505,   513,   521,
     529,   537,   545,   558,   564,   570,   576,   586,   601,   621,
     625,   638,   646,   654,   662,   670,   678,   691,   697,   712,
     731,   735,   747,   760,   768,   773,   779,   786,   793,   800,
     811,   817,   826,   833,   846,   848,   859,   865,   875,   882,
     894,   905,   907,   917,   928,   948,   950,   959,   970
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFINE_TOK", "DOMAIN_TOK",
  "REQUIREMENTS_TOK", "TYPES_TOK", "NUMBER_TOK", "EITHER_TOK",
  "CONSTANTS_TOK", "PREDICATES_TOK", "FUNCTIONS_TOK", "ACTION_TOK",
  "VARS_TOK", "IMPLIES_TOK", "PRECONDITION_TOK", "PARAMETERS_TOK",
  "EFFECT_TOK", "AND_TOK", "NOT_TOK", "WHEN_TOK", "FORALL_TOK",
  "IMPLY_TOK", "OR_TOK", "EXISTS_TOK", "LE_TOK", "LEQ_TOK", "EQ_TOK",
  "GEQ_TOK", "GE_TOK", "MINUS_TOK", "AD_TOK", "MU_TOK", "DI_TOK",
  "ASSIGN_TOK", "SCALE_UP_TOK", "SCALE_DOWN_TOK", "INCREASE_TOK",
  "DECREASE_TOK", "NAME", "VARIABLE", "NUM", "OPEN_PAREN", "CLOSE_PAREN",
  "$accept", "file", "$@1", "domain_definition", "$@2", "domain_name",
  "optional_domain_defs", "predicates_def", "$@3", "predicates_list",
  "$@4", "functions_def", "$@5", "functions_list", "$@6", "$@7",
  "require_def", "$@8", "$@9", "require_key_star", "$@10", "types_def",
  "$@11", "constants_def", "$@12", "action_def", "$@13", "$@14",
  "param_def", "action_def_body", "$@15", "$@16", "adl_goal_description",
  "adl_goal_description_star", "adl_effect", "adl_effect_star", "f_head",
  "f_exp", "literal_term", "atomic_formula_term", "term_star", "term",
  "name_plus", "predicate", "typed_list_name", "typed_list_variable", YY_NULLPTR
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
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -113,     5,   -26,  -113,    11,  -113,   -12,    30,  -113,     2,
      37,     8,    80,  -113,  -113,    37,    37,    37,    37,    37,
      37,  -113,  -113,  -113,  -113,     3,    12,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,    21,    34,    34,    77,  -113,    78,
    -113,    79,  -113,    -4,    81,    82,    83,    84,    83,    85,
    -113,    87,    90,   105,  -113,  -113,  -113,    -2,    91,  -113,
     106,  -113,   134,  -113,   108,    90,   109,    34,    90,   116,
    -113,  -113,    92,   115,    44,    87,  -113,  -113,    34,  -113,
     113,    83,     3,   151,    12,    83,   117,   118,   125,   126,
    -113,  -113,    83,  -113,  -113,  -113,  -113,   128,    83,   114,
    -113,  -113,  -113,   127,  -113,  -113,  -113,  -113,    12,  -113,
     129,   118,   118,   131,   118,   118,   132,    46,    46,    54,
      46,    46,  -113,    59,    44,   125,   133,   118,   135,    59,
     136,   136,   136,   136,   136,    44,  -113,    44,   118,   137,
     138,   139,    83,   118,   140,    83,  -113,    32,  -113,    46,
      46,  -113,  -113,    46,   141,    59,    46,    46,   142,  -113,
     125,   143,   -14,   139,   125,    83,   148,    46,    46,    46,
      46,    46,  -113,  -113,  -113,  -113,  -113,  -113,   145,   146,
    -113,   147,    46,    46,    46,    46,    59,   149,   150,   152,
    -113,  -113,   153,   154,  -113,  -113,  -113,   155,   156,   157,
     158,   159,   160,   161,   118,  -113,   118,   -20,    46,    46,
      46,   162,  -113,  -113,  -113,  -113,  -113,  -113,   125,  -113,
    -113,  -113,  -113,  -113,   163,   164,  -113,   165,   166,   167,
     168,  -113,   169,  -113,  -113,  -113,  -113,  -113,  -113,  -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     3,     0,     0,     4,     0,
       0,     0,     0,     7,     5,     0,     0,     0,     0,     0,
       0,     6,    26,    32,    34,    16,    21,    36,    11,    12,
       8,    10,     9,    13,     0,    91,    91,     0,    14,     0,
      19,     0,    27,    91,     0,     0,    95,     0,    95,     0,
      37,    29,     0,     0,    94,    33,    35,    95,     0,    15,
       0,    20,    39,    30,     0,    88,     0,    91,     0,     0,
      98,    17,    22,     0,    41,    29,    28,    89,    91,    93,
       0,    95,    16,     0,    21,    95,     0,     0,     0,     0,
      31,    92,    95,    97,    18,    24,    23,     0,    95,     0,
      43,    52,    81,     0,    45,    66,    38,    96,    21,    40,
       0,    59,     0,     0,     0,    59,     0,     0,     0,    84,
       0,     0,    90,    84,    41,    70,     0,     0,     0,    84,
       0,     0,     0,     0,     0,    41,    25,    41,    59,     0,
       0,     0,    95,     0,     0,    95,    73,     0,    74,     0,
       0,    86,    87,     0,     0,    84,     0,     0,     0,    44,
      70,     0,     0,     0,     0,    95,     0,     0,     0,     0,
       0,     0,    46,    42,    60,    53,    55,    80,     0,     0,
      54,     0,     0,     0,     0,     0,    84,     0,     0,     0,
      83,    85,     0,     0,    82,    71,    67,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    69,     0,    61,
      62,    63,    64,    65,     0,     0,    75,     0,     0,     0,
       0,    72,     0,    58,    57,    77,    76,    78,    79,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -113,  -113,  -113,  -113,  -113,  -113,    95,  -113,  -113,    86,
    -113,  -113,  -113,   -77,  -113,  -113,  -113,  -113,  -113,   101,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,   -91,
    -113,  -113,   -85,  -106,   -87,    19,   -29,  -101,   -88,  -102,
    -112,  -113,    10,  -113,   -28,   -45
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    10,     8,    14,    15,    47,    38,
      82,    16,    49,    40,    84,   108,    17,    34,    51,    64,
      75,    18,    35,    19,    36,    20,    41,    62,    74,    89,
     124,   135,   138,   139,   160,   161,   148,   149,   101,   102,
     154,   155,    66,   123,    44,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     105,   104,   100,    60,    52,     3,    68,    96,    45,   144,
     141,   158,    70,   129,     6,    54,     4,   150,   153,   156,
     157,   146,   147,   226,   163,   122,    53,   140,    69,   143,
       7,   136,   174,   159,     9,    43,    93,   105,    57,    79,
      97,    11,   164,   191,   172,    37,   173,   107,   187,   188,
      91,    21,   189,   110,    39,   192,   193,    86,   179,    87,
      42,    88,   182,   183,   184,   185,   199,   200,   201,   202,
     203,   186,   105,    43,   211,    77,   105,   197,    80,    12,
      13,   207,   208,   209,   210,    22,    23,   146,   147,    24,
      25,    26,    27,   151,   152,   146,   147,   178,   151,   152,
     181,   167,   168,   169,   170,   171,   227,   228,   229,   230,
      28,    29,    30,    31,    32,    33,    46,    48,    50,   224,
     198,   225,    83,    57,    55,    56,    63,    59,    61,    65,
     105,   232,   111,   112,    71,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    67,   125,   126,   127,   128,    72,
      73,    76,    78,   122,   129,    81,    92,    85,    95,    98,
      99,   130,   131,   132,   133,   134,   122,   103,    94,   106,
       0,   109,   137,   142,   145,   162,    90,   165,   166,   195,
     175,   176,   177,   180,   190,   194,   196,   186,   204,   205,
     206,     0,   212,   213,     0,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   231,   233,   234,   235,   236,
     237,   238,   239
};

static const yytype_int16 yycheck[] =
{
      88,    88,    87,    48,     8,     0,     8,    84,    36,   115,
     112,   123,    57,    27,     3,    43,    42,   118,   119,   120,
     121,    41,    42,    43,   126,    39,    30,   112,    30,   114,
      42,   108,   138,   124,     4,    39,    81,   125,    40,    67,
      85,    39,   127,   155,   135,    42,   137,    92,   149,   150,
      78,    43,   153,    98,    42,   156,   157,    13,   143,    15,
      39,    17,    30,    31,    32,    33,   167,   168,   169,   170,
     171,    39,   160,    39,   186,    65,   164,   164,    68,    42,
      43,   182,   183,   184,   185,     5,     6,    41,    42,     9,
      10,    11,    12,    39,    40,    41,    42,   142,    39,    40,
     145,   130,   131,   132,   133,   134,   207,   208,   209,   210,
      15,    16,    17,    18,    19,    20,    39,    39,    39,   204,
     165,   206,    30,    40,    43,    43,    39,    43,    43,    39,
     218,   218,    18,    19,    43,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    39,    18,    19,    20,    21,    43,
      16,    43,    43,    39,    27,    39,    43,    42,     7,    42,
      42,    34,    35,    36,    37,    38,    39,    42,    82,    43,
      -1,    43,    43,    42,    42,    42,    75,    42,    42,   160,
      43,    43,    43,    43,    43,    43,    43,    39,    43,    43,
      43,    -1,    43,    43,    -1,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,    42,    47,     3,    42,    49,     4,
      48,    39,    42,    43,    50,    51,    55,    60,    65,    67,
      69,    43,     5,     6,     9,    10,    11,    12,    50,    50,
      50,    50,    50,    50,    61,    66,    68,    42,    53,    42,
      57,    70,    39,    39,    88,    88,    39,    52,    39,    56,
      39,    62,     8,    30,    88,    43,    43,    40,    89,    43,
      89,    43,    71,    39,    63,    39,    86,    39,     8,    30,
      89,    43,    43,    16,    72,    64,    43,    86,    43,    88,
      86,    39,    54,    30,    58,    42,    13,    15,    17,    73,
      63,    88,    43,    89,    53,     7,    57,    89,    42,    42,
      76,    82,    83,    42,    78,    82,    43,    89,    59,    43,
      89,    18,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    39,    87,    74,    18,    19,    20,    21,    27,
      34,    35,    36,    37,    38,    75,    57,    43,    76,    77,
      76,    83,    42,    76,    77,    42,    41,    42,    80,    81,
      81,    39,    40,    81,    84,    85,    81,    81,    84,    73,
      78,    79,    42,    83,    76,    42,    42,    80,    80,    80,
      80,    80,    73,    73,    77,    43,    43,    43,    89,    76,
      43,    89,    30,    31,    32,    33,    39,    81,    81,    81,
      43,    84,    81,    81,    43,    79,    43,    78,    89,    81,
      81,    81,    81,    81,    43,    43,    43,    81,    81,    81,
      81,    84,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    76,    76,    43,    81,    81,    81,
      81,    43,    78,    43,    43,    43,    43,    43,    43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    46,    45,    48,    47,    49,    50,    50,    50,
      50,    50,    50,    50,    52,    51,    53,    54,    53,    56,
      55,    57,    58,    57,    59,    57,    61,    62,    60,    63,
      64,    63,    66,    65,    68,    67,    70,    71,    69,    72,
      72,    73,    73,    74,    73,    75,    73,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    80,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    88,    88,    88,    88,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     5,     4,     1,     2,     2,
       2,     2,     2,     2,     0,     5,     0,     0,     6,     0,
       5,     0,     0,     6,     0,     8,     0,     0,     7,     0,
       0,     3,     0,     5,     0,     5,     0,     0,     8,     0,
       4,     0,     5,     0,     4,     0,     4,     5,     5,     5,
       5,     5,     1,     4,     4,     4,     5,     7,     7,     0,
       2,     5,     5,     5,     5,     5,     1,     4,     7,     5,
       0,     2,     4,     1,     1,     4,     5,     5,     5,     5,
       4,     1,     4,     4,     0,     2,     1,     1,     1,     2,
       1,     0,     5,     4,     2,     0,     5,     4,     2
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
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
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
#line 207 "../scan-ops_pddl.y"
    { 
  opserr( DOMDEF_EXPECTED, NULL ); 
}
#line 1535 "c/scan-ops_pddl.c"
    break;

  case 4:
#line 218 "../scan-ops_pddl.y"
    { 
}
#line 1542 "c/scan-ops_pddl.c"
    break;

  case 5:
#line 221 "../scan-ops_pddl.y"
    {
  if ( gcmd_line.display_info >= 1 ) {
    printf("\ndomain '%s' defined\n", gdomain_name);
  }
}
#line 1552 "c/scan-ops_pddl.c"
    break;

  case 6:
#line 232 "../scan-ops_pddl.y"
    { 
  gdomain_name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( gdomain_name, (yyvsp[-1].string));
}
#line 1561 "c/scan-ops_pddl.c"
    break;

  case 14:
#line 260 "../scan-ops_pddl.y"
    {
}
#line 1568 "c/scan-ops_pddl.c"
    break;

  case 15:
#line 263 "../scan-ops_pddl.y"
    { 
}
#line 1575 "c/scan-ops_pddl.c"
    break;

  case 16:
#line 269 "../scan-ops_pddl.y"
    {}
#line 1581 "c/scan-ops_pddl.c"
    break;

  case 17:
#line 272 "../scan-ops_pddl.y"
    {

  TypedListList *tll;

  if ( gparse_predicates ) {
    tll = gparse_predicates;
    while ( tll->next ) {
      tll = tll->next;
    }
    tll->next = new_TypedListList();
    tll = tll->next;
  } else {
    tll = new_TypedListList();
    gparse_predicates = tll;
  }

  tll->predicate = new_Token( strlen( (yyvsp[-2].string) ) + 1);
  strcpy( tll->predicate, (yyvsp[-2].string) );

  tll->args = (yyvsp[-1].pTypedList);

}
#line 1608 "c/scan-ops_pddl.c"
    break;

  case 19:
#line 301 "../scan-ops_pddl.y"
    {
}
#line 1615 "c/scan-ops_pddl.c"
    break;

  case 20:
#line 304 "../scan-ops_pddl.y"
    { 
}
#line 1622 "c/scan-ops_pddl.c"
    break;

  case 21:
#line 310 "../scan-ops_pddl.y"
    {}
#line 1628 "c/scan-ops_pddl.c"
    break;

  case 22:
#line 313 "../scan-ops_pddl.y"
    {

  TypedListList *tll;

  if ( gparse_functions ) {
    tll = gparse_functions;
    while ( tll->next ) {
      tll = tll->next;
    }
    tll->next = new_TypedListList();
    tll = tll->next;
  } else {
    tll = new_TypedListList();
    gparse_functions = tll;
  }

  tll->predicate = new_Token( strlen( (yyvsp[-2].string) ) + 1);
  strcpy( tll->predicate, (yyvsp[-2].string) );

  tll->args = (yyvsp[-1].pTypedList);

}
#line 1655 "c/scan-ops_pddl.c"
    break;

  case 24:
#line 338 "../scan-ops_pddl.y"
    {

  TypedListList *tll;

  if ( gparse_functions ) {
    tll = gparse_functions;
    while ( tll->next ) {
      tll = tll->next;
    }
    tll->next = new_TypedListList();
    tll = tll->next;
  } else {
    tll = new_TypedListList();
    gparse_functions = tll;
  }

  tll->predicate = new_Token( strlen( (yyvsp[-4].string) ) + 1);
  strcpy( tll->predicate, (yyvsp[-4].string) );

  tll->args = (yyvsp[-3].pTypedList);

}
#line 1682 "c/scan-ops_pddl.c"
    break;

  case 26:
#line 367 "../scan-ops_pddl.y"
    { 
  opserr( REQUIREM_EXPECTED, NULL ); 
}
#line 1690 "c/scan-ops_pddl.c"
    break;

  case 27:
#line 371 "../scan-ops_pddl.y"
    { 
  if ( !supported( (yyvsp[0].string) ) ) {
    opserr( NOT_SUPPORTED, (yyvsp[0].string) );
    yyerror((yyvsp[0].string));
  }
}
#line 1701 "c/scan-ops_pddl.c"
    break;

  case 30:
#line 386 "../scan-ops_pddl.y"
    { 
  if ( !supported( (yyvsp[0].string) ) ) {
    opserr( NOT_SUPPORTED, (yyvsp[0].string) );
    yyerror((yyvsp[0].string));
  }
}
#line 1712 "c/scan-ops_pddl.c"
    break;

  case 32:
#line 399 "../scan-ops_pddl.y"
    { 
  opserr( TYPEDEF_EXPECTED, NULL ); 
}
#line 1720 "c/scan-ops_pddl.c"
    break;

  case 33:
#line 403 "../scan-ops_pddl.y"
    {
  gparse_types = (yyvsp[-1].pTypedList);
}
#line 1728 "c/scan-ops_pddl.c"
    break;

  case 34:
#line 412 "../scan-ops_pddl.y"
    { 
  opserr( CONSTLIST_EXPECTED, NULL ); 
}
#line 1736 "c/scan-ops_pddl.c"
    break;

  case 35:
#line 416 "../scan-ops_pddl.y"
    {
  gparse_constants = (yyvsp[-1].pTypedList);
}
#line 1744 "c/scan-ops_pddl.c"
    break;

  case 36:
#line 427 "../scan-ops_pddl.y"
    { 
  opserr( ACTION, NULL ); 
}
#line 1752 "c/scan-ops_pddl.c"
    break;

  case 37:
#line 431 "../scan-ops_pddl.y"
    { 
  scur_op = new_PlOperator( (yyvsp[0].string) );
}
#line 1760 "c/scan-ops_pddl.c"
    break;

  case 38:
#line 435 "../scan-ops_pddl.y"
    {
  scur_op->next = gloaded_ops;
  gloaded_ops = scur_op; 
}
#line 1769 "c/scan-ops_pddl.c"
    break;

  case 39:
#line 445 "../scan-ops_pddl.y"
    { 
  scur_op->params = NULL; 
}
#line 1777 "c/scan-ops_pddl.c"
    break;

  case 40:
#line 450 "../scan-ops_pddl.y"
    {
  TypedList *tl;
  scur_op->parse_params = (yyvsp[-1].pTypedList);
  for (tl = scur_op->parse_params; tl; tl = tl->next) {
    /* to be able to distinguish params from :VARS 
     */
    scur_op->number_of_real_params++;
  }
}
#line 1791 "c/scan-ops_pddl.c"
    break;

  case 42:
#line 467 "../scan-ops_pddl.y"
    {
  TypedList *tl = NULL;

  /* add vars as parameters 
   */
  if ( scur_op->parse_params ) {
    for( tl = scur_op->parse_params; tl->next; tl = tl->next ) {
      /* empty, get to the end of list 
       */
    }
    tl->next = (yyvsp[-2].pTypedList);
    tl = tl->next;
  } else {
    scur_op->parse_params = (yyvsp[-2].pTypedList);
  }
}
#line 1812 "c/scan-ops_pddl.c"
    break;

  case 43:
#line 485 "../scan-ops_pddl.y"
    { 
  scur_op->preconds = (yyvsp[0].pPlNode); 
}
#line 1820 "c/scan-ops_pddl.c"
    break;

  case 45:
#line 491 "../scan-ops_pddl.y"
    { 
  scur_op->effects = (yyvsp[0].pPlNode); 
}
#line 1828 "c/scan-ops_pddl.c"
    break;

  case 47:
#line 506 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = LE;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1839 "c/scan-ops_pddl.c"
    break;

  case 48:
#line 514 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = LEQ;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1850 "c/scan-ops_pddl.c"
    break;

  case 49:
#line 522 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = EQ;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1861 "c/scan-ops_pddl.c"
    break;

  case 50:
#line 530 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = GEQ;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1872 "c/scan-ops_pddl.c"
    break;

  case 51:
#line 538 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = GE;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1883 "c/scan-ops_pddl.c"
    break;

  case 52:
#line 546 "../scan-ops_pddl.y"
    { 
  if ( sis_negated ) {
    (yyval.pPlNode) = new_PlNode(NOT);
    (yyval.pPlNode)->sons = new_PlNode(ATOM);
    (yyval.pPlNode)->sons->atom = (yyvsp[0].pTokenList);
    sis_negated = FALSE;
  } else {
    (yyval.pPlNode) = new_PlNode(ATOM);
    (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
  }
}
#line 1899 "c/scan-ops_pddl.c"
    break;

  case 53:
#line 559 "../scan-ops_pddl.y"
    { 
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1908 "c/scan-ops_pddl.c"
    break;

  case 54:
#line 565 "../scan-ops_pddl.y"
    { 
  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1917 "c/scan-ops_pddl.c"
    break;

  case 55:
#line 571 "../scan-ops_pddl.y"
    { 
  (yyval.pPlNode) = new_PlNode(NOT);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1926 "c/scan-ops_pddl.c"
    break;

  case 56:
#line 577 "../scan-ops_pddl.y"
    { 
  PlNode *np = new_PlNode(NOT);
  np->sons = (yyvsp[-2].pPlNode);
  np->next = (yyvsp[-1].pPlNode);

  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = np;
}
#line 1939 "c/scan-ops_pddl.c"
    break;

  case 57:
#line 589 "../scan-ops_pddl.y"
    { 

  PlNode *pln;

  pln = new_PlNode(EX);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 1955 "c/scan-ops_pddl.c"
    break;

  case 58:
#line 604 "../scan-ops_pddl.y"
    { 

  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 1971 "c/scan-ops_pddl.c"
    break;

  case 59:
#line 621 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = NULL;
}
#line 1979 "c/scan-ops_pddl.c"
    break;

  case 60:
#line 626 "../scan-ops_pddl.y"
    {
  (yyvsp[-1].pPlNode)->next = (yyvsp[0].pPlNode);
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
}
#line 1988 "c/scan-ops_pddl.c"
    break;

  case 61:
#line 639 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode( NEF );
  (yyval.pPlNode)->neft = ASSIGN;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1999 "c/scan-ops_pddl.c"
    break;

  case 62:
#line 647 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode( NEF );
  (yyval.pPlNode)->neft = SCALE_UP;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 2010 "c/scan-ops_pddl.c"
    break;

  case 63:
#line 655 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode( NEF );
  (yyval.pPlNode)->neft = SCALE_DOWN;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 2021 "c/scan-ops_pddl.c"
    break;

  case 64:
#line 663 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode( NEF );
  (yyval.pPlNode)->neft = INCREASE;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 2032 "c/scan-ops_pddl.c"
    break;

  case 65:
#line 671 "../scan-ops_pddl.y"
    {
  (yyval.pPlNode) = new_PlNode( NEF );
  (yyval.pPlNode)->neft = DECREASE;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 2043 "c/scan-ops_pddl.c"
    break;

  case 66:
#line 679 "../scan-ops_pddl.y"
    { 
  if ( sis_negated ) {
    (yyval.pPlNode) = new_PlNode(NOT);
    (yyval.pPlNode)->sons = new_PlNode(ATOM);
    (yyval.pPlNode)->sons->atom = (yyvsp[0].pTokenList);
    sis_negated = FALSE;
  } else {
    (yyval.pPlNode) = new_PlNode(ATOM);
    (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
  }
}
#line 2059 "c/scan-ops_pddl.c"
    break;

  case 67:
#line 692 "../scan-ops_pddl.y"
    { 
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2068 "c/scan-ops_pddl.c"
    break;

  case 68:
#line 700 "../scan-ops_pddl.y"
    { 

  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 2084 "c/scan-ops_pddl.c"
    break;

  case 69:
#line 713 "../scan-ops_pddl.y"
    {
  /* This will be conditional effects in FF representation, but here
   * a formula like (WHEN p q) will be saved as:
   *  [WHEN]
   *  [sons]
   *   /  \
   * [p]  [q]
   * That means, the first son is p, and the second one is q. 
   */
  (yyval.pPlNode) = new_PlNode(WHEN);
  (yyvsp[-2].pPlNode)->next = (yyvsp[-1].pPlNode);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
}
#line 2102 "c/scan-ops_pddl.c"
    break;

  case 70:
#line 731 "../scan-ops_pddl.y"
    { 
  (yyval.pPlNode) = NULL; 
}
#line 2110 "c/scan-ops_pddl.c"
    break;

  case 71:
#line 736 "../scan-ops_pddl.y"
    {
  (yyvsp[-1].pPlNode)->next = (yyvsp[0].pPlNode);
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
}
#line 2119 "c/scan-ops_pddl.c"
    break;

  case 72:
#line 748 "../scan-ops_pddl.y"
    {
  (yyval.pParseExpNode) = new_ParseExpNode( FHEAD );
  (yyval.pParseExpNode)->atom = new_TokenList();
  (yyval.pParseExpNode)->atom->item = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pParseExpNode)->atom->item, (yyvsp[-2].string) );
  (yyval.pParseExpNode)->atom->next = (yyvsp[-1].pTokenList);
}
#line 2131 "c/scan-ops_pddl.c"
    break;

  case 73:
#line 761 "../scan-ops_pddl.y"
    { 
  (yyval.pParseExpNode) = new_ParseExpNode( NUMBER );
  (yyval.pParseExpNode)->atom = new_TokenList();
  (yyval.pParseExpNode)->atom->item = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pParseExpNode)->atom->item, (yyvsp[0].string) );
}
#line 2142 "c/scan-ops_pddl.c"
    break;

  case 74:
#line 769 "../scan-ops_pddl.y"
    {
  (yyval.pParseExpNode) = (yyvsp[0].pParseExpNode);
}
#line 2150 "c/scan-ops_pddl.c"
    break;

  case 75:
#line 774 "../scan-ops_pddl.y"
    {
  (yyval.pParseExpNode) = new_ParseExpNode( MINUS );
  (yyval.pParseExpNode)->leftson = (yyvsp[-1].pParseExpNode);
}
#line 2159 "c/scan-ops_pddl.c"
    break;

  case 76:
#line 780 "../scan-ops_pddl.y"
    {
  (yyval.pParseExpNode) = new_ParseExpNode( AD );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 2169 "c/scan-ops_pddl.c"
    break;

  case 77:
#line 787 "../scan-ops_pddl.y"
    {
  (yyval.pParseExpNode) = new_ParseExpNode( SU );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 2179 "c/scan-ops_pddl.c"
    break;

  case 78:
#line 794 "../scan-ops_pddl.y"
    {
  (yyval.pParseExpNode) = new_ParseExpNode( MU );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 2189 "c/scan-ops_pddl.c"
    break;

  case 79:
#line 801 "../scan-ops_pddl.y"
    {
  (yyval.pParseExpNode) = new_ParseExpNode( DI );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 2199 "c/scan-ops_pddl.c"
    break;

  case 80:
#line 812 "../scan-ops_pddl.y"
    { 
  (yyval.pTokenList) = (yyvsp[-1].pTokenList);
  sis_negated = TRUE;
}
#line 2208 "c/scan-ops_pddl.c"
    break;

  case 81:
#line 818 "../scan-ops_pddl.y"
    {
  (yyval.pTokenList) = (yyvsp[0].pTokenList);
}
#line 2216 "c/scan-ops_pddl.c"
    break;

  case 82:
#line 827 "../scan-ops_pddl.y"
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 2226 "c/scan-ops_pddl.c"
    break;

  case 83:
#line 834 "../scan-ops_pddl.y"
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token( 5 );
  (yyval.pTokenList)->item = "=";
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 2237 "c/scan-ops_pddl.c"
    break;

  case 84:
#line 846 "../scan-ops_pddl.y"
    { (yyval.pTokenList) = NULL; }
#line 2243 "c/scan-ops_pddl.c"
    break;

  case 85:
#line 849 "../scan-ops_pddl.y"
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-1].pstring);
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2253 "c/scan-ops_pddl.c"
    break;

  case 86:
#line 860 "../scan-ops_pddl.y"
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2262 "c/scan-ops_pddl.c"
    break;

  case 87:
#line 866 "../scan-ops_pddl.y"
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2271 "c/scan-ops_pddl.c"
    break;

  case 88:
#line 876 "../scan-ops_pddl.y"
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pTokenList)->item, (yyvsp[0].string) );
}
#line 2281 "c/scan-ops_pddl.c"
    break;

  case 89:
#line 883 "../scan-ops_pddl.y"
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTokenList)->item, (yyvsp[-1].string) );
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2292 "c/scan-ops_pddl.c"
    break;

  case 90:
#line 895 "../scan-ops_pddl.y"
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2301 "c/scan-ops_pddl.c"
    break;

  case 91:
#line 905 "../scan-ops_pddl.y"
    { (yyval.pTypedList) = NULL; }
#line 2307 "c/scan-ops_pddl.c"
    break;

  case 92:
#line 908 "../scan-ops_pddl.y"
    { 

  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2320 "c/scan-ops_pddl.c"
    break;

  case 93:
#line 918 "../scan-ops_pddl.y"
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-3].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-3].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].string) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2334 "c/scan-ops_pddl.c"
    break;

  case 94:
#line 929 "../scan-ops_pddl.y"
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-1].string) );
  if ( (yyvsp[0].pTypedList) ) {/* another element (already typed) is following */
    (yyval.pTypedList)->type = copy_TokenList( (yyvsp[0].pTypedList)->type );
  } else {/* no further element - it must be an untyped list */
    (yyval.pTypedList)->type = new_TokenList();
    (yyval.pTypedList)->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( (yyval.pTypedList)->type->item, STANDARD_TYPE );
  }
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2352 "c/scan-ops_pddl.c"
    break;

  case 95:
#line 948 "../scan-ops_pddl.y"
    { (yyval.pTypedList) = NULL; }
#line 2358 "c/scan-ops_pddl.c"
    break;

  case 96:
#line 951 "../scan-ops_pddl.y"
    { 
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2370 "c/scan-ops_pddl.c"
    break;

  case 97:
#line 960 "../scan-ops_pddl.y"
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-3].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-3].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].string) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2384 "c/scan-ops_pddl.c"
    break;

  case 98:
#line 971 "../scan-ops_pddl.y"
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-1].string) );
  if ( (yyvsp[0].pTypedList) ) {/* another element (already typed) is following */
    (yyval.pTypedList)->type = copy_TokenList( (yyvsp[0].pTypedList)->type );
  } else {/* no further element - it must be an untyped list */
    (yyval.pTypedList)->type = new_TokenList();
    (yyval.pTypedList)->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( (yyval.pTypedList)->type->item, STANDARD_TYPE );
  }
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2402 "c/scan-ops_pddl.c"
    break;


#line 2406 "c/scan-ops_pddl.c"

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
#line 988 "../scan-ops_pddl.y"


/**********************************************************************
 * Functions
 **********************************************************************/

/* 
 * call	bison -pops -bscan-ops scan-ops.y
 */

void opserr( int errno, char *par )

{

/*   sact_err = errno; */

/*   if ( sact_err_par ) { */
/*     free(sact_err_par); */
/*   } */
/*   if ( par ) { */
/*     sact_err_par = new_Token(strlen(par)+1); */
/*     strcpy(sact_err_par, par); */
/*   } else { */
/*     sact_err_par = NULL; */
/*   } */

}
  


int yyerror( char *msg )

{

  fflush(stdout);
  fprintf(stderr, "\n%s: syntax error in line %d, '%s':\n", 
	  gact_filename, lineno, ops_pddltext);

  if ( NULL != sact_err_par ) {
    fprintf(stderr, "%s %s\n", serrmsg[sact_err], sact_err_par);
  } else {
    fprintf(stderr, "%s\n", serrmsg[sact_err]);
  }

  exit( 1 );

}



void load_ops_file( char *filename )

{

  FILE * fp;/* pointer to input files */
  char tmp[MAX_LENGTH] = "";

  /* open operator file 
   */
  if( ( fp = fopen( filename, "r" ) ) == NULL ) {
    sprintf(tmp, "\nff: can't find operator file: %s\n\n", filename );
    perror(tmp);
    exit( 1 );
  }

  gact_filename = filename;
  lineno = 1; 
  ops_pddlin = fp;

  yyparse();

  fclose( fp );/* and close file again */

}
