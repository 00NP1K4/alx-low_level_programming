/*
 * File: 6-print_numberz.c
 * Author: Noah Adeshina
 */

#include <stdio.h>

/**
 * main - Prints (0 - 9) using putchar
 *
 * Return: 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
