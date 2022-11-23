/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    NUM = 258,
    FLOAT = 259,
    ID = 260,
    STRING = 261,
    PV = 262,
    LPAR = 263,
    RPAR = 264,
    LET = 265,
    IN = 266,
    VIR = 267,
    IF = 268,
    THEN = 269,
    ELSE = 270,
    ISLT = 271,
    ISGT = 272,
    ISLEQ = 273,
    ISGEQ = 274,
    ISEQ = 275,
    AND = 276,
    OR = 277,
    NOT = 278,
    BOOL = 279,
    PLUS = 280,
    MOINS = 281,
    MULT = 282,
    DIV = 283,
    EQ = 284,
    CONCAT = 285,
    UNA = 286
  };
#endif
/* Tokens.  */
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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
