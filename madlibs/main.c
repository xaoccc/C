#include <stdio.h>
#include <stdlib.h>
/* Types of data and printf */
int main()
{
    char color[10];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    printf("Enter a color:");
    scanf("%s", color);
    printf("Enter a plural noun:");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity name:");
    scanf("%s%s", celebrityF, celebrityL);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s", celebrityF, celebrityL);

    return EXIT_SUCCESS;
}
