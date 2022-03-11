#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered thesame combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascendimg order.
 *  You can only use 'putchar' to print to console
 * You can only use 'putchar' up to 6 times.
 * You are not allowed to use any variables of type 'char'. 
 * Return: 0
 */
int main(void)
{
int i, j, k, l;

for (i = 0; i < 1000; i++)
{
j = i / 100; /* hundreds*/
k = (i / 10) %  10; /* tens*/
l = i % 10; /* singles */

if (j < k && k < 1)
{
putchar(j + '0');
putchar(k + '0');
putchar(l + '0');

if (i < 700)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');

return (0);
}