#include <stdio.h>
/**
*print_to_98 - a function that prints all natural numbers from n to 98
*user input's number prints to 98, regardless < 98 or > 98
*@n: number input
*Return: Always 0 (Success)
*/
void print_to_98(int n);
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
{
	if (n < 98)
	{
		for (n = 0; n <= 97; n++)
			printf("%d", n);
	}
	else
		for (n = 0; n > 98; n--)
			printf("%d", n);
	printf("98\n");
	return (0);
}
