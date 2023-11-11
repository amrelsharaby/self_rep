#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = malloc(4); //I just tried it, he made it 4
    printf("s: ");
    scanf("%s", s);
    printf("s is: %s\n", s);
    free(s);
    /**
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n",x);
    */
}