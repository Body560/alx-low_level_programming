#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main if function
 * @max - this fun will be return random number
 * Return: will be return 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is nagative\n", n);
	}
	return (0);
}
