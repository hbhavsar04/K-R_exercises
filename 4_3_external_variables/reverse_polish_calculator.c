#include<stdio.h>
// reverse Polish notation calculator
// the overal structure will look something like:
// 	while(next operator or operand is not at EOF)
// 		if (number)
// 			push it
// 		else if (operator)
// 			pop operands (2)
// 			do operation
// 			push result
// 		else if (newline
// 			pop and print the top of the stack
// 		else error
// We should put each operation in a separate function
// How do we push and pop from a stack? What looks like a stack? I guess an array kind of, but you can access
// in any order, so not really.
// 	ok looking at the book it seems like they just use an array and then push or pop off of that.
// I'll try and do it myself first and then look at the book answer
#define MAXARGS 100
#define MAXCHARS 1000
int main()
{
	int stack[MAXARGS];
	int input[MAXCHARS];
	int i, c;
	for (i = 0; i < MAXCHARS - 1; ++i)
		input[i] = '\0';
	for (i = 0; ((c = getchar()) != EOF) && i < MAXCHARS; ++i)
		input[i] = c;
	for (i = 0; input[i]!= '\0'; ++i){
		switch (input[i]) 
		
	}
}
