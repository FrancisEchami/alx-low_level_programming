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

printf("Size of a char: %lx byte(s)\n", sizeof(a));
printf("Size of an int:	%lx byte(s)\n", sizeof(b));
printf("Size of a long int: %lx byte(s)\n", sizeof(c));
printf("Size of a long long int: %lx byte(s)\n", sizeof(d));
printf("size of a float: %lx byte(s)\n", sizeof(e));
return (0);
}
