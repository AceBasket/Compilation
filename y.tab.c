/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "myml.y"


  // header included in y.tab.h
#include "Attribut.h"  
#include "Table_des_symboles.h"
#include <stdio.h>
#include <string.h>

FILE * file_in = NULL;
FILE * file_out = NULL;
FILE * file_out_function = NULL;
  
extern int yylex();
extern int yyparse();

int offset = 0;
int label_number = 0;
int nb_if = 0;
int arg_nb = 1;
// char *func_name = "";


void yyerror (char* s) {
   printf("\n%s\n",s);
 }


#line 99 "y.tab.c"

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
    NUM = 258,                     /* NUM  */
    FLOAT = 259,                   /* FLOAT  */
    ID = 260,                      /* ID  */
    STRING = 261,                  /* STRING  */
    PV = 262,                      /* PV  */
    LPAR = 263,                    /* LPAR  */
    RPAR = 264,                    /* RPAR  */
    LET = 265,                     /* LET  */
    IN = 266,                      /* IN  */
    VIR = 267,                     /* VIR  */
    IF = 268,                      /* IF  */
    THEN = 269,                    /* THEN  */
    ELSE = 270,                    /* ELSE  */
    ISLT = 271,                    /* ISLT  */
    ISGT = 272,                    /* ISGT  */
    ISLEQ = 273,                   /* ISLEQ  */
    ISGEQ = 274,                   /* ISGEQ  */
    ISEQ = 275,                    /* ISEQ  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    NOT = 278,                     /* NOT  */
    BOOL = 279,                    /* BOOL  */
    PLUS = 280,                    /* PLUS  */
    MOINS = 281,                   /* MOINS  */
    MULT = 282,                    /* MULT  */
    DIV = 283,                     /* DIV  */
    EQ = 284,                      /* EQ  */
    CONCAT = 285,                  /* CONCAT  */
    UNA = 286                      /* UNA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define FLOAT 259
#define ID 260
#define STRING 261
#define PV 262
#define LPAR 263
#define RPAR 264
#define LET 265
#define IN 266
#define VIR 267
#define IF 268
#define THEN 269
#define ELSE 270
#define ISLT 271
#define ISGT 272
#define ISLEQ 273
#define ISGEQ 274
#define ISEQ 275
#define AND 276
#define OR 277
#define NOT 278
#define BOOL 279
#define PLUS 280
#define MOINS 281
#define MULT 282
#define DIV 283
#define EQ 284
#define CONCAT 285
#define UNA 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "myml.y"

  int val_int;
  char* val_string;
  float val_float;

#line 220 "y.tab.c"

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
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_PV = 7,                         /* PV  */
  YYSYMBOL_LPAR = 8,                       /* LPAR  */
  YYSYMBOL_RPAR = 9,                       /* RPAR  */
  YYSYMBOL_LET = 10,                       /* LET  */
  YYSYMBOL_IN = 11,                        /* IN  */
  YYSYMBOL_VIR = 12,                       /* VIR  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_THEN = 14,                      /* THEN  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_ISLT = 16,                      /* ISLT  */
  YYSYMBOL_ISGT = 17,                      /* ISGT  */
  YYSYMBOL_ISLEQ = 18,                     /* ISLEQ  */
  YYSYMBOL_ISGEQ = 19,                     /* ISGEQ  */
  YYSYMBOL_ISEQ = 20,                      /* ISEQ  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_BOOL = 24,                      /* BOOL  */
  YYSYMBOL_PLUS = 25,                      /* PLUS  */
  YYSYMBOL_MOINS = 26,                     /* MOINS  */
  YYSYMBOL_MULT = 27,                      /* MULT  */
  YYSYMBOL_DIV = 28,                       /* DIV  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_CONCAT = 30,                    /* CONCAT  */
  YYSYMBOL_UNA = 31,                       /* UNA  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_prog = 33,                      /* prog  */
  YYSYMBOL_inst = 34,                      /* inst  */
  YYSYMBOL_let_def = 35,                   /* let_def  */
  YYSYMBOL_def_id = 36,                    /* def_id  */
  YYSYMBOL_def_fun = 37,                   /* def_fun  */
  YYSYMBOL_fun_head = 38,                  /* fun_head  */
  YYSYMBOL_id_list = 39,                   /* id_list  */
  YYSYMBOL_exp = 40,                       /* exp  */
  YYSYMBOL_arith_exp = 41,                 /* arith_exp  */
  YYSYMBOL_atom_exp = 42,                  /* atom_exp  */
  YYSYMBOL_control_exp = 43,               /* control_exp  */
  YYSYMBOL_if_exp = 44,                    /* if_exp  */
  YYSYMBOL_if = 45,                        /* if  */
  YYSYMBOL_cond = 46,                      /* cond  */
  YYSYMBOL_then = 47,                      /* then  */
  YYSYMBOL_else = 48,                      /* else  */
  YYSYMBOL_let_exp = 49,                   /* let_exp  */
  YYSYMBOL_funcall_exp = 50,               /* funcall_exp  */
  YYSYMBOL_fid = 51,                       /* fid  */
  YYSYMBOL_arg_list = 52,                  /* arg_list  */
  YYSYMBOL_bool = 53,                      /* bool  */
  YYSYMBOL_comp = 54                       /* comp  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  91

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    82,    82,    84,    89,    90,    95,    96,    99,   101,
     104,   107,   109,   113,   114,   117,   118,   119,   120,   121,
     122,   123,   126,   127,   128,   129,   130,   131,   132,   135,
     139,   146,   147,   148,   149,   152,   153,   156,   159,   162,
     163,   166,   167,   168,   169,   170,   171,   175,   176,   177,
     178,   179
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "FLOAT", "ID",
  "STRING", "PV", "LPAR", "RPAR", "LET", "IN", "VIR", "IF", "THEN", "ELSE",
  "ISLT", "ISGT", "ISLEQ", "ISGEQ", "ISEQ", "AND", "OR", "NOT", "BOOL",
  "PLUS", "MOINS", "MULT", "DIV", "EQ", "CONCAT", "UNA", "$accept", "prog",
  "inst", "let_def", "def_id", "def_fun", "fun_head", "id_list", "exp",
  "arith_exp", "atom_exp", "control_exp", "if_exp", "if", "cond", "then",
  "else", "let_exp", "funcall_exp", "fid", "arg_list", "bool", "comp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-32)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      71,   -32,   -32,    -4,   -32,    71,     3,   -32,    57,     7,
       9,    23,   -32,   -32,   -32,    83,   -32,   -32,   -32,     6,
     -32,   -32,    27,    23,    41,    -6,    35,   -32,   -32,    61,
     -32,    88,    57,    57,    57,    57,    57,    43,    66,    57,
     -32,    77,    71,    71,   -32,   -32,   -32,    11,    11,    60,
      60,   -32,    43,    43,   -32,    98,    -3,   -32,    99,    83,
      45,   -32,    46,   -32,   -32,    69,    15,   -32,   -32,   -32,
     -32,   -32,   -32,    71,   -32,    43,    43,    56,   -32,    57,
     -32,    90,   -32,   -32,   -32,    78,   -32,    99,    83,   -32,
     -32
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    23,    25,    24,     0,     0,    31,     0,     0,
       0,     4,     6,     7,     5,    13,    21,    26,    29,     0,
      14,    27,     0,     0,     0,     0,     0,    15,     1,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     3,    35,    36,    17,    16,    19,
      18,    20,     0,     0,    41,     0,     0,    33,     0,    39,
       0,    11,     0,     8,     9,     0,     0,    44,    47,    48,
      49,    50,    51,     0,    32,     0,     0,     0,    37,     0,
      10,     0,    46,    45,    43,    42,    34,     0,    40,    12,
      30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,    91,    31,   -32,   -32,   -32,   -32,     0,    -7,
     -28,   -32,   -32,   -32,   -32,   -32,   -32,    75,   -32,   -32,
     -32,   -31,   -32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     9,    10,    23,    12,    13,    26,    62,    55,    15,
      16,    17,    18,    19,    38,    58,    87,    20,    21,    22,
      60,    56,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      14,    27,    41,    45,   -38,    24,    74,    28,    25,    14,
       1,     2,     3,     4,    37,     5,    30,     6,    75,    76,
       7,    66,    67,    42,    82,    47,    48,    49,    50,    51,
      77,    11,    59,     8,    31,    39,    75,    76,    34,    35,
      11,    36,    63,    64,    84,    85,     1,     2,     3,     4,
      40,    52,    65,     6,    78,    80,     7,    79,    81,    90,
       1,     2,     3,     4,    43,     5,    53,    54,    44,     8,
       7,    86,    88,    83,     1,     2,     3,     4,    40,     5,
      57,     6,    61,     8,     7,    68,    69,    70,    71,    72,
      36,     1,     2,     3,     4,    89,     5,     8,     6,    75,
      29,     7,     1,     2,     3,     4,    46,     5,    32,    33,
      34,    35,     7,    36,    68,    69,    70,    71,    72
};

static const yytype_int8 yycheck[] =
{
       0,     8,     8,    31,     8,     5,     9,     0,     5,     9,
       3,     4,     5,     6,     8,     8,     7,    10,    21,    22,
      13,    52,    53,    29,     9,    32,    33,    34,    35,    36,
      58,     0,    39,    26,    11,     8,    21,    22,    27,    28,
       9,    30,    42,    43,    75,    76,     3,     4,     5,     6,
       9,     8,    52,    10,     9,     9,    13,    12,    12,    87,
       3,     4,     5,     6,    29,     8,    23,    24,     7,    26,
      13,    15,    79,    73,     3,     4,     5,     6,     9,     8,
      14,    10,     5,    26,    13,    16,    17,    18,    19,    20,
      30,     3,     4,     5,     6,     5,     8,    26,    10,    21,
       9,    13,     3,     4,     5,     6,    31,     8,    25,    26,
      27,    28,    13,    30,    16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    13,    26,    33,
      34,    35,    36,    37,    40,    41,    42,    43,    44,    45,
      49,    50,    51,    35,    40,     5,    38,    41,     0,    34,
       7,    11,    25,    26,    27,    28,    30,     8,    46,     8,
       9,     8,    29,    29,     7,    42,    49,    41,    41,    41,
      41,    41,     8,    23,    24,    40,    53,    14,    47,    41,
      52,     5,    39,    40,    40,    40,    53,    53,    16,    17,
      18,    19,    20,    54,     9,    21,    22,    42,     9,    12,
       9,    12,     9,    40,    53,    53,    15,    48,    41,     5,
      42
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    33,    34,    34,    35,    35,    36,    37,
      38,    39,    39,    40,    40,    41,    41,    41,    41,    41,
      41,    41,    42,    42,    42,    42,    42,    42,    42,    43,
      44,    45,    46,    47,    48,    49,    49,    50,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    54,    54,    54,
      54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     4,     4,
       4,     1,     3,     1,     1,     2,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       6,     1,     3,     1,     1,     3,     3,     4,     1,     1,
       3,     1,     3,     3,     2,     3,     3,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* prog: inst PV  */
#line 82 "myml.y"
               {printf("\n");}
#line 1315 "y.tab.c"
    break;

  case 3: /* prog: prog inst PV  */
#line 84 "myml.y"
               {printf("\n");}
#line 1321 "y.tab.c"
    break;

  case 5: /* inst: exp  */
#line 90 "myml.y"
      {printf("DROP\n/* Dropping useless value */\n");}
#line 1327 "y.tab.c"
    break;

  case 6: /* let_def: def_id  */
#line 95 "myml.y"
                 {(yyval.val_string) = (yyvsp[0].val_string);}
#line 1333 "y.tab.c"
    break;

  case 7: /* let_def: def_fun  */
#line 96 "myml.y"
          {stdout = file_out; fclose(file_out_function);}
#line 1339 "y.tab.c"
    break;

  case 8: /* def_id: LET ID EQ exp  */
#line 99 "myml.y"
                        {(yyval.val_string) = (yyvsp[-2].val_string); add_symbol_value((yyvsp[-2].val_string),offset); printf("/* Value of %s stored at stack index fp+%d (l.92)*/\n", (yyvsp[-2].val_string), offset++);}
#line 1345 "y.tab.c"
    break;

  case 9: /* def_fun: LET fun_head EQ exp  */
#line 101 "myml.y"
                              {printf("return;\n}\n"); offset = get_symbol_value((yyvsp[-2].val_string)); delete_symbol_value();}
#line 1351 "y.tab.c"
    break;

  case 10: /* fun_head: ID LPAR id_list RPAR  */
#line 104 "myml.y"
                                {(yyval.val_string) = (yyvsp[-3].val_string); file_out_function = fopen("test.fp", "w"); stdout = file_out_function; printf("void call_%s(){\n", (yyvsp[-3].val_string));}
#line 1357 "y.tab.c"
    break;

  case 11: /* id_list: ID  */
#line 107 "myml.y"
             {add_symbol_value((yyvsp[(-1) - (1)].val_string), offset); offset = 1; add_symbol_value((yyvsp[0].val_string), offset); offset++;}
#line 1363 "y.tab.c"
    break;

  case 12: /* id_list: id_list VIR ID  */
#line 109 "myml.y"
                 {add_symbol_value((yyvsp[0].val_string), offset++);}
#line 1369 "y.tab.c"
    break;

  case 13: /* exp: arith_exp  */
#line 113 "myml.y"
                {}
#line 1375 "y.tab.c"
    break;

  case 14: /* exp: let_exp  */
#line 114 "myml.y"
          {}
#line 1381 "y.tab.c"
    break;

  case 15: /* arith_exp: MOINS arith_exp  */
#line 117 "myml.y"
                                      {}
#line 1387 "y.tab.c"
    break;

  case 16: /* arith_exp: arith_exp MOINS arith_exp  */
#line 118 "myml.y"
                            {printf("SUBI\n");}
#line 1393 "y.tab.c"
    break;

  case 17: /* arith_exp: arith_exp PLUS arith_exp  */
#line 119 "myml.y"
                           {printf("ADDI\n");}
#line 1399 "y.tab.c"
    break;

  case 18: /* arith_exp: arith_exp DIV arith_exp  */
#line 120 "myml.y"
                          {printf("DIVI\n");}
#line 1405 "y.tab.c"
    break;

  case 19: /* arith_exp: arith_exp MULT arith_exp  */
#line 121 "myml.y"
                           {printf("MULTI\n");}
#line 1411 "y.tab.c"
    break;

  case 20: /* arith_exp: arith_exp CONCAT arith_exp  */
#line 122 "myml.y"
                             {printf("concat\n");}
#line 1417 "y.tab.c"
    break;

  case 21: /* arith_exp: atom_exp  */
#line 123 "myml.y"
           {}
#line 1423 "y.tab.c"
    break;

  case 22: /* atom_exp: NUM  */
#line 126 "myml.y"
               {printf("LOADI %d\n", (yyvsp[0].val_int));}
#line 1429 "y.tab.c"
    break;

  case 23: /* atom_exp: FLOAT  */
#line 127 "myml.y"
        {}
#line 1435 "y.tab.c"
    break;

  case 24: /* atom_exp: STRING  */
#line 128 "myml.y"
         {}
#line 1441 "y.tab.c"
    break;

  case 25: /* atom_exp: ID  */
#line 129 "myml.y"
     {printf("LOAD (fp+%d) /* Loading %s at stack index fp + %d */\n", get_symbol_value((yyvsp[0].val_string)), (yyvsp[0].val_string), get_symbol_value((yyvsp[0].val_string)));}
#line 1447 "y.tab.c"
    break;

  case 26: /* atom_exp: control_exp  */
#line 130 "myml.y"
              {}
#line 1453 "y.tab.c"
    break;

  case 27: /* atom_exp: funcall_exp  */
#line 131 "myml.y"
              {}
#line 1459 "y.tab.c"
    break;

  case 28: /* atom_exp: LPAR exp RPAR  */
#line 132 "myml.y"
                {}
#line 1465 "y.tab.c"
    break;

  case 29: /* control_exp: if_exp  */
#line 135 "myml.y"
                     {}
#line 1471 "y.tab.c"
    break;

  case 30: /* if_exp: if cond then atom_exp else atom_exp  */
#line 139 "myml.y"
                                             {printf("L%d:\n/* End if-then-else */\n",label_number+1); label_number = label_number - (2*(nb_if-1));}
#line 1477 "y.tab.c"
    break;

  case 31: /* if: IF  */
#line 146 "myml.y"
        {label_number = 2*nb_if; nb_if = nb_if +1; (yyval.val_int) = label_number;}
#line 1483 "y.tab.c"
    break;

  case 32: /* cond: LPAR bool RPAR  */
#line 147 "myml.y"
                      {}
#line 1489 "y.tab.c"
    break;

  case 33: /* then: THEN  */
#line 148 "myml.y"
            {(yyval.val_int) = (yyvsp[(-1) - (1)].val_int); printf("IFN L%d\n/* Negation condition tested */\n/* case true */\n", (yyval.val_int));}
#line 1495 "y.tab.c"
    break;

  case 34: /* else: ELSE  */
#line 149 "myml.y"
            {(yyval.val_int) = (yyvsp[(-1) - (1)].val_int); printf("GOTO L%d\n/* Case false */\nL%d:\n", (yyval.val_int)+1, (yyval.val_int));}
#line 1501 "y.tab.c"
    break;

  case 35: /* let_exp: let_def IN atom_exp  */
#line 152 "myml.y"
                              {delete_symbol_value(); offset--; printf("DRCP\n/* Replacing local symbol %s by expression result */\n", (yyvsp[-2].val_string));}
#line 1507 "y.tab.c"
    break;

  case 36: /* let_exp: let_def IN let_exp  */
#line 153 "myml.y"
                     {delete_symbol_value(); offset--; printf("DRCP\n");}
#line 1513 "y.tab.c"
    break;

  case 37: /* funcall_exp: fid LPAR arg_list RPAR  */
#line 156 "myml.y"
                                     {printf("CALL call_%s\n", (yyvsp[-3].val_string)); offset = get_symbol_value((yyvsp[-3].val_string)); printf("/* Restoring P-stack, with returned value added */\nRESTORE %d\n", offset);}
#line 1519 "y.tab.c"
    break;

  case 38: /* fid: ID  */
#line 159 "myml.y"
        {printf("/* Preparing %s call with %d argument(s) */\nSAVEFP\n", (yyvsp[0].val_string), arg_nb); (yyval.val_string)=(yyvsp[0].val_string); add_symbol_value((yyvsp[0].val_string), offset);}
#line 1525 "y.tab.c"
    break;

  case 39: /* arg_list: arith_exp  */
#line 162 "myml.y"
                     {(yyval.val_int) = 1; printf("/* Argument %d loaded */\n",(yyval.val_int));}
#line 1531 "y.tab.c"
    break;

  case 40: /* arg_list: arg_list VIR arith_exp  */
#line 163 "myml.y"
                          {(yyval.val_int) = (yyvsp[-2].val_int) + 1; printf("/* Argument %d loaded */\n",(yyval.val_int));}
#line 1537 "y.tab.c"
    break;

  case 45: /* bool: exp comp exp  */
#line 170 "myml.y"
               {printf("%s\n/* condition loaded */\n", (yyvsp[-1].val_string));}
#line 1543 "y.tab.c"
    break;

  case 47: /* comp: ISLT  */
#line 175 "myml.y"
             {(yyval.val_string) = "LT";}
#line 1549 "y.tab.c"
    break;

  case 48: /* comp: ISGT  */
#line 176 "myml.y"
       {(yyval.val_string) = "GT";}
#line 1555 "y.tab.c"
    break;

  case 49: /* comp: ISLEQ  */
#line 177 "myml.y"
        {(yyval.val_string) = "LEQ";}
#line 1561 "y.tab.c"
    break;

  case 50: /* comp: ISGEQ  */
#line 178 "myml.y"
        {(yyval.val_string) = "GEQ";}
#line 1567 "y.tab.c"
    break;

  case 51: /* comp: ISEQ  */
#line 179 "myml.y"
       {(yyval.val_string) = "EQ";}
#line 1573 "y.tab.c"
    break;


#line 1577 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 182 "myml.y"
 
int main () {
    /* The code below is just a standard usage example.
    Of course, it can be changed at will.

    for instance, one could grab input and ouput file names 
    in command line arguements instead of having them hard coded */

    stderr = stdin;

    /* opening target code file and redirecting stdout on it */
    file_out = fopen("test.p","w");
    stdout = file_out; 

    /* openng source code file and redirecting stdin from it */
    file_in = fopen("testExemple.ml","r"); 
    stdin = file_in; 

    /* As a starter, one may comment the above line for usual stdin as input */

    yyparse();

    /* any open file shall be closed */
    fclose(file_out);
    fclose(file_in);
 
    return 1;
} 

