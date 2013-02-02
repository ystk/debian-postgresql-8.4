
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SQL_ALLOCATE = 258,
     SQL_AUTOCOMMIT = 259,
     SQL_BOOL = 260,
     SQL_BREAK = 261,
     SQL_CALL = 262,
     SQL_CARDINALITY = 263,
     SQL_CONNECT = 264,
     SQL_COUNT = 265,
     SQL_DATETIME_INTERVAL_CODE = 266,
     SQL_DATETIME_INTERVAL_PRECISION = 267,
     SQL_DESCRIBE = 268,
     SQL_DESCRIPTOR = 269,
     SQL_DISCONNECT = 270,
     SQL_FOUND = 271,
     SQL_FREE = 272,
     SQL_GET = 273,
     SQL_GO = 274,
     SQL_GOTO = 275,
     SQL_IDENTIFIED = 276,
     SQL_INDICATOR = 277,
     SQL_KEY_MEMBER = 278,
     SQL_LENGTH = 279,
     SQL_LONG = 280,
     SQL_NULLABLE = 281,
     SQL_OCTET_LENGTH = 282,
     SQL_OPEN = 283,
     SQL_OUTPUT = 284,
     SQL_REFERENCE = 285,
     SQL_RETURNED_LENGTH = 286,
     SQL_RETURNED_OCTET_LENGTH = 287,
     SQL_SCALE = 288,
     SQL_SECTION = 289,
     SQL_SHORT = 290,
     SQL_SIGNED = 291,
     SQL_SQL = 292,
     SQL_SQLERROR = 293,
     SQL_SQLPRINT = 294,
     SQL_SQLWARNING = 295,
     SQL_START = 296,
     SQL_STOP = 297,
     SQL_STRUCT = 298,
     SQL_UNSIGNED = 299,
     SQL_VAR = 300,
     SQL_WHENEVER = 301,
     S_ADD = 302,
     S_AND = 303,
     S_ANYTHING = 304,
     S_AUTO = 305,
     S_CONST = 306,
     S_DEC = 307,
     S_DIV = 308,
     S_DOTPOINT = 309,
     S_EQUAL = 310,
     S_EXTERN = 311,
     S_INC = 312,
     S_LSHIFT = 313,
     S_MEMPOINT = 314,
     S_MEMBER = 315,
     S_MOD = 316,
     S_MUL = 317,
     S_NEQUAL = 318,
     S_OR = 319,
     S_REGISTER = 320,
     S_RSHIFT = 321,
     S_STATIC = 322,
     S_SUB = 323,
     S_VOLATILE = 324,
     S_TYPEDEF = 325,
     TYPECAST = 326,
     CSTRING = 327,
     CVARIABLE = 328,
     CPP_LINE = 329,
     IP = 330,
     DOLCONST = 331,
     ECONST = 332,
     NCONST = 333,
     UCONST = 334,
     UIDENT = 335,
     ABORT_P = 336,
     ABSOLUTE_P = 337,
     ACCESS = 338,
     ACTION = 339,
     ADD_P = 340,
     ADMIN = 341,
     AFTER = 342,
     AGGREGATE = 343,
     ALL = 344,
     ALSO = 345,
     ALTER = 346,
     ALWAYS = 347,
     ANALYSE = 348,
     ANALYZE = 349,
     AND = 350,
     ANY = 351,
     ARRAY = 352,
     AS = 353,
     ASC = 354,
     ASSERTION = 355,
     ASSIGNMENT = 356,
     ASYMMETRIC = 357,
     AT = 358,
     AUTHORIZATION = 359,
     BACKWARD = 360,
     BEFORE = 361,
     BEGIN_P = 362,
     BETWEEN = 363,
     BIGINT = 364,
     BINARY = 365,
     BIT = 366,
     BOOLEAN_P = 367,
     BOTH = 368,
     BY = 369,
     CACHE = 370,
     CALLED = 371,
     CASCADE = 372,
     CASCADED = 373,
     CASE = 374,
     CAST = 375,
     CATALOG_P = 376,
     CHAIN = 377,
     CHAR_P = 378,
     CHARACTER = 379,
     CHARACTERISTICS = 380,
     CHECK = 381,
     CHECKPOINT = 382,
     CLASS = 383,
     CLOSE = 384,
     CLUSTER = 385,
     COALESCE = 386,
     COLLATE = 387,
     COLUMN = 388,
     COMMENT = 389,
     COMMIT = 390,
     COMMITTED = 391,
     CONCURRENTLY = 392,
     CONFIGURATION = 393,
     CONNECTION = 394,
     CONSTRAINT = 395,
     CONSTRAINTS = 396,
     CONTENT_P = 397,
     CONTINUE_P = 398,
     CONVERSION_P = 399,
     COPY = 400,
     COST = 401,
     CREATE = 402,
     CREATEDB = 403,
     CREATEROLE = 404,
     CREATEUSER = 405,
     CROSS = 406,
     CSV = 407,
     CURRENT_P = 408,
     CURRENT_CATALOG = 409,
     CURRENT_DATE = 410,
     CURRENT_ROLE = 411,
     CURRENT_SCHEMA = 412,
     CURRENT_TIME = 413,
     CURRENT_TIMESTAMP = 414,
     CURRENT_USER = 415,
     CURSOR = 416,
     CYCLE = 417,
     DATA_P = 418,
     DATABASE = 419,
     DAY_P = 420,
     DEALLOCATE = 421,
     DEC = 422,
     DECIMAL_P = 423,
     DECLARE = 424,
     DEFAULT = 425,
     DEFAULTS = 426,
     DEFERRABLE = 427,
     DEFERRED = 428,
     DEFINER = 429,
     DELETE_P = 430,
     DELIMITER = 431,
     DELIMITERS = 432,
     DESC = 433,
     DICTIONARY = 434,
     DISABLE_P = 435,
     DISCARD = 436,
     DISTINCT = 437,
     DO = 438,
     DOCUMENT_P = 439,
     DOMAIN_P = 440,
     DOUBLE_P = 441,
     DROP = 442,
     EACH = 443,
     ELSE = 444,
     ENABLE_P = 445,
     ENCODING = 446,
     ENCRYPTED = 447,
     END_P = 448,
     ENUM_P = 449,
     ESCAPE = 450,
     EXCEPT = 451,
     EXCLUDING = 452,
     EXCLUSIVE = 453,
     EXECUTE = 454,
     EXISTS = 455,
     EXPLAIN = 456,
     EXTERNAL = 457,
     EXTRACT = 458,
     FALSE_P = 459,
     FAMILY = 460,
     FETCH = 461,
     FIRST_P = 462,
     FLOAT_P = 463,
     FOLLOWING = 464,
     FOR = 465,
     FORCE = 466,
     FOREIGN = 467,
     FORWARD = 468,
     FREEZE = 469,
     FROM = 470,
     FULL = 471,
     FUNCTION = 472,
     GLOBAL = 473,
     GRANT = 474,
     GRANTED = 475,
     GREATEST = 476,
     GROUP_P = 477,
     HANDLER = 478,
     HAVING = 479,
     HEADER_P = 480,
     HOLD = 481,
     HOUR_P = 482,
     IDENTITY_P = 483,
     IF_P = 484,
     ILIKE = 485,
     IMMEDIATE = 486,
     IMMUTABLE = 487,
     IMPLICIT_P = 488,
     IN_P = 489,
     INCLUDING = 490,
     INCREMENT = 491,
     INDEX = 492,
     INDEXES = 493,
     INHERIT = 494,
     INHERITS = 495,
     INITIALLY = 496,
     INNER_P = 497,
     INOUT = 498,
     INPUT_P = 499,
     INSENSITIVE = 500,
     INSERT = 501,
     INSTEAD = 502,
     INT_P = 503,
     INTEGER = 504,
     INTERSECT = 505,
     INTERVAL = 506,
     INTO = 507,
     INVOKER = 508,
     IS = 509,
     ISNULL = 510,
     ISOLATION = 511,
     JOIN = 512,
     KEY = 513,
     LANCOMPILER = 514,
     LANGUAGE = 515,
     LARGE_P = 516,
     LAST_P = 517,
     LC_COLLATE_P = 518,
     LC_CTYPE_P = 519,
     LEADING = 520,
     LEAST = 521,
     LEFT = 522,
     LEVEL = 523,
     LIKE = 524,
     LIMIT = 525,
     LISTEN = 526,
     LOAD = 527,
     LOCAL = 528,
     LOCALTIME = 529,
     LOCALTIMESTAMP = 530,
     LOCATION = 531,
     LOCK_P = 532,
     LOGIN_P = 533,
     MAPPING = 534,
     MATCH = 535,
     MAXVALUE = 536,
     MINUTE_P = 537,
     MINVALUE = 538,
     MODE = 539,
     MONTH_P = 540,
     MOVE = 541,
     NAME_P = 542,
     NAMES = 543,
     NATIONAL = 544,
     NATURAL = 545,
     NCHAR = 546,
     NEW = 547,
     NEXT = 548,
     NO = 549,
     NOCREATEDB = 550,
     NOCREATEROLE = 551,
     NOCREATEUSER = 552,
     NOINHERIT = 553,
     NOLOGIN_P = 554,
     NONE = 555,
     NOSUPERUSER = 556,
     NOT = 557,
     NOTHING = 558,
     NOTIFY = 559,
     NOTNULL = 560,
     NOWAIT = 561,
     NULL_P = 562,
     NULLIF = 563,
     NULLS_P = 564,
     NUMERIC = 565,
     OBJECT_P = 566,
     OF = 567,
     OFF = 568,
     OFFSET = 569,
     OIDS = 570,
     OLD = 571,
     ON = 572,
     ONLY = 573,
     OPERATOR = 574,
     OPTION = 575,
     OPTIONS = 576,
     OR = 577,
     ORDER = 578,
     OUT_P = 579,
     OUTER_P = 580,
     OVER = 581,
     OVERLAPS = 582,
     OVERLAY = 583,
     OWNED = 584,
     OWNER = 585,
     PARSER = 586,
     PARTIAL = 587,
     PARTITION = 588,
     PASSWORD = 589,
     PLACING = 590,
     PLANS = 591,
     POSITION = 592,
     PRECEDING = 593,
     PRECISION = 594,
     PRESERVE = 595,
     PREPARE = 596,
     PREPARED = 597,
     PRIMARY = 598,
     PRIOR = 599,
     PRIVILEGES = 600,
     PROCEDURAL = 601,
     PROCEDURE = 602,
     QUOTE = 603,
     RANGE = 604,
     READ = 605,
     REAL = 606,
     REASSIGN = 607,
     RECHECK = 608,
     RECURSIVE = 609,
     REFERENCES = 610,
     REINDEX = 611,
     RELATIVE_P = 612,
     RELEASE = 613,
     RENAME = 614,
     REPEATABLE = 615,
     REPLACE = 616,
     REPLICA = 617,
     RESET = 618,
     RESTART = 619,
     RESTRICT = 620,
     RETURNING = 621,
     RETURNS = 622,
     REVOKE = 623,
     RIGHT = 624,
     ROLE = 625,
     ROLLBACK = 626,
     ROW = 627,
     ROWS = 628,
     RULE = 629,
     SAVEPOINT = 630,
     SCHEMA = 631,
     SCROLL = 632,
     SEARCH = 633,
     SECOND_P = 634,
     SECURITY = 635,
     SELECT = 636,
     SEQUENCE = 637,
     SERIALIZABLE = 638,
     SERVER = 639,
     SESSION = 640,
     SESSION_USER = 641,
     SET = 642,
     SETOF = 643,
     SHARE = 644,
     SHOW = 645,
     SIMILAR = 646,
     SIMPLE = 647,
     SMALLINT = 648,
     SOME = 649,
     STABLE = 650,
     STANDALONE_P = 651,
     START = 652,
     STATEMENT = 653,
     STATISTICS = 654,
     STDIN = 655,
     STDOUT = 656,
     STORAGE = 657,
     STRICT_P = 658,
     STRIP_P = 659,
     SUBSTRING = 660,
     SUPERUSER_P = 661,
     SYMMETRIC = 662,
     SYSID = 663,
     SYSTEM_P = 664,
     TABLE = 665,
     TABLESPACE = 666,
     TEMP = 667,
     TEMPLATE = 668,
     TEMPORARY = 669,
     TEXT_P = 670,
     THEN = 671,
     TIME = 672,
     TIMESTAMP = 673,
     TO = 674,
     TRAILING = 675,
     TRANSACTION = 676,
     TREAT = 677,
     TRIGGER = 678,
     TRIM = 679,
     TRUE_P = 680,
     TRUNCATE = 681,
     TRUSTED = 682,
     TYPE_P = 683,
     UNBOUNDED = 684,
     UNCOMMITTED = 685,
     UNENCRYPTED = 686,
     UNION = 687,
     UNIQUE = 688,
     UNKNOWN = 689,
     UNLISTEN = 690,
     UNTIL = 691,
     UPDATE = 692,
     USER = 693,
     USING = 694,
     VACUUM = 695,
     VALID = 696,
     VALIDATOR = 697,
     VALUE_P = 698,
     VALUES = 699,
     VARCHAR = 700,
     VARIADIC = 701,
     VARYING = 702,
     VERBOSE = 703,
     VERSION_P = 704,
     VIEW = 705,
     VOLATILE = 706,
     WHEN = 707,
     WHERE = 708,
     WHITESPACE_P = 709,
     WINDOW = 710,
     WITH = 711,
     WITHOUT = 712,
     WORK = 713,
     WRAPPER = 714,
     WRITE = 715,
     XML_P = 716,
     XMLATTRIBUTES = 717,
     XMLCONCAT = 718,
     XMLELEMENT = 719,
     XMLFOREST = 720,
     XMLPARSE = 721,
     XMLPI = 722,
     XMLROOT = 723,
     XMLSERIALIZE = 724,
     YEAR_P = 725,
     YES_P = 726,
     ZONE = 727,
     NULLS_FIRST = 728,
     NULLS_LAST = 729,
     WITH_TIME = 730,
     IDENT = 731,
     FCONST = 732,
     SCONST = 733,
     BCONST = 734,
     XCONST = 735,
     Op = 736,
     ICONST = 737,
     PARAM = 738,
     POSTFIXOP = 739,
     UMINUS = 740
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 383 "preproc.y"

	double	dval;
	char	*str;
	int     ival;
	struct	when		action;
	struct	index		index;
	int		tagname;
	struct	this_type	type;
	enum	ECPGttype	type_enum;
	enum	ECPGdtype	dtype_enum;
	struct	fetch_desc	descriptor;
	struct  su_symbol	struct_union;
	struct	prep		prep;



/* Line 1676 of yacc.c  */
#line 554 "preproc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE base_yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE base_yylloc;

