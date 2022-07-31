#include <stdio.h>
void main()
{
    int a;
    int b;

    printf("Enter 1st number: ");
    scanf("%d",&a);

    printf("\nEnter 2nd number: ");
    scanf("%d",&b);

    if(a>b)
        printf("a is greater than b.");
    else if(a==b)
        printf("a and b is equal.");
    else
        printf("b is greater than a.");

    getch();

}
