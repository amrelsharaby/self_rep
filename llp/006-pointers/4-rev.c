#include <stdio.h>

int main(void)
{
  int i[5] = {1 ,2 ,3 ,4};
  int n = 0;
while (i[n] != '\0')
  n++;
printf("%d\n", i);
printf("%i\n", n);
n--;
while (n > 0)
{
printf("%i, ", i[n]);
n--;
}
printf("%i\n", i[0]);
}