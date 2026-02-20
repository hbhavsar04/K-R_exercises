/* the standard library expects text io to be dealt with as text streams 
 * A text stream is a sequence of chars dicided into lines
 * each line consistes of zero or more chars followed by a newline char
 *
 * standard library functions for reading or writing one character at a time
 * getchar and putchar
 * getchar reads the next input chrager from a text stream and returns that as its value 
 *
 * file copying 
 *
 * */


#include <stdio.h> 

/* copy input to output; first version */

int main()
{
	/* initialize current and previous*/
	int current, previous;
	/* set current to be the first input character*/ 
	current = getchar();
	/* while current does not equal EOF */
	while (current != EOF){
		previous  = current;	
		/* print out the current character */
		putchar(current);
		/* move the current to the next character */
		current = getchar();
		/* if the current character is the same as the previous
		 * while the current character a space, move on to the next
		 */
		if (previous == current){
			while (current == ' '){
				current = getchar();
			}	

		}
	}
	return 0;
}

