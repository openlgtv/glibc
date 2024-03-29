/* Copyright (C) 2011, 2012 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *      ISO C11 Standard: 7.28
 *	Unicode utilities	<uchar.h>
 */

#ifndef _UCHAR_H
#define _UCHAR_H	1

#include <features.h>

#define __need_size_t
#include <stddef.h>
#define __need_mbstate_t
#include <wchar.h>


#if defined __GNUC__ && !defined __USE_ISOCXX11
/* Define the 16-bit and 32-bit character types.  Use the information
   provided by the compiler.  */
# if !defined __CHAR16_TYPE__ || !defined __CHAR32_TYPE__
#  if defined __STDC__ && __STDC__ < 201000L
#   error "<uchar.h> requires ISO C11 mode"
#  else
#   error "definitions of __CHAR16_TYPE__ and/or __CHAR32_TYPE__ missing"
#  endif
# endif
typedef __CHAR16_TYPE__ char16_t;
typedef __CHAR32_TYPE__ char32_t;
#endif


__BEGIN_DECLS

/* Available starting from glibc 2.16. If we're going to declare them,
   we should provide a polyfill.  */
#if 0
/* Write char16_t representation of multibyte character pointed
   to by S to PC16.  */
extern size_t mbrtoc16 (char16_t *__restrict __pc16,
			__const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __p) __THROW;

/* Write multibyte representation of char16_t C16 to S.  */
extern size_t c16rtomb (char *__restrict __s, char16_t __c16,
			mbstate_t *__restrict __ps) __THROW;



/* Write char32_t representation of multibyte character pointed
   to by S to PC32.  */
extern size_t mbrtoc32 (char32_t *__restrict __pc32,
			__const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __p) __THROW;

/* Write multibyte representation of char32_t C32 to S.  */
extern size_t c32rtomb (char *__restrict __s, char32_t __c32,
			mbstate_t *__restrict __ps) __THROW;
#endif

__END_DECLS

#endif	/* uchar.h */
