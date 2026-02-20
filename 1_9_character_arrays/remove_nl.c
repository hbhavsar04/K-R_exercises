#include <stdio.h>

#define MAXLEN 1000

int is_between_letter (char car[], int p, int l);

int main() {
	int i, lim, k, current, check, c;
	char text [MAXLEN];
	lim = MAXLEN;
	for (i=0; i < lim - 1 && (c=getchar()) != EOF; i++){
		text[i] = c;
	}
	for (k=0; k < i; k++){
		current = text[k];
		if (current == ' ' || current == '\t'){
			if ((check = is_between_letter(text, k, i)) != 0){
				putchar(current);
			}
		} else if (current == '\n') {
			if ((text[k - 1]) != '\n'){
				putchar(current);
			}
		} else{
			putchar(current);
		}
	}
}

int is_between_letter(char char_array[], int pos, int len){
	int j, d, count;
	count = 0;
	// keep track of this <
	for(j = pos; j < len && (d = char_array[j]) != EOF && d != '\n'; ++j){
		if (d != ' ' && d != '\t'){
			++count;
		}
	}
	return count;
}
