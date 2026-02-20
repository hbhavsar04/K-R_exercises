#include <stdio.h>

int main()
{
	int i, c, lim;
	lim = 1000;
	char s[lim];
	char t[lim];
	// given loop
	
	/*
	for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;
	while (i > 0)
	{
		putchar(s[i]);
		--i;
	}
	*/
	int good = 1;
	i = 0;
	while(good)
	{
		if (i < lim)
		{
			if ((c=getchar()) != '\n') 
			{
				if (c != EOF)
				{
					t[i] = c;
					++i;
				} else {
					good = 0;
				}
			
			}else {
				good = 0;
			}
		}else{
			good = 0;
		}

	}
	while (i > 0)
	{
		putchar(t[i]);
		--i;
	}
}
