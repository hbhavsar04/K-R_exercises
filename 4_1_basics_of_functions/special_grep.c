#include<stdio.h>
#define MAXLEN 1000
// Overall structure"
// while(there's another line)
// 	if (the line contains the pattern)
// 		print it
// we're going to use functions to break this up into parts
// luckily we already wrote getline and print it is just printf
//
int main()
{
	int g,i;
	char l[MAXLEN];
	int get_line (char line[]);
	char pattern[MAXLEN];
	for (i = 0; i < MAXLEN - 1; ++i){
		l[i] = '\0';
		pattern[i] = '\0';
	}
	while ((g = get_line(l)) != 0){
		if (
		printf("%s", l);
	}
}

int get_line (char line[])
{
	int c, i;
	for (i = 0; i < MAXLEN - 1
		&& (c=getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}
