#include<stdio.h>

int main()
{
	char c;
	unsigned char u;
	c = 0;
	c = ~c;
	printf("flipped char 0: %d\n", c);
	c = 1;
	c = c << 1;
	printf("1 shifted 1 char: %d\n", c);
	c = 1;
	c = c << 7;
	printf("1 shifted 7 char: %d\n", c);
	c = 0;
	u = ~c;
	u = u >> 1;
	printf("maximum: %d\n", u);
	c = 1;
	c = c << 8;
	printf("1 shifted 8 char: %d\n", c);


}
