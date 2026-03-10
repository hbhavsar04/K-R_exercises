#include "calc.h"
#define MAXVAL 100
int sp = 0; // stack position - this variable can be shared between the two functions but not declared in main
double val[MAXVAL];
// push:push f onto value stack
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}
// pop: pop and return top value from stack
double pop(void)
{
	if (sp > 0) 
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}
void peek(int entries)
{
	int i;
	for (i = entries; i > 0; --i)
		printf("%f\n", val[sp - i]);
}
void dupe(void)
{
	val[sp] = val[sp - 1];
	++sp;
}
void swap(void)
{
	double top;
	top = val[sp - 1];
	val[sp - 1] = val[sp - 2];
	val[sp - 2] = top;
}
