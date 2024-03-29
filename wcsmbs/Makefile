# Copyright (C) 1995-2000,2002,2003,2004,2005,2006,2007
#	Free Software Foundation, Inc.
# This file is part of the GNU C Library.

# The GNU C Library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.

# The GNU C Library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.

# You should have received a copy of the GNU Lesser General Public
# License along with the GNU C Library; if not, write to the Free
# Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
# 02111-1307 USA.

#
#	Sub-makefile for wcsmbs portion of the library.
#
subdir	:= wcsmbs

headers	:= wchar.h bits/wchar.h bits/wchar2.h bits/wchar-ldbl.h uchar.h
distribute := wcwidth.h wcsmbsload.h

routines := wcscat wcschr wcscmp wcscpy wcscspn wcsdup wcslen wcsncat \
	    wcsncmp wcsncpy wcspbrk wcsrchr wcsspn wcstok wcsstr wmemchr \
	    wmemcmp wmemcpy wmemmove wmemset wcpcpy wcpncpy wmempcpy \
	    btowc wctob mbsinit \
	    mbrlen mbrtowc wcrtomb mbsrtowcs wcsrtombs \
	    mbsnrtowcs wcsnrtombs wcsnlen wcschrnul \
	    wcstol wcstoul wcstoll wcstoull wcstod wcstold wcstof \
	    wcstol_l wcstoul_l wcstoll_l wcstoull_l \
	    wcstod_l wcstold_l wcstof_l \
	    wcscoll wcsxfrm \
	    wcwidth wcswidth \
	    wcscoll_l wcsxfrm_l \
	    wcscasecmp wcsncase wcscasecmp_l wcsncase_l \
	    wcsmbsload mbsrtowcs_l \
	    isoc99_wscanf isoc99_vwscanf isoc99_fwscanf isoc99_vfwscanf \
	    isoc99_swscanf isoc99_vswscanf

tests := tst-wcstof wcsmbs-tst1 tst-wcsnlen tst-btowc tst-mbrtowc \
	 tst-wcrtomb tst-wcpncpy tst-mbsrtowcs tst-wchar-h tst-mbrtowc2 \
	 wcsatcliff

include ../Rules

CFLAGS-wcwidth.c = -I../wctype
CFLAGS-wcswidth.c = -I../wctype

strtox-CFLAGS = -I../include
CFLAGS-wcstol.c = $(strtox-CFLAGS)
CFLAGS-wcstoul.c = $(strtox-CFLAGS)
CFLAGS-wcstoll.c = $(strtox-CFLAGS)
CFLAGS-wcstoull.c = $(strtox-CFLAGS)
CFLAGS-wcstod.c = $(strtox-CFLAGS)
CFLAGS-wcstold.c = $(strtox-CFLAGS)
CFLAGS-wcstof.c = $(strtox-CFLAGS)
CFLAGS-wcstol_l.c = $(strtox-CFLAGS)
CFLAGS-wcstoul_l.c = $(strtox-CFLAGS)
CFLAGS-wcstoll_l.c = $(strtox-CFLAGS)
CFLAGS-wcstoull_l.c = $(strtox-CFLAGS)
CFLAGS-wcstod_l.c = $(strtox-CFLAGS)
CFLAGS-wcstold_l.c = $(strtox-CFLAGS)
CFLAGS-wcstof_l.c = $(strtox-CFLAGS)
CFLAGS-tst-wchar-h.c = -D_FORTIFY_SOURCE=2

CFLAGS-isoc99_wscanf.c += $(exceptions)
CFLAGS-isoc99_fwscanf.c += $(exceptions)
CFLAGS-isoc99_vwscanf.c += $(exceptions)
CFLAGS-isoc99_vfwscanf.c += $(exceptions)
ifneq (,$(filter %REENTRANT, $(defines)))
CPPFLAGS += -D_IO_MTSAFE_IO
endif

# We need to find the default version of strtold_l in stdlib.
CPPFLAGS-wcstold_l.c = -I../stdlib

tst-btowc-ENV = LOCPATH=$(common-objpfx)localedata
tst-mbrtowc-ENV = LOCPATH=$(common-objpfx)localedata
tst-wcrtomb-ENV = LOCPATH=$(common-objpfx)localedata
tst-mbrtowc2-ENV = LOCPATH=$(common-objpfx)localedata
