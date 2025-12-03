#include <stdio.h>
#include <stdlib.h>
// User input 
int main()
{
    
    int age;
    char name[20];
    printf("What is your age?\n");
    scanf("%d", &age);
    // clear the leftover newline
    getchar();
    printf("Your age is %d.\n", age);
    printf("What is your name?\n");
    // For strings without space we can use this: scanf("%s", name); 
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    return 0;
    

}
