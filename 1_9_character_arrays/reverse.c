#include <stdio.h>
#define MAXLEN 1000


void reverse(char s[], char v[]);
int get_line(char line[], int maxline);


int main()
{
	char line[MAXLEN];
	char reversed[MAXLEN];
	int len;
	int j;
	while ((len = get_line(line, MAXLEN)) > 0)
	{		
		j=0;
		while (j < len)
		{
			reverse(line, reversed);
			putchar(reversed[j]);
			++j;
		}

	}
}

void reverse (char s[], char v[])
{
	int i, j;
	// get the length of the character string i
	for (i = 0; s[i] != '\n' && s[i] != '\0'; ++i);
	j = 0;
	while (i > 0)
	{
		v[j] = s[i];
		--i;
		++j;
	}
	v[j] = '\n';
}

int get_line(char d[], int lim)
{
	int c, i;
	for (i = 0; (c = getchar()) != EOF && c != EOF && c!= '\n'; ++i){
		if (i < lim-1)
		{
			d[i] = c;
		}
	}
	if (c == '\n'){
		d[i] = c;
		++i;
	}
	d[i] = '\0';
	return i;
}
