#include <stdio.h>

int main()
{
	unsigned getbits(unsigned x, int p, int n);
	unsigned setbits(unsigned x, int p, int n, unsigned y);
	unsigned char num;
	unsigned char why;
	num = 85;
	printf("getbits result %u\nexpected result:5", getbits(num, 4, 3));
	num = 170;
	why = 0;
	printf("\nsetbits result %u\nexpected result: 5", setbits(num, 3, 3, why));

}
// getbits: get n bits from position p
// returns the right adjusted n bit field of x that begins at positon p
// we assume that bit position 0 is at the right end and that n and p are sensible positive values
// getbits(x, 4, 3) returns the three bits in positions 4, 3, 2, right adjusted
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n) & ~(~0 << n));
}

// returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return (((x >> p) & ~(~0 << n)) | (y & ~(~0 << n))); 
}
