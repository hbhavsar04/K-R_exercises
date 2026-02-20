#include <stdio.h>

#define tab_stop 8
#define MAXLEN 1000

int main()
{
	char text[MAXLEN];
	int i, c, j, space_count, tabs, spaces, t, s;
	for (i = 0; (c = getchar()) != EOF && i < MAXLEN; ++i)
	{
		text[i] = c;
	}
	space_count = 0;
	tabs = 0;
	spaces = 0;
	for (j = 0; j < i; ++j)
	{
		if (text[j] == ' '){
			++space_count;
		} else 
		{
			tabs = space_count/tab_stop;
			spaces = space_count - (tabs * tab_stop);
			for (t = 0; t < tabs; ++t)
			{
				putchar('\t');
			}
			for (s = 0; s < spaces; ++s)
			{
				putchar(' ');
			}
			space_count = 0;
			tabs = 0;
			spaces = 0;
			putchar(text[j]);

		}
	}
}
