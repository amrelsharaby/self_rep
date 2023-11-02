#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct phonebook
{
    string name;
    string number;
}person;

int main(void)
{
person people[3];

people[0].name = "Carter";
people[0].number = "+1-675-454-1000";

people[1].name = "David";
people[1].number = "+1-577-343-2004";

string name = get_string("name: ");
for (int i = 0; i < 3; i++)
{
    if (strcmp(people[i].name, name) == 0)
    {
        printf("Found %s\n", people[i].number);
        return 0;
    }
}
printf("Not Found\n");
return 1;
}