/*
 * File: 5-print_numbers.c
 * Author: Noah Adeshina
 */

#include <stdio.h>

/**
 * main - Prints (0 - 9).
 *
 * Return: 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
