/* C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -m 10 -D -C -G -t  */
/* Computed positions: -k'1,5,7' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/* stroke keywords
 * Copyright (C) 2006 Andreas Steffen
 * Hochschule fuer Technik Rapperswil, Switzerland
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <string.h>

#include "stroke_keywords.h"

struct stroke_token {
    char *name;
    stroke_keyword_t kw;
};

<<<<<<< HEAD
#define TOTAL_KEYWORDS 34
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 15
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 39
/* maximum key range = 37, duplicates = 0 */
=======
#define TOTAL_KEYWORDS 37
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 15
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 42
/* maximum key range = 41, duplicates = 0 */
>>>>>>> upstream/4.5.1

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned char asso_values[] =
    {
<<<<<<< HEAD
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 18, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40,  0,  4,  1,
       1,  0, 40, 17, 40, 20, 40,  3,  0, 40,
      40, 12, 19, 40,  6,  3, 20, 12, 40, 40,
      10, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40
=======
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 20, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43,  0, 23,  1,
       1, 15, 43, 21, 43, 23, 43,  9,  0, 43,
      43, 10,  2, 43,  6,  5,  1,  0, 43, 43,
       2, 19, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43
>>>>>>> upstream/4.5.1
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct stroke_token wordlist[] =
  {
<<<<<<< HEAD
    {"add",             STROKE_ADD},
    {"del",             STROKE_DEL},
    {"down",            STROKE_DOWN},
    {"leases",          STROKE_LEASES},
    {"listall",         STROKE_LIST_ALL},
    {"loglevel",        STROKE_LOGLEVEL},
    {"listcrls",        STROKE_LIST_CRLS},
    {"listacerts",      STROKE_LIST_ACERTS},
    {"route",           STROKE_ROUTE},
    {"listaacerts",     STROKE_LIST_AACERTS},
    {"listcacerts",     STROKE_LIST_CACERTS},
    {"up",              STROKE_UP},
=======
    {"up",              STROKE_UP},
    {"add",             STROKE_ADD},
    {"del",             STROKE_DEL},
    {"down",            STROKE_DOWN},
    {"listall",         STROKE_LIST_ALL},
    {"delete",          STROKE_DELETE},
    {"listcrls",        STROKE_LIST_CRLS},
    {"status",          STROKE_STATUS},
    {"listaacerts",     STROKE_LIST_AACERTS},
    {"listcacerts",     STROKE_LIST_CACERTS},
    {"statusall",       STROKE_STATUSALL},
>>>>>>> upstream/4.5.1
    {"rereadall",       STROKE_REREAD_ALL},
    {"listcerts",       STROKE_LIST_CERTS},
    {"rereadcrls",      STROKE_REREAD_CRLS},
    {"rereadacerts",    STROKE_REREAD_ACERTS},
    {"rereadaacerts",   STROKE_REREAD_AACERTS},
    {"rereadcacerts",   STROKE_REREAD_CACERTS},
<<<<<<< HEAD
    {"status",          STROKE_STATUS},
    {"rereadsecrets",   STROKE_REREAD_SECRETS},
    {"listocsp",        STROKE_LIST_OCSP},
    {"statusall",       STROKE_STATUSALL},
    {"listalgs",        STROKE_LIST_ALGS},
    {"exportx509",      STROKE_EXPORT_X509},
    {"delete",          STROKE_DELETE},
    {"listocspcerts",   STROKE_LIST_OCSPCERTS},
    {"purgeocsp",       STROKE_PURGE_OCSP},
    {"purgeike",        STROKE_PURGE_IKE},
    {"unroute",         STROKE_UNROUTE},
    {"listcainfos",     STROKE_LIST_CAINFOS},
    {"rereadocspcerts", STROKE_REREAD_OCSPCERTS},
    {"listpubkeys",     STROKE_LIST_PUBKEYS},
    {"down-srcip",      STROKE_DOWN_SRCIP},
    {"listgroups",      STROKE_LIST_GROUPS}
=======
    {"leases",          STROKE_LEASES},
    {"unroute",         STROKE_UNROUTE},
    {"listocsp",        STROKE_LIST_OCSP},
    {"rereadsecrets",   STROKE_REREAD_SECRETS},
    {"listacerts",      STROKE_LIST_ACERTS},
    {"route",           STROKE_ROUTE},
    {"purgeocsp",       STROKE_PURGE_OCSP},
    {"listocspcerts",   STROKE_LIST_OCSPCERTS},
    {"listalgs",        STROKE_LIST_ALGS},
    {"rekey",           STROKE_REKEY},
    {"rereadocspcerts", STROKE_REREAD_OCSPCERTS},
    {"purgecrls",       STROKE_PURGE_CRLS},
    {"exportx509",      STROKE_EXPORT_X509},
    {"purgeike",        STROKE_PURGE_IKE},
    {"listcainfos",     STROKE_LIST_CAINFOS},
    {"listpubkeys",     STROKE_LIST_PUBKEYS},
    {"down-srcip",      STROKE_DOWN_SRCIP},
    {"loglevel",        STROKE_LOGLEVEL},
    {"listgroups",      STROKE_LIST_GROUPS},
    {"purgecerts",      STROKE_PURGE_CERTS}
>>>>>>> upstream/4.5.1
  };

static const short lookup[] =
  {
<<<<<<< HEAD
    -1, -1, -1,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
    25, 26, 27, 28, 29, 30, 31, 32, -1, -1, -1, 33
=======
    -1, -1,  0,  1,  2,  3, -1,  4,  5,  6, -1,  7,  8,  9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, -1, -1, 35,
    36
>>>>>>> upstream/4.5.1
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct stroke_token *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
