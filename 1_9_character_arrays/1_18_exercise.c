#include <stdio.h>

#define IN 1
#define OUT 0

#define YES 1
#define NO 0

#define MAXLEN 10000

int main ()
{
	// initialize ints
	int c, i, j, was_newline, lim, state, k, difference;
	// initialize an empty array of max length 
	char text[MAXLEN];
	// set lim to be the max length
	lim = MAXLEN;
	// fill text[]  wiht the text
	for (i=0; i < lim - 1 && (c=getchar()) != EOF; ++i){
		text[i] = c;
	}
	// set the starting points for the vars
	was_newline = NO;
	state = IN;
	j = 0;
	// while j is less than the length of the text
	while (j < i){
		// check if the char is a space or tab
		if (text[j] == ' ' || text[j] == '\t'){
			k = j;
			// check if there is a normal character between k and the newline
			//
			// while k is not a newline and is a space or a tab, count up
			while (k < i && text[k] != '\n' && (text[k] == ' ' || text[k] == '\t')){
				k++;
			}
			// if k was a newline (eg only tabs or spaces between)
			if (k < i && text[k] == '\n'){
				// find the difference between k and the newline and add it to j
				difference = k -j;
				j = j + difference;
				// only print newline if previous line wasn't blank
				if (was_newline == NO){
					printf("%c", text[j]);
				}
				was_newline = YES;
			} else {
				// not trailing whitespace, print it normally
				printf("%c", text[j]);
				was_newline = NO;
			}
			++j;
		} else if (text[j] == '\n') {
			if (was_newline == NO){
				printf("%c", text[j]);
			}
			was_newline = YES;
			state = IN;
			++j;
		} else {
			printf("%c", text[j]);
			was_newline = NO;
			state = IN;
			j++;
		}
	}
	return 0;
}



