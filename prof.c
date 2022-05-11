#include <stdio.h>
/**
 * prints alphabets
 * on 20 different lines
 */
int main (void)
{
	int i;
	char e;

	for(i = 0; i <= 20; i++)
	{
		for(e = 'a'; e <= 'z'; e++)
		{
			printf("%c", e);
		}
		putchar('\n');
	}
	return 0;
}
