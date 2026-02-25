// write a function escape(s,t) that converts characters like newline and tabs into visible
// escape sequences like \n and \t as it copies the string t to s. Use a switch.
// write a function for ther other direction as well, converting escape seqences into the real characters

#include <stdio.h>
#define MAXLEN 1000

int main()
{
	void escape(char s[], char t[]);
	void reverse_escape(char s[], char t[]);
	char string[MAXLEN];
	char tabbed_string[MAXLEN];
	char added_string[MAXLEN];
	int i, c, j;
	
	for (i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF; ++i)
		string[i] = c;
	string[i] = '\0';
	
	escape(string, tabbed_string);
	for (j = 0; j < MAXLEN - 1 && (tabbed_string[j] != '\0'); ++j)
		putchar(tabbed_string[j]);
	putchar('\n');

	for (i = 0; i < MAXLEN-1; ++i)
		added_string[i] = 0;

	reverse_escape(tabbed_string, added_string);
	for (j = 0; j < MAXLEN - 1 && (added_string[j] != '\0'); ++j)
		putchar(added_string[j]);

}
void reverse_escape (char s[], char t[])
{
	int i, j;
	j = i = 0;
	while (s[i] != '\0'){
		switch (s[i]) {
			case '\\':
				switch (s[i+1]){
					case 't':
						t[j] = '\t';
						j++;
						i += 2;
						break;
					case 'n':
						t[j] = '\n';
						j++;
						i += 2;
						break;
				}
				break;
			default:
				t[j] = s[i];
				j++;
				i++;
				break;
		}
	}
	t[i] = '\0';
}
void escape(char s[], char t[])
{
	int i = 0;
	char c = 0;
	while ((c =  s[i]) != '\0'){
		switch (c){
			case '\n':
				t[i] = '\\';
				i++;
				t[i] = 'n';
				i++;
				break;
			case '\t':
				t[i] = '\\';
				i++;
				t[i] = 't';
				i++;
				break;
			default:
				t[i] = c;
				i++;
				break;	
		}
	}
	t[i] = '\0';
}
