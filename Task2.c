#include <stdio.h>
#include <string.h>

int main()
{
    char product1[100], product2[100];

    printf("Enter first product name: ");
    scanf(" %[^\n]", product1);

    printf("Enter second product name: ");
    scanf(" %[^\n]", product2);

    if(strcmp(product1, product2) == 0)
    {
        printf("\nBoth product names are identical.");
    }
    else
    {
        printf("\nProduct names are different.");
    }

    printf("\nLength of first product: %ld", strlen(product1));
    printf("\nLength of second product: %ld", strlen(product2));

    return 0;
}
