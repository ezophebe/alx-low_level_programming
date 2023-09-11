#include <stdio.h>

/**
 * Main-Prints the alphabet in reverse order
 *
 * Return Always 0 (success)
 */

int main(void)
	char i;

	for(i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');
	return (0);
}
