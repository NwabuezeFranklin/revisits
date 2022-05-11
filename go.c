#include <stdio.h>
/**
 * just a test
 * to see if it works
 */
int main(void)
{
	int i, g, f;
	printf("we just started, next will be for scanf");

	for(i = 0; i <= 100; i++)
	{
		if(i % 2 == 0)
			continue;
		else if(i % 3 == 0)
			continue;
		else if(i % 5 == 0 && != 5)
			continue;
		else if(i % 7 == 0 && != 7)
			continue;

		else
		{
			printf("%d is a prime number", i);
		}
		putchar('\n');
		
	}
	printf("it was hard lmao, gugugaga");
	return 0;
}
