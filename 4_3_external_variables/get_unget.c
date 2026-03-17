#include "calc.h"
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many chars\n");
	else
		buf[bufp++] = c;
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
