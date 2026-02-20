#include <stdio.h>

/* This is a block comment */
int main() {
    int x = 5; /* inline block comment */ int y = 10;

    // this is a line comment
    char slash = '/';
    char star = '*';
    char quote = '"';

    /* comment with "a string inside" it */
    char *s = "this is /* not a comment */";
    char *t = "this is // also not a comment";
    char *u = "string with 'single quotes' inside";

    /* comment
       that spans
       multiple lines */

    char a = '\'';  /* escaped single quote */
    char b = '\\';  /* escaped backslash - don't let this fool you */
    char c = '\n';

    char *tricky = "she said \"hello\" and left"; /* comment after */

    // last line comment
    return 0; /* final comment */
}
