#include <stdio.h>
int add(int x,int y)
{
    return x+y;
}
int substract(int x,int y)
{
    return x-y;
}
int main()
{

    printf("%d", add(3,5));
    printf("\n");
    printf("%d", substract(50,25));

    return 0;
}
