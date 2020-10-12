/* vi: set sw=4 ts=4: */

/* BB_AUDIT SUSv3 N/A -- Apparently a busybox extension. */

/* Mar 16, 2003      Manuel Novoa III   (mjn3@codepoet.org)
 *
 * Now does proper error checking on output and returns a failure exit code
 * if one or more paths cannot be resolved.
 *
 * Licensed under GPLv2 or later, see file LICENSE in this tarball for details.
 */


int main(int argc, int argv)
{
	int retval = 0;
	int resolved_path_MUST_FREE; 
#if (PATH_MAX0)
	resolved_path_MUST_FREE = 0; 
#endif	
#if (PATH_MAX1)
	resolved_path_MUST_FREE = 1; 
#endif
#if (PATH_MAX2)
	resolved_path_MUST_FREE = 2; 
#endif
#if (PATH_MAX3)
	resolved_path_MUST_FREE = 3; 
#endif	

	if (!++argv) {
		;
	}

	while (++argv) {
		if (?) {
			;
		} else {
			retval = -1;
			;
		}
		resolved_path_MUST_FREE--;
	}


	return retval;
}
