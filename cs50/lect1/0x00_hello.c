#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    // double backslash to brint the second one
    printf("Hello, World!\\\n");
    // print the % itself
    printf("Hello, World!%%\n");
    // you can use scanf
    char *p;
    scanf("your name is %s", p);
    char *s = "Amr";
    printf("Hello, %s\n", s);
}