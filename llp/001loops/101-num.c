#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{

    int n, m, l;
    for (n = 48; n <= 55; n++)
    {
        for (m = 49; m <= 56; m++)
        {
            for (l = 50; l <= 57; l++)
            {
               if ((m > n) && (l > m))
               {
                    putchar(n);
                    putchar(m);
                    putchar(l);
                    if (n != 55 || m != 56 || l != 57)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
        putchar('\n');
        return (0);
}
