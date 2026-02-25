#include <stdio.h>
#define MAXLEN 1000

// itoa does not hadnle the largest negative number (in a twos complement system)

int main()
{
	char string[MAXLEN];
	void iota(int n, char s[]);
	int i;
	
	for (i = 0; i < MAXLEN; ++i){
		string[i] = '\0';
	}
	iota(12, string);
	for (i = 0; string[i] != '\0'; ++i)
		putchar(string[i]);
}
// iota: convert n to characters in s
void iota (int n, char s[])
{
	int i, sign;
	void reverse(char s[]);
	if ((sign = n) < 0) // record the sign
		n = -n; // make it positive
	i = 0;
	do { // generate digits in reverse order
		s[i++] = n % 10 + '0'; // get the next digit
	} while ((n /= 10) > 0); // delete it
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
