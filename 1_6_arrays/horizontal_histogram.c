# include <stdio.h>

#define IN  1
#define OUT 0
int main(){
	
	int letter_count[10];
	int counter;
	int c, i, j, state;
	
	state = OUT;
	counter = 0;
	for (i = 0; i < 10; i++)
		letter_count[i] = 0;

	while ((c = getchar()) != EOF){
		if (c =='\n' || c == ' ' || c == '\t'){
			state == OUT;
			++letter_count[counter];
			counter = 0;
		}
		else if (state == OUT){
			state = IN;
			++counter;
		} 
		else{
			++counter;
		}
	}
	for (i = 0; i < 10; ++i){
		printf("%d |", i);
		for(j = 0; j < letter_count[i]; j++){
			printf("=");
		}
		printf("\n");
	}

	return 0; 
}
	
