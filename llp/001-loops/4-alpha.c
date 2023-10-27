#include <stdio.h>

/**
* main - main function
* Description: putchar to print
* Return: 0
*/
int main(void)
{
for (char c = 'a' ; c <= 'z' ; c++)
if (c != 'e' && c != 'q')
putchar(c);
putchar('\n');
}
