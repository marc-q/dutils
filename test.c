/* Copyright 2015 Marc Volker Dickmann */
/* Tests the dutils library. */
#include <stdio.h>
#include "dutils.h"

int main (int argc, char* argv[])
{
	/* Test Start */
	printf ("Tests for the DUtils library v. %s .\n\n", DUTILS_VERSION);

	/* Bash Colors */
	printf ("Bash Colors: %s Blue %s Yellow %s Reset!\n", BC_TXT_BLUE, BC_TXT_YELLOW, BC_TXT_RST);
	printf ("Test successful when the Words have their color!\n\n");

	/* Test End */
	printf ("This is the end!\n");

	return 0;
}
