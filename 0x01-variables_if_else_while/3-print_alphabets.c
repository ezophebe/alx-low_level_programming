#include <stdio.h>
/**
 * Main-Prints the alphabets in lowercase and then in uppercase
 *
 * Return Always 0 (success)
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}

for (i = 'A'; i <= 'Z'; i++)
{
	putchar(i);
}
putchar('\n');
	return (0);
}
