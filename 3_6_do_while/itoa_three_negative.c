#include <stdio.h>
#define MAXLEN 1000


int main()
{
	char string[MAXLEN];
	void itoa_min_field(int n, char s[], int b);
	int i;
	for (i = 0; i < MAXLEN; ++i){
		string[i] = '\0';
	}
	itoa_min_field(32, string, 5);
	for (i = 0; string[i] != '\0'; ++i)
		putchar(string[i]);
}
void itoa_min_field (int n, char s[], int b)
{
	int i, sign, m;
	void reverse(char s[]);
	sign = n;
	m = 0;
	i = 0;
	do {
		m = n % 10;
		if (m < 0)
			m = -m;
		s[i++] = m + '0';
	} while ((n /= 10) != 0);
	if (sign < 0)
		s[i++] = '-';
	while (i < b)
		s[i++] = ' ';
	s[i] = '\0';
	reverse(s);
}
// iota: convert n to characters in s
void iota (int n, char s[])
{
	int i, sign, m;
	void reverse(char s[]);
	
	sign = n; // record the sign
	m = 0;
	i = 0;
	do { // generate digits in reverse order
	     	m = n % 10;
		if (m < 0)
			m = -m;
		s[i++] = m + '0'; // get the next digit
	} while ((n /= 10) != 0); // delete it
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}
void reverse(char s[]) 
{
	int i, j;
	char temp[MAXLEN];
	for (i = 0; s[i] != '\0'; ++i)
		temp[i] = s[i];
	--i;
	for (j = 0; i >= 0; ++j){
		s[j] = temp[i];
		--i;
	}
	s[j] = '\0';
}
