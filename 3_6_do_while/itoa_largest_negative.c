#include <stdio.h>
#define MAXLEN 1000

// itoa does not hadnle the largest negative number (in a twos complement system)
// that would be something like 
// 10000000
// in an 8 bit number
// explain why not and modify it to print that value correctly, regardless of the machine on which it runs
//
// First let's see what happens when I try the largest negative number for an int (-2147483648)
//
// for -2147483647
// it printed -2147483647
//
// for -2147483648
// it printed -(
//
//hmm I think it has to do with the modulo operator?
// no actually I think it's the check where we make it positive since 2147483648 would overflow

int main()
{
	char string[MAXLEN];
	void iota(int n, char s[]);
	int i;
	
	for (i = 0; i < MAXLEN; ++i){
		string[i] = '\0';
	}
	iota(-2147483648, string);
	for (i = 0; string[i] != '\0'; ++i)
		putchar(string[i]);
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
