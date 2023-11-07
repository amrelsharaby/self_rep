#include <stdio.h>

int main(void)
{

/** counter
char *s = "";
int n = 0;

if (*s == '\0')
{
n = 0;
}
else
{
do {
n++;
} while (*(s + n) != '\0');
}
printf("%i\n", n);
*/

/** prints
char *s = "Hi!";
int n = 0;
if (*s == '\0')
{
putchar('\n');
}
else
{
do {
putchar(*(s + n));
n++;
} while (*(s + n) != '\0');
putchar('\n');
}
*/

// 5-res_string

/**
                                                                                                             
#include "main.h"

//                                                                                                                                               
// rev_string - fun that prints string reversed                                                                                                     
// @s: the string                                                                                                                                   
// _putchar: prints char                                                                                                                            


void rev_string(char *s)
{
int n = 0;
int i = 0;
char c;

if (*s != '\0')
{
do {
n++;
} while (*(s + n) != '\0');
n--;
do {
c = s[i];
s[i] = s[n];
s[n--] = c;
i++;
} while (n > i);
}
}
*/

int a[5] = { -198, 298, 402, -1024, 98 };
int i = 0;
int n = 0;
do {
n++;
} while (*(a + n) != '\0');
n--;

do {
printf("%i ,", *(a + i));
i++;
} while (i < n);
printf("%i\n", *(a + n));


}