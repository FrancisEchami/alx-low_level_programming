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

printf("Size of a char: %ld byte(s)\n", sizeof(a));
printf("Size of a int:	%ld byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
printf("size of a float: %ld byte(s)\n", sizeof(e));
return (0);
}
