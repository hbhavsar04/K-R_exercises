#include <stdio.h>

int main()
{
	int x, y, output, remainder;
	x = 18;
	y = 8;
	output = x/y;
	remainder = x - (output * y);
	printf("output = %d", output);
	printf("remainder = %d", remainder);
	printf("sucess is output = 2 and remaidner = 2");
}

