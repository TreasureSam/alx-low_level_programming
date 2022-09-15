#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, gibson = 0;
	int sum = 0;

	while (gibson < 4000000)
	{
		gibson = a + b;
		a = b;
		b = gibson;
		if (gibson % 2 == 0)
			sum += gibson;
	}
	printf("%i\n", sum);
	return (0);
}
