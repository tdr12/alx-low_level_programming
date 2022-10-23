#include <stdlib.h>
#include <time.h>
/**
 * maon - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(o));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%d is positive\n", n);
	else if (n==0)
		printf("%d is zero\n", n);
	else 
		printf("\n is negative\n", n);

	return (0);
}
