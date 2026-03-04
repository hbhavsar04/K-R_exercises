#include <stdio.h>
#define MAXLINE 1000

int getline_b(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ear";

int main()
{
	char line[MAXLINE];
	int found = 0;
	int k = 0;

	while (getline_b(line, MAXLINE) > 0)
		if ((k = strindex(line, pattern)) >= 0){
			printf("%s", line);
			printf("%d\n", k);
			found++;
		}
	return found;
}
int getline_b (char s[], int lim)
{
	int c, i;
	i = 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}
int strindex (char s[], char t[])
{
	int i, j, k, last_i;
	last_i = -1;
	for (i = 0; s[i] != '\0'; i++){
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			last_i = i;
	}
	if (last_i >= 0)
		return last_i;
	 else
		return -1;
}
