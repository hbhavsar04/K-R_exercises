#include <stdio.h>
#include <ctype.h>
// write a function expand(s1, s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc..xyz in s2
// allow for letters of either case and digits
// be prepared to handle cases like a-b-c and a-z0-9 andn-a-z
// arrange that a leading or trailing - is taken literally
#define MAXLEN 1000
int main()
{
	void expanded(char s1[], char s2[]);
	char string[MAXLEN];
	char expanded_string[MAXLEN];
	int i, c;

	for (i = 0; (c = getchar()) != EOF; ++i)
		string[i] = c;
	string[i] = '\0';
	for (i = 0; i < MAXLEN; ++i)
		expanded_string[i] = 1;
	expanded(string, expanded_string);
	for (i = 0; expanded_string[i] != '\0'; ++i)
		putchar(expanded_string[i]);
	return 0;
}
void expanded(char s1[], char s2[])
{
	int i, b, f, c, j;
	int is_expandable(char back, char forward);
	b = 0;
	f = 0;
	c = 0;
	for (i = 0, j = 0; s1[i] != '\0'; ++i, ++j){
		if (s1[i] == '-' /*&& is_expandable(s1[i-1], s1[i+1])*/){
			if (isspace(b)) {
				b = 0;
			} else{
				b = s1[i-1];
			}

			if (isspace(f)){
				f = 127;
			} else {
				f = s1[i+1];
			}
			for (c = b+1; c < f; ++c){	
				s2[j] = c;
				++j;
			}
		} else{
			s2[j] = s1[i];
		}
	}
	s2[j] = '\0';
}
// checks if the two characters are expandable 
// (expanding between digits and letters makes no sense)
int is_expandable(char b, char f)
{
	// can't do two spaces
	// or a digit and an alphabetic char
	// or a lower and an upper alphabetic char
	if ((isdigit(b) && isalpha(f)) || 
		(isdigit(f) && isalpha(b)) || 
		(isupper(f) && islower(b)) ||
		(isupper(b) && islower(f)) ||
		(isspace(b) && isspace(f))){
		return 0;
	} else {
		return 1;
	}
}

