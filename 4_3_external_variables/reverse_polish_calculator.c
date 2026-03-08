#include "calc.h"

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
//
int getop(char []);
void push(double);
double pop(void);
int main()
{
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF){
		switch (type){
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
		default:
			printf("error: unkown command %s\n", s);
			break;
		}
	}
	return 0;
}
