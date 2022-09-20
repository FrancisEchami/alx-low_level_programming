#include <stdio.h>

/**
*
* main - prints the size of variable types 
*
* Description: using the printf function
* this program prints the size of variable
* types on the computer it is compiled and run on
* Return: 0
*/
int main(void)
{
int i;
char c;
long li;
long long lli;
float f;

printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of a long: %d byte(s)\n", sizeof(li));
printf("Size of a long long: %d byte(s)\n", sizeof(lli));
printf("size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
