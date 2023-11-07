#include <stdio.h>

int main(void)
{
char *s = "Hi!";
char *t = "Hi!";
printf("%p\n", s);
printf("%p\n", t);

if (s == t)
{
    printf("same\n");
}
else
{
    printf("Different\n");
}
}
