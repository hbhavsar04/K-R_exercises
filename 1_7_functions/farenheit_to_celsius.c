# include <stdio.h>

# define LOWER 0 /* lower limit of a table */ 
# define UPPER 300 /* upper limit */
# define STEP 20 /* step size */ 

float f_to_c(int f);
/* print the farenheit to celcius table */ 
int main ()
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, f_to_c(fahr));
	return 0;
}

float f_to_c(int faren){
	int c;
	c = (5.0/9.0)*(faren-32);
	return c;
}

