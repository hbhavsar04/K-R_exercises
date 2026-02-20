#include <stdio.h>
#define MAXLEN 1000

int main()
{
	int i, c;
	char t[MAXLEN];
	char exclude[MAXLEN];
	void squeeze_alt(char s[], char c[]);
	int any (char s[], char c[]);
	exclude[0] = 'f'; 
	exclude[1] = 'c';
	exclude[3] = '\0';
	// fill t with the input
	for (i = 0; (c = getchar()) != EOF && i < MAXLEN; ++i)
	{
		t[i] = c;
	}
	
	printf("\nany output: %d\n", any(t, exclude));
	squeeze_alt(t, exclude);
	
	for (i = 0; t[i] != '\0'; ++i)
	{
		putchar(t[i]);

	}
}
int any (char s[], char c[]) 
{
	int i, j, k, x, check;
	int pos[MAXLEN];
	check = 0;
	for (i = j = 0; s[i] != '\0'; ++i)
	{
		for (k = 0; c[k] != '\0'; ++k)
		{
			if (c[k] == s[i])
			{
				check = 1;
				pos[x++] = i;
			}
		}
	}
	if (check)
	{
		return pos[0];
	}else
	{
		return -1;
	}
}
void squeeze(char s[], int c)
{
	int i, j;
	for (i = j = 0; s[i] != '\0'; ++i)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
void squeeze_alt(char s[], char c[])
{
	int i, j, k, check;
	for (i = j = 0; s[i] != '\0'; ++i)
	{
		check = 0;
		for (k = 0; c[k] != '\0'; ++k)
		{
			if (c[k] == s[i])
			{
				check = 1;
			}
		}
		if (check != 1)
			s[j++] = s[i];
	}
	s[j] = '\0';
}
