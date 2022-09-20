#include <stdio.h>

/**
* main - Prints the size of various of var types
*
* Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %d byte(s)\n", (a));
printf("Size of a int:	%d byte(s)\n", (b));
printf("Size of a long int: %d byte(s)\n", (c));
printf("Size of a long long int: %d byte(s)\n", (d));
printf("size of a float: %d byte(s)\n", (e));
return (0);
}
