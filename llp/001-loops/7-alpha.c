#include <stdio.h>

/**
* main - main function
* Description: putchar to print
* Return: 0
*/
int main(void)
{
char c = 'z';
while (c >= 'a')
    {
putchar(c);
c--;
    }
    putchar('\n');
}