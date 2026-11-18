#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int obtained, total;
    float percentage;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter obtained marks: ");
    scanf("%d", &obtained);

    printf("Enter total marks: ");
    scanf("%d", &total);

    percentage = (obtained * 100.0) / total;

    fp = fopen("Student [Task 5].txt", "w");

    fprintf(fp, "%s\n%d\n%d\n%.2f", name, obtained, total, percentage);

    fclose(fp);

    fp = fopen("student.txt", "r");

    fscanf(fp, " %[^\n]", name);
    fscanf(fp, "%d %d %f", &obtained, &total, &percentage);

    printf("\nStudent Information:\n");
    printf("Name: %s", name);
    printf("\nObtained Marks: %d", obtained);
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%%", percentage);

    fclose(fp);

    return 0;
}
