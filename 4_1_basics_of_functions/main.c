#include <stdio.h>
#define MAXLINE 1000

int getline_b(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (getline_b(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0){
			printf("%s", line);
			found++;
		}
	return found;
}
