#include <stdio.h> 

int main()
{
	/* initialize current and previous*/
	int c;
	/* set current to be the first input character*/ 
	c = getchar();
	/* while current does not equal EOF */
	while (c != EOF){
		if (c == '\t'){
			printf("\\t");
			c = getchar();
		}
		if (c == '\b'){
			printf("\\b");
			c = getchar();
		}
		if (c == '\\'){
			printf("\\");
			c = getchar();
		}
		putchar(c);
		c = getchar();
	}
	return 0;
}

