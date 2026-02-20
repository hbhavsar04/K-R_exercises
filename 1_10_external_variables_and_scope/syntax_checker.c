#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXLEN 1000
void pair_counter(int text_index, int lp, int rp, int lbc, int rbc, int lbk, int rbk);
int main()
{
	int i, c;
	int state_block, state_line, state_double, state_single;
	char text[MAXLEN];
	int left_paran, right_paran;
	int left_brace, right_brace;
	int left_brack, right_brack;
	left_paran = right_paran = left_brace = right_brace = left_brack = right_brack = 0;
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
		if ((state_line == OUT && state_block == OUT) && state_double == OUT && state_single == OUT)
		{
			//pair_counter(text[i], left_paran, right_paran, left_brack, right_brack, left_brace, right_brace);
			
			if (text[i] == '(')
			{
				++left_paran;
			}
			if (text[i] == ')')
			{
				++right_paran;
			}
			if (text[i] == '[')
			{
				++left_brack;
			}
			if (text[i] == ']')
			{
				++right_brack;
			}
			if (text[i] == '{')
			{
				++left_brace;
			}
			if (text[i] == '}')
			{
				++right_brace;
			}
		}
	}
	printf("%d, lp %d, rp %d, lbk %d, rbk %d, lbc, %d rbc", left_paran, right_paran, left_brack, right_brack, left_brace, right_brace);
	return 0;
}
void pair_counter (int character_index, int left_parantheses, int right_parantheses,  int left_bracket, int right_bracket,int left_braces, int right_braces)
{
	if (character_index == '(')
	{
		++left_parantheses;
	}
	if (character_index == ')')
	{
		++right_parantheses;
	}
	if (character_index == '[')
	{
		++left_bracket;
	}
	if (character_index == ']')
	{
		++right_bracket;
	}
	if (character_index == '{')
	{
		++left_braces;
	}
	if (character_index == '}')
	{
		++right_braces;
	}
}
	
