#include <stdio.h>

int main()
{
	unsigned invert(unsigned x, int p, int n);
	unsigned num = 170;
	printf("invert results %u\n expected result: 154", invert(num, 4, 2));
}

// returns x with the n bits that begin at position p inverted
unsigned invert (unsigned x, int p, int n)
{
	return (((((~x) >> (p+1-n)) & ~(~0 << n)) << p) | (x & ~((~(~0 << n)) << p)));
}
