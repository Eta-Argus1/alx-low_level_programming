#include <stdio.h>
#include <time.h>

/**
 * main - Checking a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	int last;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	last = x % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", x, last);
	}
	elif(last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", x, last);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", x, last);
	}
	return (0);
}
