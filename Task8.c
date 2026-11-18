#include <stdio.h>

int main()
{
    FILE *fp;
    int id, obtained, total;
    float percentage;

    fp = fopen("result.txt", "w+");

    printf("Enter student ID: ");
    scanf("%d", &id);

    printf("Enter obtained marks: ");
    scanf("%d", &obtained);

    printf("Enter total marks: ");
    scanf("%d", &total);

    percentage = (obtained * 100.0) / total;

    fprintf(fp, "%d %d %d %.2f", id, obtained, total, percentage);

    rewind(fp);

    fscanf(fp, "%d %d %d %f", &id, &obtained, &total, &percentage);

    printf("\nStudent Result:\n");
    printf("Student ID: %d", id);
    printf("\nObtained Marks: %d", obtained);
    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%%", percentage);

    fclose(fp);

    return 0;
}
