#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Birthday
    {
        char date[20];
        char month[10];
        int year;
    };

    struct Birthday b1,b2,b3,b4,b5;

    scanf("%s %s %d", &b1.date, &b1.month, &b1.year);
    scanf("%s %s %d", &b2.date, &b2.month, &b2.year);
    scanf("%s %s %d", &b3.date, &b3.month, &b3.year);
    scanf("%s %s %d", &b4.date, &b4.month, &b4.year);
    scanf("%s %s %d", &b5.date, &b5.month, &b5.year);

    printf("%s %s %d\n",b1.date, b1.month, b1.year);
    printf("%s %s %d\n",b2.date, b2.month, b2.year);
    printf("%s %s %d\n",b3.date, b3.month, b3.year);
    printf("%s %s %d\n",b4.date, b4.month, b4.year);
    printf("%s %s %d",b5.date, b5.month, b5.year);
    
    return 0;
}