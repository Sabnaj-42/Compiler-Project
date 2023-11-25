
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1907042.y"

	#include<stdio.h>
	#include<string.h>
	#include <math.h>
	int yyparse();
    int yylex();
    int yyerror();
	//extern FILE *yyin,*yyout;
	int cnt=1,c2=1;
	typedef struct begin {
    	char tkn[109];
    	int value;
	}save;
	save data[1000],symbol[1000];
	int isDeclared(char *check)
	{
		int i = 1;
    	while (i<=cnt) 
		{
        	char* vari_name = data[i].tkn;
			
        	if(vari_name==NULL) break;
        	if (strcmp(vari_name, check) == 0){
				
            	return data[i].value;
			}
        	i++;
    	}
    	return 0;
	}
	int isDeclaredAgain(char *check)
	{
		
    	int i = 1;
		while (i<=c2)
		{
    		char *vari_name = symbol[i].tkn;
			
			if (vari_name == NULL) break;
        	if (strcmp(vari_name, check) == 0){
            	
				return i;
			}
			i++;
    	}
    	return 0;
	}

	void addDatainData(int idx, char *s, int n)
	{
		printf("add data %s %d\n",s,n);
		strcpy(data[idx].tkn,s);
		data[idx].value = n;
		// printf("add data save %s %d\n", p->tkn, p->value);
	} 
	void addDataInSymbol(int idx, char *s, int n)
	{
		printf("add data %s %d\n",s,n);
		strcpy(symbol[idx].tkn,s);
		symbol[idx].value = n;
		// printf("add data save %s %d\n", p->tkn, p->value);
	} 


/* Line 189 of yacc.c  */
#line 138 "1907042.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     FUNCTION = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     CHAR = 267,
     SBS = 268,
     SBE = 269,
     JOG = 270,
     BIYOG = 271,
     GUN = 272,
     VAG = 273,
     POW = 274,
     FACT = 275,
     asgn = 276,
     FOR = 277,
     COLON = 278,
     WHILE = 279,
     BREAK = 280,
     DEFAULT = 281,
     CASE = 282,
     SWITCH = 283,
     CLASS = 284,
     TRY = 285,
     CATCH = 286,
     ARRAY = 287,
     ASSIGNPLUS = 288,
     ASSIGNMINUS = 289,
     ASSIGNMUL = 290,
     ASSIGNDIV = 291,
     PRINTF = 292,
     SCANF = 293,
     SQRT = 294,
     ODDEVEN = 295,
     MAIN = 296,
     SC = 297,
     INC = 298,
     DEC = 299,
     NEQ = 300,
     DefaultGrammer = 301,
     EQ = 302,
     GEQ = 303,
     LEQ = 304,
     MOD = 305,
     CONTINUE = 306,
     RETURN = 307,
     LOGICALOPERATOR = 308,
     import = 309,
     HEADER = 310,
     LT = 311,
     GT = 312,
     NUMBERF = 313,
     IFX = 314,
     ELIFX = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 65 "1907042.y"

		float fvalue;
        int number;
        char string[1009];



/* Line 214 of yacc.c  */
#line 242 "1907042.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 254 "1907042.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   747

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  228

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    61,     2,     2,     2,     2,
      62,    63,     2,     2,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    66,
       2,     2,     2,    69,     2,     2,     2,     2,    68,     2,
       2,     2,    70,     2,     2,    64,    67,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    17,    18,    20,    23,    24,    26,
      28,    34,    37,    43,    45,    49,    51,    53,    55,    57,
      61,    63,    67,    71,    73,    76,    79,    85,    88,    94,
     100,   106,   112,   118,   124,   132,   138,   143,   152,   166,
     193,   215,   227,   237,   246,   254,   256,   259,   265,   266,
     269,   274,   278,   280,   282,   286,   290,   294,   298,   302,
     306,   309,   313,   317,   321,   324,   327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    61,    54,    56,    55,    57,    73,    -1,
      41,    62,    63,    13,    74,    14,    -1,    -1,    76,    -1,
      74,    79,    -1,    -1,    82,    -1,    80,    -1,    37,    62,
      85,    63,    42,    -1,    85,    42,    -1,    64,    62,    85,
      63,    42,    -1,    76,    -1,    77,    78,    42,    -1,     9,
      -1,    10,    -1,    12,    -1,    11,    -1,    78,    65,     4,
      -1,     4,    -1,     4,    21,    58,    -1,     4,    21,     3,
      -1,    42,    -1,    82,    79,    -1,    80,    79,    -1,    37,
      62,    85,    63,    42,    -1,    85,    42,    -1,    64,    62,
      85,    63,    42,    -1,    66,    62,    85,    63,    42,    -1,
      67,    62,    85,    63,    42,    -1,    68,    62,    85,    63,
      42,    -1,    39,    62,    85,    63,    42,    -1,    40,    62,
       3,    63,    42,    -1,    69,    62,    85,    65,    85,    63,
      42,    -1,    70,    62,    85,    63,    42,    -1,     4,    21,
      85,    42,    -1,     5,    62,    85,    63,    13,    85,    42,
      14,    -1,     5,    62,    85,    63,    13,    85,    42,    14,
       7,    13,    85,    42,    14,    -1,     5,    62,    85,    63,
      13,     5,    62,    85,    63,    13,    85,    42,    14,     7,
      13,    85,    42,    14,    85,    42,    14,     7,    13,    85,
      42,    14,    -1,     5,    62,    85,    63,    13,    85,    42,
      14,     6,    62,    85,    63,    13,    85,    42,    14,     7,
      13,    85,    42,    14,    -1,    22,    62,     3,    23,    67,
       3,    63,    13,    85,    42,    14,    -1,    24,    62,     3,
      57,     3,    63,    13,    85,    14,    -1,     8,     4,    62,
      85,    63,    13,    75,    14,    -1,    28,    62,     3,    63,
      13,    81,    14,    -1,    83,    -1,    83,    46,    -1,    29,
       4,    13,    79,    14,    -1,    -1,    83,    84,    -1,    27,
       3,    23,    79,    -1,    26,    23,    79,    -1,     3,    -1,
       4,    -1,    85,    47,    85,    -1,    85,    15,    85,    -1,
      85,    16,    85,    -1,    85,    17,    85,    -1,    85,    18,
      85,    -1,    85,    19,    85,    -1,    85,    20,    -1,    85,
      56,    85,    -1,    85,    57,    85,    -1,    62,    85,    63,
      -1,    43,    85,    -1,    44,    85,    -1,    45,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    96,    99,   101,   102,   105,   106,   107,
     108,   109,   110,   115,   118,   123,   124,   125,   126,   129,
     143,   155,   168,   183,   184,   185,   186,   187,   188,   193,
     198,   203,   208,   214,   224,   237,   254,   271,   282,   292,
     306,   321,   327,   338,   345,   352,   353,   355,   359,   360,
     363,   364,   370,   372,   382,   393,   395,   397,   399,   409,
     411,   421,   423,   425,   427,   429,   431
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELIF", "ELSE",
  "FUNCTION", "INT", "FLOAT", "DOUBLE", "CHAR", "SBS", "SBE", "JOG",
  "BIYOG", "GUN", "VAG", "POW", "FACT", "asgn", "FOR", "COLON", "WHILE",
  "BREAK", "DEFAULT", "CASE", "SWITCH", "CLASS", "TRY", "CATCH", "ARRAY",
  "ASSIGNPLUS", "ASSIGNMINUS", "ASSIGNMUL", "ASSIGNDIV", "PRINTF", "SCANF",
  "SQRT", "ODDEVEN", "MAIN", "SC", "INC", "DEC", "NEQ", "DefaultGrammer",
  "EQ", "GEQ", "LEQ", "MOD", "CONTINUE", "RETURN", "LOGICALOPERATOR",
  "import", "HEADER", "LT", "GT", "NUMBERF", "IFX", "ELIFX", "'#'", "'('",
  "')'", "'s'", "','", "'c'", "'t'", "'l'", "'g'", "'p'", "$accept",
  "start", "codestart", "statementstart", "statementtt", "declarestart",
  "type", "VARNAME", "statement", "SwitchCase", "SwitchGrammer",
  "ClassCase", "CaseGrammer", "casenumber", "expression", 0
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
     315,    35,    40,    41,   115,    44,    99,   116,   108,   103,
     112
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    76,    77,    77,    77,    77,    78,
      78,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     6,     0,     1,     2,     0,     1,     1,
       5,     2,     5,     1,     3,     1,     1,     1,     1,     3,
       1,     3,     3,     1,     2,     2,     5,     2,     5,     5,
       5,     5,     5,     5,     7,     5,     4,     8,    13,    26,
      21,    11,     9,     8,     7,     1,     2,     5,     0,     2,
       4,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     2,
       0,     0,     4,    15,    16,    18,    17,     0,     5,     0,
      52,    53,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
      25,    24,     0,     0,     0,     0,     0,    60,    27,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    54,    61,    62,
      22,    21,    19,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    47,    26,    32,    33,    28,    29,
      30,    31,     0,    35,     0,     0,     7,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,    13,     9,     8,
       0,     0,     0,    44,     0,     0,    46,    49,    34,     0,
      37,     0,     0,    43,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    51,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    10,    12,
      41,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    17,   156,    18,    19,    48,    43,    44,
     149,    45,   150,   167,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -54
static const yytype_int16 yypact[] =
{
     -53,   -42,    13,   -41,   -54,   -30,   -35,     3,   -17,   -54,
     -11,    40,     9,   -54,   -54,   -54,   -54,    58,   -54,    55,
     -54,    39,     5,    61,   -54,    11,    17,    19,    64,    22,
      23,    30,   -54,    26,    26,    26,    26,    31,    37,    47,
      49,    50,    52,   -54,   156,   156,   502,    94,   -28,    26,
      26,    59,   120,   127,   128,   119,    26,    26,   130,   -54,
     690,   690,   690,   193,    26,    26,    26,    26,    26,    26,
     -54,   -54,    26,    26,    26,    26,    26,   -54,   -54,    26,
      26,    26,     6,   -54,   132,   513,   212,    26,   117,    84,
      80,   156,   226,   245,    81,   -54,   278,   295,   303,   328,
     150,   352,    87,    87,    -9,    -9,    98,   690,   134,   134,
     -54,   -54,   -54,   -54,   133,   363,    91,   145,   149,   157,
     121,   131,   135,   137,   144,   146,   147,    26,   148,    73,
     161,   172,   124,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   377,   -54,   140,   519,    46,   129,   181,   189,
     -20,   162,    26,   191,   152,   154,   203,   -54,   -54,   -54,
     562,   206,    26,   -54,   198,   230,   -54,   -54,   -54,   385,
      21,    26,    26,   -54,   -54,    26,   468,   156,   211,   222,
     174,   224,   434,   442,   568,   -54,   -54,   156,    26,    26,
      26,   196,   197,   233,   -54,   574,   453,   580,   -54,   -54,
     -54,   234,   238,   239,   247,    26,   -54,   242,   623,    26,
     243,   629,   251,   252,   254,    26,    26,   635,   641,   256,
     257,   265,   -54,   261,    26,   684,   262,   -54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -54,   -54,   -54,   -54,   -54,   106,   -54,   -54,   -40,   138,
     -54,   139,   -54,   -54,   -33
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      60,    61,    62,    63,    70,    71,   164,   165,     1,   110,
      76,    77,     3,     4,    83,     5,    85,    86,    13,    14,
      15,    16,     7,    92,    93,     6,   166,   180,   181,    20,
      59,    96,    97,    98,    99,   100,   101,    84,    79,   102,
     103,   104,   105,   106,     8,    10,   107,   108,   109,    20,
      59,   119,    11,    12,   115,    13,    14,    15,    16,    47,
      49,    20,    21,    22,   111,    51,    23,    50,    55,    33,
      34,    35,    24,    52,    27,    28,    20,    59,   144,    53,
      25,    54,    26,   154,    56,    57,    27,    28,    36,    33,
      34,    35,    58,    64,   142,    29,   145,    30,    31,    65,
      32,    33,    34,    35,    74,    75,    76,    77,    36,    66,
     155,    67,    68,   160,    69,    82,    33,    34,    35,   169,
      36,    87,    37,    88,    38,    39,    40,    41,    42,   176,
      89,    90,    91,    94,    79,    36,   112,   186,   182,   183,
     116,   117,   184,   118,   122,    79,   129,   194,   132,    72,
      73,    74,    75,    76,    77,   195,   196,   197,   131,    20,
      21,    22,   133,   135,    23,    72,    73,    74,    75,    76,
      77,   134,   208,   136,   146,   147,   211,   137,    25,   138,
      26,    79,   217,   218,    27,    28,   139,   148,   140,   141,
     143,   225,   161,    29,   162,    30,    31,    79,    32,    33,
      34,    35,   152,   163,   168,   170,    80,    81,    72,    73,
      74,    75,    76,    77,   171,   127,   172,   173,    36,   175,
      37,   177,    38,    39,    40,    41,    42,    72,    73,    74,
      75,    76,    77,   178,   187,   188,   189,   190,   198,   199,
      79,    72,    73,    74,    75,    76,    77,   200,   204,    80,
      81,   205,   157,   206,   207,   209,    95,   212,   214,    79,
      72,    73,    74,    75,    76,    77,   215,   216,    80,    81,
     221,   222,   223,    79,   224,   114,   227,     0,     0,     0,
       0,     0,    80,    81,   158,   159,     0,     0,     0,   120,
       0,     0,    79,    72,    73,    74,    75,    76,    77,     0,
       0,    80,    81,     0,     0,     0,     0,     0,   121,     0,
      72,    73,    74,    75,    76,    77,     0,     0,    72,    73,
      74,    75,    76,    77,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,     0,     0,     0,     0,
       0,   123,    79,    72,    73,    74,    75,    76,    77,     0,
      79,    80,    81,     0,     0,     0,     0,     0,   124,    80,
      81,     0,     0,     0,     0,     0,   125,    72,    73,    74,
      75,    76,    77,     0,     0,    79,     0,     0,    72,    73,
      74,    75,    76,    77,    80,    81,     0,     0,     0,     0,
       0,   126,    72,    73,    74,    75,    76,    77,     0,    79,
      72,    73,    74,    75,    76,    77,     0,     0,    80,    81,
      79,     0,     0,     0,     0,   128,     0,     0,     0,    80,
      81,     0,     0,     0,    79,     0,   130,     0,     0,     0,
       0,     0,    79,    80,    81,     0,     0,     0,     0,     0,
     151,    80,    81,     0,     0,     0,     0,     0,   179,    72,
      73,    74,    75,    76,    77,     0,     0,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,    79,   185,    72,    73,    74,    75,    76,    77,    79,
      80,    81,     0,     0,     0,     0,     0,   191,    80,    81,
      79,     0,     0,     0,     0,   192,     0,     0,     0,    80,
      81,     0,     0,     0,     0,    79,   202,    72,    73,    74,
      75,    76,    77,     0,    80,    81,     0,     0,    72,    73,
      74,    75,    76,    77,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,    78,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,   113,     0,     0,    80,    81,
      79,   153,     0,     0,     0,     0,    79,     0,     0,    80,
      81,     0,     0,     0,     0,    80,    81,    72,    73,    74,
      75,    76,    77,    72,    73,    74,    75,    76,    77,    72,
      73,    74,    75,    76,    77,    72,    73,    74,    75,    76,
      77,     0,     0,     0,   174,     0,     0,     0,     0,    79,
     193,     0,     0,     0,     0,    79,   201,     0,    80,    81,
       0,    79,   203,     0,    80,    81,     0,    79,     0,     0,
      80,    81,     0,     0,     0,     0,    80,    81,    72,    73,
      74,    75,    76,    77,    72,    73,    74,    75,    76,    77,
      72,    73,    74,    75,    76,    77,    72,    73,    74,    75,
      76,    77,     0,     0,     0,   210,     0,     0,     0,     0,
      79,   213,     0,     0,     0,     0,    79,   219,     0,    80,
      81,     0,    79,   220,     0,    80,    81,     0,    79,     0,
       0,    80,    81,     0,     0,     0,     0,    80,    81,    72,
      73,    74,    75,    76,    77,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,    79,     0,     0,
      80,    81,     0,     0,     0,     0,    80,    81
};

static const yytype_int16 yycheck[] =
{
      33,    34,    35,    36,    44,    45,    26,    27,    61,     3,
      19,    20,    54,     0,    42,    56,    49,    50,     9,    10,
      11,    12,    57,    56,    57,    55,    46,     6,     7,     3,
       4,    64,    65,    66,    67,    68,    69,    65,    47,    72,
      73,    74,    75,    76,    41,    62,    79,    80,    81,     3,
       4,    91,    63,    13,    87,     9,    10,    11,    12,     4,
      21,     3,     4,     5,    58,     4,     8,    62,     4,    43,
      44,    45,    14,    62,    28,    29,     3,     4,     5,    62,
      22,    62,    24,    37,    62,    62,    28,    29,    62,    43,
      44,    45,    62,    62,   127,    37,   129,    39,    40,    62,
      42,    43,    44,    45,    17,    18,    19,    20,    62,    62,
      64,    62,    62,   146,    62,    21,    43,    44,    45,   152,
      62,    62,    64,     3,    66,    67,    68,    69,    70,   162,
       3,     3,    13,     3,    47,    62,     4,   177,   171,   172,
      23,    57,   175,    63,    63,    47,    13,   187,     3,    15,
      16,    17,    18,    19,    20,   188,   189,   190,    67,     3,
       4,     5,    13,    42,     8,    15,    16,    17,    18,    19,
      20,    14,   205,    42,    13,     3,   209,    42,    22,    42,
      24,    47,   215,   216,    28,    29,    42,    63,    42,    42,
      42,   224,    63,    37,    13,    39,    40,    47,    42,    43,
      44,    45,    62,    14,    42,    14,    56,    57,    15,    16,
      17,    18,    19,    20,    62,    65,    62,    14,    62,    13,
      64,    23,    66,    67,    68,    69,    70,    15,    16,    17,
      18,    19,    20,     3,    23,    13,    62,    13,    42,    42,
      47,    15,    16,    17,    18,    19,    20,    14,    14,    56,
      57,    13,   146,    14,     7,    13,    63,    14,     7,    47,
      15,    16,    17,    18,    19,    20,    14,    13,    56,    57,
      14,    14,     7,    47,    13,    63,    14,    -1,    -1,    -1,
      -1,    -1,    56,    57,   146,   146,    -1,    -1,    -1,    63,
      -1,    -1,    47,    15,    16,    17,    18,    19,    20,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      15,    16,    17,    18,    19,    20,    -1,    -1,    15,    16,
      17,    18,    19,    20,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    63,    47,    15,    16,    17,    18,    19,    20,    -1,
      47,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    15,    16,    17,
      18,    19,    20,    -1,    -1,    47,    -1,    -1,    15,    16,
      17,    18,    19,    20,    56,    57,    -1,    -1,    -1,    -1,
      -1,    63,    15,    16,    17,    18,    19,    20,    -1,    47,
      15,    16,    17,    18,    19,    20,    -1,    -1,    56,    57,
      47,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    47,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    47,    56,    57,    -1,    -1,    -1,    -1,    -1,
      63,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,    15,
      16,    17,    18,    19,    20,    -1,    -1,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    14,    15,    16,    17,    18,    19,    20,    47,
      56,    57,    -1,    -1,    -1,    -1,    -1,    63,    56,    57,
      47,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    47,    63,    15,    16,    17,
      18,    19,    20,    -1,    56,    57,    -1,    -1,    15,    16,
      17,    18,    19,    20,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    56,    57,
      47,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    56,    57,    15,    16,    17,
      18,    19,    20,    15,    16,    17,    18,    19,    20,    15,
      16,    17,    18,    19,    20,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      42,    -1,    -1,    -1,    -1,    47,    42,    -1,    56,    57,
      -1,    47,    42,    -1,    56,    57,    -1,    47,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    56,    57,    15,    16,
      17,    18,    19,    20,    15,    16,    17,    18,    19,    20,
      15,    16,    17,    18,    19,    20,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      47,    42,    -1,    -1,    -1,    -1,    47,    42,    -1,    56,
      57,    -1,    47,    42,    -1,    56,    57,    -1,    47,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    56,    57,    15,
      16,    17,    18,    19,    20,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    72,    54,     0,    56,    55,    57,    41,    73,
      62,    63,    13,     9,    10,    11,    12,    74,    76,    77,
       3,     4,     5,     8,    14,    22,    24,    28,    29,    37,
      39,    40,    42,    43,    44,    45,    62,    64,    66,    67,
      68,    69,    70,    79,    80,    82,    85,     4,    78,    21,
      62,     4,    62,    62,    62,     4,    62,    62,    62,     4,
      85,    85,    85,    85,    62,    62,    62,    62,    62,    62,
      79,    79,    15,    16,    17,    18,    19,    20,    42,    47,
      56,    57,    21,    42,    65,    85,    85,    62,     3,     3,
       3,    13,    85,    85,     3,    63,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
       3,    58,     4,    42,    63,    85,    23,    57,    63,    79,
      63,    63,    63,    63,    63,    63,    63,    65,    63,    13,
      63,    67,     3,    13,    14,    42,    42,    42,    42,    42,
      42,    42,    85,    42,     5,    85,    13,     3,    63,    81,
      83,    63,    62,    42,    37,    64,    75,    76,    80,    82,
      85,    63,    13,    14,    26,    27,    46,    84,    42,    85,
      14,    62,    62,    14,    42,    13,    85,    23,     3,    63,
       6,     7,    85,    85,    85,    14,    79,    23,    13,    62,
      13,    63,    63,    42,    79,    85,    85,    85,    42,    42,
      14,    42,    63,    42,    14,    13,    14,     7,    85,    13,
      42,    85,    14,    42,     7,    14,    13,    85,    85,    42,
      42,    14,    14,     7,    13,    85,    42,    14
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 94 "1907042.y"
    { printf("\nProgram Ended\n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 96 "1907042.y"
    { printf("\nSuccessful compilation\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 108 "1907042.y"
    {printf("\nPrint Expression %d\n",(yyvsp[(3) - (5)].number));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 109 "1907042.y"
    { printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 111 "1907042.y"
    {
    			  float e=sin((yyvsp[(3) - (5)].number) * 3.14/180);
    			  printf("sin(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 118 "1907042.y"
    { printf("\nvalid declaration\n"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 129 "1907042.y"
    {
						if(isDeclared((yyvsp[(3) - (3)].string)))
						{
							printf("%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							
							addDatainData(cnt,(yyvsp[(3) - (3)].string),cnt);
							cnt++;
							
						}
			;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 143 "1907042.y"
    {
				if(isDeclared((yyvsp[(1) - (1)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					
					addDatainData(cnt,(yyvsp[(1) - (1)].string), cnt);
					cnt++;
				}
			;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 155 "1907042.y"
    {
				if(isDeclared((yyvsp[(1) - (3)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (3)].string) );
				}
				else
				{
					// addData(&data[cnt],$1, $3);
					addDatainData(cnt,(yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].fvalue));
					cnt++;		
				}
							
						;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 168 "1907042.y"
    {
				if(isDeclared((yyvsp[(1) - (3)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (3)].string) );
				}
				else
				{
					//addData(&data[cnt],$1, $3);
					addDatainData(cnt,(yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].number));
							cnt++;
				}
							
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 186 "1907042.y"
    {printf("\nPrint Expression %d\n",(yyvsp[(3) - (5)].number));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 187 "1907042.y"
    { printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 189 "1907042.y"
    {
    			  float e=sin((yyvsp[(3) - (5)].number) * 3.14/180);
    			  printf("sin(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 194 "1907042.y"
    {
    			float e=cos((yyvsp[(3) - (5)].number)* 3.14/180);
    			  printf("cos(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 199 "1907042.y"
    {
    			 float e=tan((yyvsp[(3) - (5)].number)* 3.14/180);
    			  printf("tan(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 204 "1907042.y"
    {
    			  float e=log((yyvsp[(3) - (5)].number));
    			  printf("log(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 209 "1907042.y"
    {
    			   float e=sqrt((yyvsp[(3) - (5)].number));
    			   printf("square root of %d is %f\n",(yyvsp[(3) - (5)].number),e);

    			;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 214 "1907042.y"
    {
		printf("Odd Even Number detection \n");

		if((yyvsp[(3) - (5)].number) %2 ==0){
			printf("Number : %d is -> Even\n",(yyvsp[(3) - (5)].number));
		}
		else{
			printf("Number is :%d is -> Odd\n",(yyvsp[(3) - (5)].number));
		}
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 225 "1907042.y"
    {
    			   int i,n1,n2,gcd;
					n1=(yyvsp[(3) - (7)].number);
					n2=(yyvsp[(5) - (7)].number);
				for(i=1; i <= n1 && i <= n2; ++i)
    			  {
        
        			if(n1%i==0 && n2%i==0)
            		gcd = i;
    			   }
    			 printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    			;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 238 "1907042.y"
    {int i, n=(yyvsp[(3) - (5)].number),flag=0;
    			for (i = 2; i <= n / 2; ++i) {
    					if (n % i == 0) {
      							flag = 1;
     							 break;
    								}
  						}

  					if (n == 1) {
    					printf("1 is neither prime nor composite.\n");} 
  					else {
    					if (flag == 0)
      					printf("%d is a prime number.\n", n);
   						 else
      					printf("%d is not a prime number.\n", n);}
    				;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 254 "1907042.y"
    {
							if(isDeclared((yyvsp[(1) - (4)].string))){
								int i = isDeclaredAgain((yyvsp[(1) - (4)].string));
								if (!i){
									//addData(&symbol[c2], $1, $3);
									addDataInSymbol(c2,(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
									c2++;
								}
								symbol[i].value = (yyvsp[(3) - (4)].number);
								printf("\n(%s) Value of the variable: %d\t\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (4)].string));
							}
							
						;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 271 "1907042.y"
    {
								if((yyvsp[(3) - (8)].number))
								{
									printf("\nvalue of expression in IF: %d\n",((yyvsp[(6) - (8)].number)));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 282 "1907042.y"
    {
								 	if((yyvsp[(3) - (13)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (13)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(11) - (13)].number));
									}
								   ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 292 "1907042.y"
    {
								 	if((yyvsp[(3) - (26)].number))
									{
										if((yyvsp[(8) - (26)].number))
											printf("\nvalue of expression middle IF: %d\n",(yyvsp[(11) - (26)].number));
										else
											printf("\nvalue of expression middle ELSE: %d\n",(yyvsp[(16) - (26)].number));
										printf("\nvalue of expression in first IF: %d\n",(yyvsp[(19) - (26)].number));
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",(yyvsp[(24) - (26)].number));
									}
								   ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 306 "1907042.y"
    {
								 	if((yyvsp[(3) - (21)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (21)].number));
									}
									else if((yyvsp[(11) - (21)].number))
									{
										printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(14) - (21)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(19) - (21)].number));
									}
								   ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 321 "1907042.y"
    {
	   int i=0;
	   for(i=(yyvsp[(3) - (11)].number);i<(yyvsp[(6) - (11)].number);i++){
	   printf("for loop statement in %d no. execution\n",i);
	   }
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 327 "1907042.y"
    {
										int i;
										printf("While LOOP: %d %d\n", (yyvsp[(3) - (9)].number),(yyvsp[(5) - (9)].number));
										for(i=(yyvsp[(3) - (9)].number);i>=(yyvsp[(5) - (9)].number);i--)
										{
											printf("%d \n",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[(8) - (9)].number));

	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 338 "1907042.y"
    {
		printf("FUNCTION found :  \n");
		printf("Function Parameter : %d\n",(yyvsp[(4) - (8)].number));
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 345 "1907042.y"
    {
			printf("\nSWITCH CASE Declaration\n");
			printf("\nFinally Choose Case number :-> %d\n",(yyvsp[(3) - (7)].number));
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 355 "1907042.y"
    {
	printf("class declared %s\n", (yyvsp[(2) - (5)].string));
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 363 "1907042.y"
    {printf("Case No : %d\n",(yyvsp[(2) - (4)].number));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 364 "1907042.y"
    {
 				printf("\nDefault case & expression value");
 			;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 370 "1907042.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); 	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 372 "1907042.y"
    { int idx = isDeclaredAgain((yyvsp[(1) - (1)].string)); 
	if(idx==0){
		(yyval.number) = isDeclared((yyvsp[(1) - (1)].string));
	}else{
		(yyval.number) = symbol[idx].value;
	}
	printf("Variable value: %s %d\n",(yyvsp[(1) - (1)].string),(yyval.number));
	
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 382 "1907042.y"
    { 
		if((yyvsp[(1) - (3)].number)==(yyvsp[(3) - (3)].number)){
			(yyval.number) = 1;
		}
		else{
			(yyval.number) = 0;
		}
		//printf("check me %d %d %d\n", $1, $3, $$);
		
	 ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 393 "1907042.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 395 "1907042.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 397 "1907042.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 399 "1907042.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 409 "1907042.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 411 "1907042.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult;
						
					 ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 421 "1907042.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 423 "1907042.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 425 "1907042.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 427 "1907042.y"
    { (yyval.number)=(yyvsp[(2) - (2)].number)+1; printf("inc: %d\n",(yyval.number));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 429 "1907042.y"
    { (yyval.number)=(yyvsp[(2) - (2)].number)-1; printf("dec: %d\n",(yyval.number));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 431 "1907042.y"
    {
						if((yyvsp[(2) - (2)].number) != 0)
						{
							(yyval.number) = 0; printf("not: %d\n",(yyval.number));
						}
						else{
							(yyval.number) = 1 ; printf("aff: %d\n",(yyval.number));
						}
					;}
    break;



/* Line 1455 of yacc.c  */
#line 2282 "1907042.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 442 "1907042.y"


int yyerror(char *s){
    fflush(stdout);
	printf("error");
 	printf("EEK, parse error!  Message: %s\n",s);
}


