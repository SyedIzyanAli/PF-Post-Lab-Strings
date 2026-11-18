#include <stdio.h>
#include <string.h>

int main()
{
    char name[100], copy[150];

    printf("Enter your full name: ");
    scanf(" %[^\n]", name);  //-->> [^\n] = It is a technique used to tell scanf function to read charachter utill the user enters a new line means presses enter.

    printf("\nLength of name: %ld", strlen(name));

    strcpy(copy, name);

    strcat(copy, " - FAST University");

    printf("\nOriginal Name: %s", name);
    printf("\nModified Name: %s", copy);

    return 0;
}
