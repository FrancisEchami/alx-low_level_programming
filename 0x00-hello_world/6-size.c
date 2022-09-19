#include <stdio.h>

/**
*
* main - prints the string in the printf function 
*
* Description: using the printf function
* this program prints the size of various
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

printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of a long: %ld byte(s)\n", sizeof(li));
printf("Size of a long long: %ld byte(s)\n", sizeof(lli));
printf("size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
