#include <stdio.h>
#include <stdlib.h>

/**
 *main - program prints min num of coins to make a change for
 *an amount of money
 *@argc: agrument count
 *@argv: argument count
 *Return: 0
 */

int main(int argc, char **argv)
{
	int cents;
	int minnumcoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		minnumcoins += 1;
	}
	printf("%d\n", minnumcoins);
	return (0);
}
