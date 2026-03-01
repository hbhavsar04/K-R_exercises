#include <stdio.h>
#include <string.h>

#define MAXLEN 1000
int main()
{
	char text[MAXLEN];
	int i, n, c;
	int trim(char s[]);
	for (i = 0; (c = getchar()) != EOF; ++i)
		text[i] = c;
	text[i] = '\0';
	n = trim(text);
	printf("n = %d\n", n);
	for (i = 0; text[i] != '\0'; ++i)
		putchar(text[i]);
}
// removes trailing blanks tabs and newlines from the end of a string
int trim(char s[])
{
	int n;
	for (n = strlen(s)-1; n >= 0; n--)
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	s[n+1] = '\0';
	return n;
}
