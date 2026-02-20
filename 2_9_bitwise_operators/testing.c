#include <stdio.h>

int main()
{
	unsigned getbits (unsigned x, int p, int n);
	printf("getbits:%d", getbits(20, 4, 3));
}

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}
unsigned setbits(unsigned x, int p, int n, int y)
{

}
