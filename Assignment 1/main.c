#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    int length;

    printf("Enter your name:");
    fgets(name, sizeof(name),stdin);

    name[strcspn(name,"\n")] = '\0';

    length = strlen(name);
    printf("Length of the string: %d\n", length);

    return 0;
}




