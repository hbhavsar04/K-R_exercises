#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXLEN 1000

/* comment

   end comment */
int main()
{
	int state, i, c, state_line_comments, state_double, state_single; // line comment
	char text[MAXLEN];
	state = OUT;
	state_line_comments = OUT;
	state_double = OUT;
	state_single = OUT;
	for (i = 0; i < MAXLEN && (c = getchar()) != EOF; i++)
	{
		text[i] = c;
	}
	for (i = 0; i < MAXLEN && text[i] != 0; i++)
	{
		if (state == OUT && text[i] == '/' && text[i+1] == '*' && state_single == OUT && state_double == OUT)
		{
			state = IN;
		}
		if (state == IN && text[i] == '*' && text[i+1] == '/' && state_single == OUT && state_double == OUT)
		{
			i = i + 2;
			state = OUT;
		} 
		if (text[i] == '/' && text[i+1] == '/')
		{
			state_line_comments = IN;
		}
		if (state_line_comments == IN && text[i] == '\n')
		{
			++i;
			state_line_comments = OUT;
		}
		if (state == OUT)
		{
			if (state_double == OUT && text[i] == '"' && state_single == OUT)
			{
				state_double = IN;
			}else if (state_double == IN && text[i] == '"' && state_single == OUT)
			{ 
				state_double = OUT;
			}
			if (state_single == OUT && text[i] == '\'' && state_double == OUT)
			{
				state_single = IN;
			}else if (state_single == IN && text[i] == '\'' && state_double == OUT)
			{
				state_single = OUT;
			}
		}
		if ((state == OUT && state_line_comments == OUT) || state_double == IN || state_single == IN)
		{
			putchar(text[i]);
		}
	}
	return 0;
}
