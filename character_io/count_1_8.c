#include <stdio.h>

/* count lines in input 1st version*/

int main ()
{
	int c, nb, nt, nl;
	nb = 0;
	nt = 0;
	nl = 0;
	
	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++nb;
	}

	printf("\nThere were %d newlines\nThere were %d tabs\nThere were %d blanks", nl, nt, nb);
}
