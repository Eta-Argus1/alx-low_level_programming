#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 17)
		{
			continue;
		}
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
