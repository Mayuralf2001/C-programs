#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the value of Num1 and Num2 :");
    scanf("%d %d",&num1,&num2);
    if(num1 == num2)
    {
        printf("Num1 is equal to Num2.");
    }
    else
    {
        printf("Num1 and Num2 is not equal.");
    }
}
