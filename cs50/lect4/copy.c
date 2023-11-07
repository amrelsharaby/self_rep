#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0, i = 0;
    char *s = "Hig!";

    char *t = malloc(*(s+1));
    if (t == NULL)
    {
        return 1;
    }
while (*(s+n) != '\0')
{
n++;
}
while (i <= n) {
    t[i] = s [i];
    i++;
}
    printf("%i\n", n);
    printf("%s\n", t);
    printf("%p\n", s);
    printf("%p\n", t);

    free(t);
    return 0;
}