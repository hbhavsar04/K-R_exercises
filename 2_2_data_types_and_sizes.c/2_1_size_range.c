#include <stdio.h>
#include <limits.h>
#include <float.h>

// determine the ranges of char, short, int, long

int main()
{
	printf("values from header \nmax: \nchar:%d short: %d int %d, long %ld", CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX);
	printf("\nmin: \nchar:%d short: %d int %d, long %ld\n", CHAR_MIN, SHRT_MIN, INT_MIN, LONG_MIN);

	printf("\n max float: %f, min float %f", FLT_MAX, FLT_MIN);
	
	printf("\nComputed\n");
	
	int i;
	
	unsigned char u;

	u = 0;
	printf("min unisgned char: %d\n", u);
	u = ~u;
	printf("max unisgned char: %d\n", u);

	char c;
	c = 0;
	u = ~c;
	u = u >> 1;
	printf("max char: %d\n", u);
	c = 1;
	for (i = 0; c != 0; ++i)
	{
		c = 1;
		c = c << i;
	}
	c = 1;
	c = c << (i-2);
	printf("min char: %d\n", c);

	unsigned short int us;
	us = 0;
	printf("min unsigned short int: %d\n", us);
	us = ~us;
	printf("max unsigned short int: %d\n", us);

	signed short int ss;
	us = us >> 1;
	printf("max singed short int: %d\n", us);
	ss = 1;
	for (i = 0; ss != 0; ++i)
	{
		ss = 1;
		ss = ss << i;
	}
	ss = 1;
	ss = ss << (i -2);
	printf("min singed short int: %d\n", ss);
}
