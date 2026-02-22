#include <stdio.h>

int main(){
	/*
	char x;
	char y;
	y = 3;
	x = 2;
	x *=  y + 1; // should be equivalent to x = x * (y+1)
	*/
	int bitcount (unsigned x);
	int faster_bitcount (unsigned x);
	unsigned x = 42;
	printf("bitcount output:%d\n faster_bitcount output: %d", bitcount(x), faster_bitcount(x));
}
// bit count: count 1 bits in x
 int bitcount (unsigned x)
{
	int b;
	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
}
int faster_bitcount (unsigned x)
{
	int b;
	for (b = 0; x != 0; ++b)
		x &= (x-1);
	return b;
}

/*
 * In a two's complement number system, x &= (x-1) deletes the rightmost 1 bit in x
 * Explain why
 * 
 * use this observation to write a faster version of bit count
 * ==========================================================================
 * what is that expression doing?
 * not considering two's complement first:
 * 00101010 : xstarting 42
 * 00101001 : x - 1
 * 00101000 : AND = 40
 * 
 * ooh so this will always delete the rightmost 1 bit in x since sutracting one will slip that bit and the and will set it to zero!
 * so that means we can skip checking if x & 01 and just move do x &= (x-1)
 * we also don't need to shift x
 * so we save time in two places!!
 * The question is a bit confusing since I dont think this is specific to two's complemenA??
 */



