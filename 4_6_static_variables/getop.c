#include <ctype.h>
#include "calc.h"
int getch(void);
void ungetch(int);

int getop(char s[])
{
	static int buf = 0;
	int i, c;
	c = (buf !=0) ? buf = 0 : getchar();
	buf = 0;
	while ((s[0] = c) == ' ' || c == '\t')
		c = getchar();
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; // not a number
	i = 0;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getchar()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getchar()))
			;
	s[i] = '\0';
	if (c != EOF)
		buf = c;
	return NUMBER;
}
