#include "main.h"

/**
 * swap - swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
