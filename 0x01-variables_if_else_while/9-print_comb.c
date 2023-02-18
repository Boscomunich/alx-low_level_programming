#include <stdio.h>

/**
 * main - print combinatoin of all single digit number
 * Return: Always 0
 */
int main(void)
{
	 int i = 0;
	 while (i < 9)
	 {
		 putchar(i + '0');
		 i++;
		 putchar(',');
		 putchar(',');
	 }
	 putchar('9');
	 putchar('\n');
	 return (0);
}
