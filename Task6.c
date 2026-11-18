#include <stdio.h>

int main()
{
    FILE *fp;
    int account;
    float amount;
    int acc;
    float trans;

    printf("Enter account number: ");
    scanf("%d", &account);

    printf("Enter first transaction amount: ");
    scanf("%f", &amount);

    fp = fopen("bank.txt", "w");

    fprintf(fp, "%d %.2f\n", account, amount);

    fclose(fp);

    printf("\nEnter second transaction amount: ");
    scanf("%f", &amount);

    fp = fopen("bank.txt", "a");

    fprintf(fp, "%d %.2f\n", account, amount);

    fclose(fp);

    fp = fopen("bank.txt", "r");

    printf("\nBank Transaction Records:\n");

    while(fscanf(fp, "%d %f", &acc, &trans) == 2)
    {
        printf("\nAccount Number: %d", acc);
        printf("\nTransaction Amount: %.2f\n", trans);
    }

    fclose(fp);

    return 0;
}
