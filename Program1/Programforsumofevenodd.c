//Program for sum of even and odd number
#include <stdio.h>
void main()
{
    int number,i,even=0,odd=0;
    printf("Enter the number :");
    scanf("%d",&number);
for(i=1;i<=number;i++)
    {
        if(i % 2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd +i;
        }
    }
    printf("Even number sum is : %d\n",odd);
    printf("Odd number sum is : %d",even);

}
