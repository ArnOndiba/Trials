/*
 * Write a function that reverses the content of an array of integers.
 * Prototype: void reverse_array(int *a, int n);
 * Where n is the number of elements of the array
 *
 * 4-main.c
 */

#include "main.h"

void reverse_array(int *a, int n)
{
	int i = 0;
	
	while(a[i] < n)
	{
	i++;
	}
	while(a[i] < n)
	{
		i--;
	}
}
