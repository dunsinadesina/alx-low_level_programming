#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This is the main function
 *
 * Return: This is always 0
 */
int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdig = n % 10;
	if (lastdig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
	else if (lastdig == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdig);
	else if (lastdig < 6 && lastdig != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
	return (0);
}
