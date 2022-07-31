#include <stdio.h>
void main()
{
    int a = 10;
    int *p = &a;

    printf("%d",a);
    printf("\n%d",&a);
    printf("\n%x",p);
}
