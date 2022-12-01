#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Employee
    {
        int id;
        char name[20];
        int salary;
    };
    
    struct Employee e1,e2,e3;

    scanf("%d %s %d",&e1.id, &e1.name, &e1.salary);
    scanf("%d %s %d",&e2.id, &e2.name, &e2.salary);
    scanf("%d %s %d",&e3.id, &e3.name, &e3.salary);

    printf("%d %s %d\n", e1.id, e1.name, e1.salary);
    printf("%d %s %d\n", e2.id, e2.name, e2.salary);
    printf("%d %s %d", e3.id, e3.name, e3.salary);

    return 0;
}