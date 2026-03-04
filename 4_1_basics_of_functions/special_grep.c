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
	int strindex(char s[], char t[]);
	for (i = 0; i < MAXLEN - 1; ++i){
		l[i] = '\0';
		pattern[i] = '\0';
	}
	pattern[0] = 'i';
	while ((g = get_line(l)) != 0){
		if ((i = strindex(l, pattern)) >= 0){
			printf("%s", l);
			printf("%d\n", i);
		}
	}
}

// strindex: returns the positon or index in the string s where the string t begins
// returns -1 if s does not contain t
int strindex(char s[], char t[])
{
	int i, j, count, success;
	success = 0;
	for (i = 0; t[i] != '\0' && i < (MAXLEN - 1); ++i);
	count = i;
	for (i = 0; s[i] != '\0' && i < (MAXLEN - 1); ++i){
		if (t[0] == s[i]){
			for (j = 0; t[j] == s[j + i] && j < (MAXLEN - 1); ++j);
			if (j == count){
				return i;
				break;
				++success;
			}
		}
	}
	return -1;
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
