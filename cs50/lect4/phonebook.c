#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    FILE *file = fopen ("phonebook.csv", "a");
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}