#include <stdio.h>

/**
* main - main function
* Description: putchar to print
* Return: 0
*/
int main(void)
{
    for (int n = 0 ; n < 10 ; n++)
putchar(n + '0');
    for (char c = 'a'; c < 'g'; c++)
    putchar(c);
    putchar('\n');
}