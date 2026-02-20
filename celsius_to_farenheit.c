# include <stdio.h>

int main()
{
	float fahr, celsius;
	float lower, upper, step; 

	lower = -17.8;

	upper = 300;
	step = 20; 

	celsius = lower;
	printf("%7s %11s\n", "celsius", "fahr");
	while (celsius <= upper){
		fahr = (9.0/5.0) * (celsius+32.0);
		printf("%7.0f %11.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
		
