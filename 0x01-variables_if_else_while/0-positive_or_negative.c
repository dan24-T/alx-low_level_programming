#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int n=rand();
	if (0<n)
	{
		printf("%d: is positive\n",n);
	}
	else if (0==n)
	{
		printf("%d: is zero\n",n);
	}
	else
	{
		printf("%d: is negative\n",n);
	}
	return (0);
}
