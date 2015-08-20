/* Copyright 2015 Marc Volker Dickmann */
/* Tests the dutils library. */
#include <stdio.h>
#include "dutils.h"

int main (int argc, char* argv[])
{
	/* Test Start */
	printf ("Tests for the DUtils library v. %s .\n\n", DUTILS_VERSION);

	/* Bash Colors */
	printf ("Bash Colors TXT: %s Black %s Red %s Green %s Yellow %s Blue %s Purple %s Cyan %s White %s Reset!\n", BC_TXT_BLACK, BC_TXT_RED, BC_TXT_GREEN, BC_TXT_YELLOW, BC_TXT_BLUE, BC_TXT_PURPLE, BC_TXT_CYAN, BC_TXT_WHITE, BC_TXT_RST);
	printf ("Bash Colors BLD: %s Black %s Red %s Green %s Yellow %s Blue %s Purple %s Cyan %s White %s Reset!\n", BC_BLD_BLACK, BC_BLD_RED, BC_BLD_GREEN, BC_BLD_YELLOW, BC_BLD_BLUE, BC_BLD_PURPLE, BC_BLD_CYAN, BC_BLD_WHITE, BC_TXT_RST);
	printf ("Bash Colors UND: %s Black %s Red %s Green %s Yellow %s Blue %s Purple %s Cyan %s White %s Reset!\n", BC_UND_BLACK, BC_UND_RED, BC_UND_GREEN, BC_UND_YELLOW, BC_UND_BLUE, BC_UND_PURPLE, BC_UND_CYAN, BC_UND_WHITE, BC_TXT_RST);
	printf ("Bash Colors BAK: %s Black %s Red %s Green %s Yellow %s Blue %s Purple %s Cyan %s White %s Reset!\n", BC_BAK_BLACK, BC_BAK_RED, BC_BAK_GREEN, BC_BAK_YELLOW, BC_BAK_BLUE, BC_BAK_PURPLE, BC_BAK_CYAN, BC_BAK_WHITE, BC_TXT_RST);

	printf ("Test successful when the Words have their color!\n\n");
	

	/* Test End */
	printf ("This is the end!\n");

	return 0;
}
