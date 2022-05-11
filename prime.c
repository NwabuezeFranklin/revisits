#include <stdio.h>
/**
 * prints prime
 * numbers
 * what are prime numbers?
 */
int main(void)
{
	int i, j;
	for(i = 2; i <= 1000; i++)
	{
		for( j = 2; j <= i; j++)
		{
			if(i % j == 0)
				break;
		}
		if( i == j)
		{
			printf("%d is a prime number\n", i);
		}
	
	}
        return 0;
}


