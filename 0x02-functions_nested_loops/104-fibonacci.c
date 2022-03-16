#include <stdio.h>

/**
 * main - prints the first 98 Fibonnaci numbers,starting with 1 and 2,
 *
 * Description: Write a program that finds and prints the first fibonacci numbers, starting with 1 and 2
 * followed by a new line.
 * Prints from 1 to 98.
 * the numbers should be separated by a comma, followed by a space ,
 * You are allowed to use the standard library
 * You are not allowed to use any other library(You cannot use GMP etc...)
 * You are not allowed to use long long, malloc.
 * you are not allowed to use pointers.
 * you are not allowed to use arrays/tables
 * you are not allowed to use structures.
 * You are not allowed to hard code any Fibonnacci number (except for 1 and 2)
 * Return: Always(0) Success.
 */

int main(void)
{
	int num1, num2, i, n;
	int next_num;

	n = 98;

	for (i = 1; i <= n; i++)
	{
		if (i == 98)
		{
			printf("%d, ", num2);
		}
		else
		{
			printf("%d, ", num2);
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
		}
	}
	printf("\n");

	return (0);
}
