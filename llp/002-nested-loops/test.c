#include <stdio.h>

int print_last_digit(int n);

int main(void)
{
    int n = 0;
    int result = print_last_digit(n);

printf("%i\n",result);
    /** printf("Is %c a lowercase character? %s\n", c, result ? "Yes" : "No");
*/
    return (0);
}

int print_last_digit(int n)
{
    if (n >= 0)
        return (n % 10);
    return (-n % 10);
}
