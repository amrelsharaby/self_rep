#include <stdio.h>

char *_strcat(char *dest, char *src);

int main(void)
{
  
    char dest[100] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    // Move the pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy the characters from src to dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add a terminating null byte to the end of the concatenated string
    *dest = '\0';

    return ptr;
}
