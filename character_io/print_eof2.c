#include <stdio.h>

/* need to write a program to print the value of EOF */ 

int main()
{
	int count;
	int c;

	c = getchar();
	for (count = 0; count <= 200; count = count + 1){
		putchar(c);
		c = getchar();
		printf("%3d", EOF);
	}
		
}
