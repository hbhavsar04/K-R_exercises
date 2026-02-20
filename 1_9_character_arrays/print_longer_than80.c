#include <stdio.h>
#define MAXLINE 1000 //max input line length
#define input_cutoff 80

int get_line(char line[], int maxline);
int copy(char to[], char from[], int index);

// print the longest input line
int main(){
	int len; // current line length
	int max; // maximum length seen so far
	char line[MAXLINE]; // current input line
	char longest[MAXLINE]; // longest line saved here
	int index;
	index =0;
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > input_cutoff){
			max = len;
			index += copy(longest, line, index);
		}
	if (max > 0) // there was a line 
		printf("%s, %d", longest, max);
	return 0;
}

//get_line: read a line into s, return length

int get_line(char s[], int lim)
{
	int c, i; 

	for (i = 0; (c = getchar()) !=EOF && c!='\n'; ++i){
		if (i < lim-1){
			s[i] = c;
		}}
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy: copy "from" into "to"; assume it is big enough
//
// The problem is that we're resetting the longest line every time
int copy(char to[], char from[], int index){
	while ((to[index] = from[index]) != '\0')
		++index;
	return index;
}


