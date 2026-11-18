#include <stdio.h>

int main()
{
    FILE *fp;
    int obtained, total;

    fp = fopen("marks.txt", "r+");

    if(fp == NULL)
    {
        printf("File not found.");
        return 0;
    }

    fscanf(fp, "%d %d", &obtained, &total);

    printf("Existing Marks:\n");
    printf("Obtained Marks: %d", obtained);
    printf("\nTotal Marks: %d", total);

    printf("\n\nEnter updated obtained marks: ");
    scanf("%d", &obtained);

    printf("Enter updated total marks: ");
    scanf("%d", &total);

    rewind(fp);

    fprintf(fp, "%-10d %-10d\n", obtained, total);

    fclose(fp);

    fp = fopen("marks.txt", "r");

    fscanf(fp, "%d %d", &obtained, &total);

    printf("\nUpdated Marks:\n");
    printf("Obtained Marks: %d", obtained);
    printf("\nTotal Marks: %d", total);

    fclose(fp);

    return 0;
}
