#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10];
    char s2[10];

    printf("Enter the 1st string: ");
    gets(s1);
    printf("\nEnter the 2nd string: ");
    gets(s2);

    printf("\nLength of string is %ld ",strlen(s1));

    printf("\nConcatenate s1 and s2 : %s", strcat(s1,s2));

    printf("\nConvert s2 to uppercase: %s ", strupr(s2));


}
