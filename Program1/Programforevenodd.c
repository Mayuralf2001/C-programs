//Even or odd number
#include <stdio.h>
void main()
{
    int number;
    printf("Enter the number to check :");
    scanf("%d",&number);
    if(number % 2 ==0)
    {
        printf("The number is even number.");
    }
    else
    {
        printf("The number is odd number.");
    }

    getch();
}
