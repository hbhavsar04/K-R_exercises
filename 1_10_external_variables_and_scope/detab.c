#include <stdio.h>

#define tab_stop 8

int main()
{
	int c, i;
	while((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			for (i = 0; i < tab_stop; i++)
			{
				putchar(' ');

			}
		}else
		{
			putchar(c);
		}
		}
}

