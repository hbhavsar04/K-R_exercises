#include <stdio.h>
#define max_chars 80
#define MAXLEN 1000
int get_line (char s[], int lim);
int main()
{
	int len, i, j, count, last_space_pos, space_count;
	char line[MAXLEN];
	char newline_pos[MAXLEN];

	for (i = 0; i < MAXLEN; i++) 
	{
		newline_pos[i] = 0;
	}
	while ((len = get_line(line, MAXLEN)) > 0)
	{
		count = 0;
		space_count = 0;
		last_space_pos = 0;
		for (i = 0; i < MAXLEN; i++) 
		{
			newline_pos[i] = 0;
		}
		// if the length is bigger than the max characters
		if (len > max_chars)
		{
			for (j = 0; j < MAXLEN && line[j] != 0; j++)
			{
				//find the position of the last space
				if (line[j] == ' ')
				{
					last_space_pos = j;
					++space_count;
				}
				if (space_count > 0 && count > max_chars)
				{
					newline_pos[last_space_pos] = 1;
					last_space_pos = 0;
					count = 0;
					space_count = 0;
				}
				if (space_count == 0 && count > max_chars)
				{
					newline_pos[j] = 1;
					count = 0;
					last_space_pos = 0;
					space_count = 0;
				}
				++count;
			}

		}
		//print line
		for (i = 0; i < MAXLEN && line[i] != 0; i++) 
		{
			if (newline_pos[i] > 0)
			{
				putchar('\n');
			}
			putchar(line[i]);
		}
	}
}

int get_line (char s[], int lim)
{
	int c, i;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (i < lim - 1)
		{
			s[i] = c;
		}
	}
	if (c == '\n') 
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
	
	
	




