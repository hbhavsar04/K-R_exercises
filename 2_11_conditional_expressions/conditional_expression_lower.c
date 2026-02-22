#include <stdio.h>

// rewrite the function lower which converts upper case letters to lower case with a conditional expression instead of if-else

int main()
{
	char lower(char c);
	char lower_conditional(char c);
	char character = 'A';
	printf("original: %c, new: %c", lower(character), lower_conditional(character));

}

// original lower function
// lower: convert c to lower case; ASCII only
//
char lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

char lower_conditional(char c)
{
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}


