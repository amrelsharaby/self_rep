#include <stdio.h>

int main()
{
    char *s ="Hi!";
    char *l = s;
   // pritnf("%p\n", s); works with cs50 and prints the adress
   // of the 1st char which is the adress of s
    printf("%s\n", s);
    printf("%p\n", &s);
    printf("%p\n", &s[0]);
    printf("%c\n", *s);
    printf("%c\n", s[0]);
    printf("%i\n", *s);
    
    printf("\n");
    // give me a data type called person that's actully
    // this whole structure
    typedef struct
    {
        char *name;
        char *num;
    }person;

    // give me a data type called integer that is actully 
    // an int
    typedef int integer; 
    
    //give me a data type called BYTE that is 8 bits
    typedef u_int8_t BYTE;
    printf("%lu\n", sizeof(u_int8_t));
    printf("%lu\n", sizeof(BYTE));
    printf("%lu\n", sizeof(person));

    typedef char *string;

    string w = "Hay!";

    printf("%s\n", w);


}