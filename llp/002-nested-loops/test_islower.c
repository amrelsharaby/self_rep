#include <stdio.h>

int _islower(int c);

int main(void)
{
    int c = 129;
    int result = _islower(c);

printf("%i\n",result);
    /** printf("Is %c a lowercase character? %s\n", c, result ? "Yes" : "No");
*/
    return (0);
}

int _islower(int c)
{
    return (c >= 97 && c < 123);
      /** if ((c >= 97) && (c < 123))
      *return (1);

    return (0);
*/
}

