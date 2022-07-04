#include <stdio.h>

#include <stdlib.h>

#include <string.h>

/**
 *
 * * main - Entry point
 *
 * *
 *
 * * Return: Always 0 (Success)
 *
 * */

int main(void)

{

	int i, j, k;

	for (i = '0'; i <= '9' ; i++)

	{

		for (j = '0'; j <= '9' ; j++)

		{

			for (k = '0'; k <= '9'; k++)

			{

				if (i != j && j != k && i != k)

				{

					if (k > j && j > i)

					{

						putchar(i);

						putchar(j);

						putchar(k);

						if (i != '7')

							putchar(',');

						putchar(' ');

					}

					/****/

				}

				/*****/

			}

		}

	}

	

	return (0);

}

