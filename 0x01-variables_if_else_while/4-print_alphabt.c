#include <stdio.h>
/**
 * main - prints alphabets in lowercase without q & e
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
