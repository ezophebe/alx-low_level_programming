#include <stdio.h>
/**
* Main-prints all the numbers of base 16 in lowercase
*
* Return Always 0 (success)
*/

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
{
	putchar(i + '0');
}

	for (j = 'a'; j <= 'f'; j++)
{
	putchar(j);
}
	putchar('\n');
	return (0);
}
