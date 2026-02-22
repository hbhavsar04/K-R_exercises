#include <stdio.h>

int main () 
{
	unsigned rightrot(unsigned char x, int n);
	unsigned char num;
	num = 177;
	printf("rightrot output: %u\nexpected output: 108", rightrot(num, 2));
}

unsigned rightrot(unsigned char x, int n)
{
	unsigned char x_shifted, last_bit, rotated;
	int i;
	rotated = x;
	for (i = 0; i < n; ++i){
		x_shifted = rotated >> 1;
		last_bit = rotated << 7;
		rotated = x_shifted | last_bit;
	}
	return rotated;
}
