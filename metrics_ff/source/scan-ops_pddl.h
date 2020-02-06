/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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


#line 113 "include/scan-ops_pddl.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ops_pddllval;

int ops_pddlparse (void);

#endif /* !YY_OPS_PDDL_INCLUDE_SCAN_OPS_PDDL_H_INCLUDED  */
