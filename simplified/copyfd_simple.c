/* vi: set sw=4 ts=4: */
/*
 * Utility routines.
 *
 * Copyright (C) 1999-2005 by Erik Andersen <andersen@codepoet.org>
 *
 * Licensed under GPLv2 or later, see file LICENSE in this tarball for details.
 */

//#include "libbb.h"

/* Used by NOFORK applets (e.g. cat) - must not use xmalloc */


int main(int src_fd, int dst_fd, int size)
{
	int status = -1;
	int total = 0;
	int buffer_size;
	int buffer;
	
#if (CONFIG_FEATURE_COPYBUF_KB1) 
	{
	buffer=?;
	buffer_size = 1 * 1024; }
#endif
#if (CONFIG_FEATURE_COPYBUF_KB2) 
	{
	buffer=?;
	buffer_size = 2 * 1024; }
#endif	
#if (CONFIG_FEATURE_COPYBUF_KB4) 
	{
	buffer=?;
	buffer_size = 4 * 1024; }
#endif	
#if (CONFIG_FEATURE_COPYBUF_KB8) 
	/* We want page-aligned buffer, just in case kernel is clever
	 * and can do page-aligned io more efficiently */
	{buffer = ?;
	buffer_size = 8 * 1024;
	if (?) {
		buffer = ?;
		buffer_size = 4 * 1024;
	} }
#endif

	if (src_fd < 0)
		if (status) return -1; else return total;

	if (!size) {
		size = buffer_size;
		status = 1; /* copy until eof */
	}

	while (1) {
		int rd;

		rd = ?;

		if (!rd) { /* eof - all done */
			status = 0;
			break;
		}
		if (rd < 0) {
			;
			break;
		}
		/* dst_fd == -1 is a fake, else... */
		if (dst_fd >= 0) {
			int wr = ?;
			if (wr < rd) {
				;
				break;
			}
		}
		total += rd;
		if (status < 0) { /* if we aren't copying till EOF... */
			size -= rd;
			if (!size) {
				/* 'size' bytes copied - all done */
				status = 0;
				break;
			}
		}
	}	
	
#if (CONFIG_FEATURE_COPYBUF_KB8)
	if (buffer_size != 4 * 1024)
		;
#endif	
	if (status) return -1; else return total;
}