#include "calc.h"
#define BUFSIZE 100

char buf;
char buf = 0;
int getch(void)
{
	if (buf == EOF)
		return // plane is landing, figure out this later
	return (buf != 0) ? buf = 0 : getchar();
}

void ungetch(int c)
{
	/*if (bufp >= BUFSIZE)
		printf("ungetch: too many chars\n");
		*/
	buf = c;
}
// ungets(s)
// pushes back an entire string onto the input
void ungets(char s[])
{
	int i, c;
	c = 0;
	for (i = 0; (s[i] = c) != EOF; ++i){
		ungetch(c);
	}	
}

