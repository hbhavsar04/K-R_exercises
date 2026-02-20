# include <stdio.h>

#define IN  1
#define OUT 0
int main(){
	
	int letter_count[127];
	int counter;
	int c, i, j, state;
	
	state = OUT;
	counter = 0;
	for (i = 0; i < 127; i++)
		letter_count[i] = 0;

	while ((c = getchar()) != EOF){
		++letter_count[c];
	}

	for (i = 0; i < 127; ++i){
		if (letter_count[i] > 0){
			printf("%c |", i);
			for(j = 0; j < letter_count[i]; j++){
				printf("=");
			}
			printf("\n");
		}
	}

	return 0; 
}
	
