#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size ofa char: %zu byte\n", sizeof(charType));
printf("Size of an int %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(intType));
printf("Size of a long long int: %zu bytes\n", sizeof(intType)*2);
printf("Size of a float: %zu bytes\n", sizeof(floatType));
return (0);
}
