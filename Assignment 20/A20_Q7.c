#include<stdio.h>
int main()
{
    struct Employee
    {
        int id;
        char name[20];
        int salary;
    };

    struct Employee em[20];

    for (int i = 0;i<20;i++){
        scanf("%d %s %d",&em[i].id, &em[i].name, &em[i].salary);
    }

    for (int i = 0;i<20;i++){
        printf("%d %s %d\n",em[i].id, em[i].name, em[i].salary);
    }

    return 0;
}