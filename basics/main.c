#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "Peter";
    int age = 60;
    printf("There was a man named %s.\n", name);
    printf("%s was %d years old.\n", name, age);
    printf("He liked the name %s.\n", name);
    printf("But he did not like the age %d.\n", age);
    return 0;
}
