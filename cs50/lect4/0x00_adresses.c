#include <stdio.h>

int main(void) //void ie; no comand line arguments 
{
int n = 50;
printf("%i\n", n);
//%p instead of i to show the adress of int
// and to tell which adress to show; I wont use n;
// cause its litterly number 50, but I want to print out
// the adress of n; like where is it in memory 
printf("%p\n", &n); 


// *p as a pointer should always store adress
int *p = &n;
printf("%p\n\n", p);

printf("%p\n", &p);
// if I want to print out an integer stored at some location
// (inside some variable)
// I want to print the integer stored in this location.
// *p: do not print that address but go to that adress 
// and show me what's inside of the computer memory there 
printf("%i\n", *p);



}