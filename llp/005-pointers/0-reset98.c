#include <stdio.h>

int main(void)
{
    int n = 9;
    int *p = &n;
    *p = 98;
    printf("%i", n);
}