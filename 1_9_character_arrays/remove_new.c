#include <stdio.h>

#define MAXLEN 1000

int main() {
	int i, lim, k, c, j, is_trailing;
	char text[MAXLEN];
	lim = MAXLEN;
	for (i=0; i < lim -1 && (c = getchar()) != EOF; i++){
		text[i] = c;
	}

	for (k = 0; k < i; k++) {
		is_trailing = 0;
		if (text[k] == ' ' || text[k] == '\t'){
			for (j = k + 1; j < i; j++){
				if (text[j] == '\n'){
					is_trailing = 1;
					break;
				}
				if (text[j] != ' ' && text[j] != '\t') {
					break;
				}	
			}
		}
		if (is_trailing == 0){
			putchar(text[k]);
		}
	}
	printf("%d", is_trailing);
}

