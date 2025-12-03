#include <stdio.h>
#include <stdlib.h>
/* Types of data and printf */
int main()
{
    char name[] = "Tom";
    int age = 35;
    printf("There was a man named %s.\n", name);
    printf("%s was %d years old.\n", name, age);
    age = 30;
    printf("He liked the name %s.\n", name);
    printf("But his age was actually %d.\n", age);
    printf("%d %f", 3456 + 15, 99.54 - 3.14);
    return EXIT_SUCCESS;
}
