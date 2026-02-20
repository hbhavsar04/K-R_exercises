#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXLEN 1000

int main()
{
	int i, c;
	int state_block, state_line, state_double, state_single;
	char text[MAXLEN];
	state_block = state_line = state_double = state_single = OUT;
	for (i = 0; i < MAXLEN && (c= getchar()) != EOF; ++i)
	{
		text[i] = c;
	}
	for (i = 0; i < MAXLEN && text[i] != 0; ++i)
	{
		if (state_double == OUT && state_single == OUT)
		{
			if (state_line == OUT)
			{
			
				if (state_block == OUT && text[i] == '/' && text[i+1] == '*')
				{
					state_block = IN;
				}
				if (state_block == IN && text[i] == '*' && text[i+1] == '/')
				{
					i = i +2;
					state_block = OUT;
				}
			}
			if (state_block == OUT)
			{
				if (state_line == OUT && text[i] == '/' && text[i+1] == '/')
				{
					state_line = IN;
				}
				if (state_line == IN && text[i] == '\n')
				{
					++i;
					state_line = OUT;

				}
			}

		}
		if (state_line == OUT && state_block == OUT)
		{
			if (state_double == OUT)
			{
				if (state_single == OUT && text[i] == '\'')
				{
					state_single = IN;
				} else if (state_single == IN && text[i] == '\'' && (text[i-1] != '\\' || (text[i-1] == '\\' && text[i-2] == '\\')))
				{
					state_single = OUT;
				}
			}
			if (state_single == OUT)
			{
				if (state_double == OUT && text[i] == '"')
				{
					state_double = IN;
				} else if (state_double == IN && text[i] == '"')
				{
					state_double = OUT;
				}
			}
		}
		if ((state_line == OUT && state_block == OUT) || state_double == IN || state_single == IN)
		{
			putchar(text[i]);
		}
	}
	return 0;
}
	
