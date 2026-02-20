#include <stdio.h>
#include <ctype.h>
#define MAXLEN 1000

int main()
{
	char n[MAXLEN];
	int i, c;
	int htoi(char s[]);
	for (i = 0; i < MAXLEN && (c = getchar()) != EOF; ++i)
	{
		n[i] = c;
	}
	printf("%d", htoi(n));

}
// atoi: convert s to integer
int atoi (char s[])
{
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
// lower: convert c to lower case
int lower(int c)
{
	if (isdigit(c))
		return c + 'a' - 'A';
	else
		return c;
}


// converts a string of hexidecimal digits into its equivalent integer value 	
int htoi(char s[])
{
	int i,n,c, num;
	n = 0;
	if ((s[0] == 0) && (s[1] == 'x' || s[1] == 'X'))
	{
		c = 2;
	} else 
	{
		c = 0;
	}
	for (i = c; s[i] != '\0'; ++i)
	{
		if (isdigit(s[i]))
		{
			n = n * 16 + (s[i] - '0');
		} else if (s[i] >= 'A' && s[i] <= 'F')
		{
			num = (s[i] - 'A') + 10;
			n = n * 16 + (num);
		} else if (s[i] >= 'a' && s[i] <= 'f')
		{
			num = (s[i] - 'A') + 10;
			n = n * 16 + (num);
		}
	}
	return n;
}
