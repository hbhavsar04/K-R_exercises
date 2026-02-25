#include <ctype.h>
#include <stdio.h>

// structrue of the program reflects the form of the input:
// skip white sapce, if any
// get sign, if any
// get integer part and convert it

#define MAXLEN 1000
int main()
{
	int atoi(char s[]);
	char a[MAXLEN];
	a[0] = ' ';
	a[1] = '-';
	a[2] = '1';
	a[3] = '5';
	a[4] = '1';
	printf("%d", atoi(a));
}
// atoi: convert s to integer; version 2
int atoi(char s[])
{
	int i, n, sign;
	for (i = 0; isspace(s[i]); i++) // skip leading whitespaces
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}

