/*
 * File: 0-putchar.c
 * Author: Noah Adeshina
 *
 */

#include <stdio.h>

/**
 * main - Program that prints "_putchar" followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	char arr[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(arr[c]);
	}
	_putchar('\n');
	return (0);
}
