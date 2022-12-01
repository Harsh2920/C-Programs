#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Birthday
    {
        char date[20];
        char month[10];
        int year;
    };

    struct Birthday bi[20];

    for (int i = 0;i<20;i++){
        scanf("%s %s %d",&bi[i].date, &bi[i].month, &bi[i].year);
    }

    for (int i = 0;i<20;i++){
        printf("%s %s %d\n",bi[i].date, bi[i].month, bi[i].year);
    }
    return 0;
}
