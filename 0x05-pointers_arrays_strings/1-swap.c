#include "main.h"

/**
 * swap - swaps the values of two integers
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */

void swap_int(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
