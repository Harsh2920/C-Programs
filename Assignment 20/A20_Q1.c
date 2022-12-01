#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Employee
    {
        int id;
        char name[20];
        int salary;
    };

    struct Employee e1 = {101,"Ramesh",20000};
    struct Employee e2 = {102,"Suresh",30000};
    struct Employee e3 = {103,"Mukesh",40000};

    printf("%d %s %d \n", e1.id, e1.name, e1.salary);
    printf("%d %s %d \n", e2.id, e2.name, e2.salary);
    printf("%d %s %d", e3.id, e3.name, e3.salary);

    return 0;
}