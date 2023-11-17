#include <stdio.h>
void draw(int n);

int main (void)
{
    int h = 10;
    draw(h);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
