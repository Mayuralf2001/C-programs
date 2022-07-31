#include <stdio.h>
#include <string.h>
struct Person{
    int id;
    char name[20];
    int salary;
};

void main()
{
    struct Person p1;

    p1.id = 10;

    strcpy(p1.name,"Mayur");

    p1.salary = 10000;

    printf("ID: %d",p1.id);

    printf("\nName: %s",p1.name);

    printf("\nSalary: %d",p1.salary);
}
