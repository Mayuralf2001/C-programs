//number is positive or negative
#include <stdio.h>
void main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number >= 0)
    {
        printf("The is positive number.");
    }
    else
    {
        printf("The number is negative number.");
    }
}
