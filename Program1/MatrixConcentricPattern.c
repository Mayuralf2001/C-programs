#include<stdio.h>
void main()
{
    int num,rows,column,k;
    printf("Enter the number :");
    scanf("%d",&num);

    for(rows = 1;rows < 2*num; rows++)
    {
        k = num;
        if(rows <= num)
        {
            for(column = 1;column<(2*num);column++)
            {
                printf("%d",k);
                if(rows > column)
                {
                    k = k - 1;
                }
                if(rows+column >= (2*num))
                {
                    k=k+1;
                }
            }
        }
        if(rows > num)
        {
            for(column = 1;column<(2*num);column++)
            {
                printf("%d",k);
                if(rows + column < (2*num))
                {
                    k = k - 1;
                }
                if(column >= rows)
                {
                    k = k+1;
                }
            }
        }
        printf("\n");
    }
}
