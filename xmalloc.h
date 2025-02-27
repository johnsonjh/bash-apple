/* xmalloc.h -- defines for the `x' memory allocation functions */

/* Copyright (C) 2001 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it under
   the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 2, or (at your option) any later
   version.

   Bash is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
   for more details.

   You should have received a copy of the GNU General Public License along
   with Bash; see the file COPYING.  If not, write to the Free Software
   Foundation, 59 Temple Place, Suite 330, Boston, MA 02111 USA. */

#if !defined (_XMALLOC_H_)
#define _XMALLOC_H_

#include "stdc.h"
#include "bashansi.h"

/* Generic pointer type. */
#ifndef PTR_T

#if defined (__STDC__)
#  define PTR_T	void *
#else
#  define PTR_T char *
#endif

#endif /* PTR_T */

/* Allocation functions in xmalloc.c */
extern PTR_T xmalloc __P((size_t));
extern PTR_T xrealloc __P((void *, size_t));
extern void xfree __P((void *));

#endif	/* _XMALLOC_H_ */
