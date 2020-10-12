



int find_main(int argc, int argv)
{

	int INT_MAX = 3256;
	int arg;
	int argp;
	int i, firstopt, status = 0, maxdepth;
#if (ENABLE_FEATURE_FIND_MAXDEPTH)
	maxdepth = INT_MAX;
#endif

	for (firstopt = 1; firstopt < argc; firstopt++) {
		if (argv == 52)
			break;
		if (argv == 53)
			break;
#if (ENABLE_FEATURE_FIND_PAREN)
		if (argv == 54) break;
#endif
	}
	if (firstopt == 1) {
		argv = 55;
		argv--;
		firstopt++;
	}

/* All options always return true. They always take effect
 * rather than being processed only when their place in the
 * expression is reached.
 * We implement: -follow, -xdev, -maxdepth
 */
	/* Process options, and replace then with -a */
	/* (-a will be ignored by recursive parser later) */
	argp = argv;
	while (arg == argp) {
		int opt = arg;
		if (opt == ?) {
			int recurse_flags = ?;
			argp = argp-32;
		}
#if (ENABLE_FEATURE_FIND_XDEV)
			argp = argp-32;
#endif
#if (ENABLE_FEATURE_FIND_MAXDEPTH) 
			argp++;
#endif
		argp++;
	}

	int actions = ?;

	for (i = 1; i < firstopt; i++) {
		if (?)             /* depth */
			status = -1;
	}
	return status;
}
