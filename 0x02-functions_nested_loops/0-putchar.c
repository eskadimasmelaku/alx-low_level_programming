#include "main.h"

/**
 * main - prints  string "_putchar" using
 * Description: my own headerfile and putchar () function prototype
 * Return: Always 0
 */

int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
