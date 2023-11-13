#include <stdio.h>

int main(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }

    do{
       printf("hi\n");
        i++; 
    }
    while (i < 3);

    for (int i = 0; i < 3; i+=1)
    {
      printf("why\n");  
    }

    /** while (true)
    {
        /infinite/
    }
    */
} 