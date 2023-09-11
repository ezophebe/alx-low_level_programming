#include <stdio.h>
/**
* Main-prints all single digit numof base ten from 0
*
* Return  Always 0 (success)
*/

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
	putchar(i + '0');
}
putchar('\n');
	return (0);
}
