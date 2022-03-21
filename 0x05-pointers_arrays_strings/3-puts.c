#include "main.h"

/**
 * _puts - stdout
 * @s: pointer s
 * Return: void
 */

void _puts(int *s)
{
int i=0;

while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}

_putchar('\n');
}
