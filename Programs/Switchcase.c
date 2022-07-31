#include <stdio.h>
void main()
{
    int a;
    printf("Enter the number which you want: ");
    scanf("%d",&a);

    switch(a)
    {
    case 10:
        printf("Value is 10.");
        break;
    case 20:
        printf("Value is 20.");
        break;
    case 30:
        printf("Value is 30.");
        break;
    case 40:
        printf("Value is 40.");
    case 50:
        printf("Value is 50.");
        break;
    case 60:
        printf("Value is 60.");
        break;
    case 70:
        printf("Value is 70.");
        break;
    case 80:
        printf("Value is 80.");
        break;
    case 90:
        printf("Value is 90.");
        break;
    case 100:
        printf("Value is 100.");
        break;
    default:
        printf("The entered value is more than 100.");
        break;
    }
    getch();
}
