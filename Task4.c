
#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][100], copy[100];
    char ch;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);

        scanf(" %[^\n]", names[i]);
    }

    printf("\nAll Student Names:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nName: %s", names[i]);

        printf("\nLength: %d", strlen(names[i]));
    }

    strcpy(copy, names[0]);

    printf("\n\nCopied First Student Name: %s", copy);

    printf("\n\nEnter character to search: ");
    scanf(" %c", &ch);

    printf("\nSearch Results:\n");

    for(i = 0; i < 5; i++)
    {
        if(strchr(names[i], ch) != NULL)
        {
            printf("\nCharacter found in %s", names[i]);
        }
        else
        {
            printf("\nCharacter not found in %s", names[i]);
        }
    }

    return 0;
}
