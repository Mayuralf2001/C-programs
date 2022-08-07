//Swap number
#include <stdio.h>
void swap(float *ptr1,float *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void)
{
    float m,n;
    printf("Enter the value if m & n :");
    scanf("%f",&m);
    scanf("%f",&n);

    printf("Before swapping : M = %5.2f\tN = %5.2f\n",m,n);
    swap(&m,&n);
    printf("Before swapping : M = %5.2f\tN = %5.2f\n",m,n);
    printf("%f%f",m,n);

}
