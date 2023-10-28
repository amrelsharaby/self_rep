#include <stdio.h>

int main(void)
{
    int m = 0;
    for (int n = 0; n < 1024; n++)
    {
        if ((n % 3 == 0) || (n % 5 == 0))
        m = m + n;

    }
    printf("%i\n", m);
}
