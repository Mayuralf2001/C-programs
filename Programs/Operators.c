#include <stdio.h>
#include <stdbool.h>
void main()
{

    int a = 60;
    int b = 20;

    //arithmetic operator
    printf("Arithmetic operators\n");
    printf("\nAddition of a & b is %d  ", a+b);

    printf("\nSubtraction of a and b is %d ", a-b);

    printf("\nMultiplication of a and b is %d ", a*b);

    printf("\nDivision of a and b is %d ", a/b);

    //relational operator
    printf("\n\nRelational operators\n");
    printf("\nCheck if a>b: %d ", a>b);

    printf("\nCheck if a<b: %d ", a<b);

    printf("\nCheck if a==b: %d ", a==b);

    printf("\nCheck if a!=b: %d ", a!=b);

    //logical operators
    printf("\n\nLogical operators\n");
    bool x = true;
    bool y = false;

    printf("\nCheck x&&y: %d ",x&&y);

    printf("\nCheck x||y: %d" ,x||y);


    getch();
};
