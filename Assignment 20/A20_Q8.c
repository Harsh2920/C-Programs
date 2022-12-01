#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Student
    {
        int sId;
        char sName[20];
        int sRollno;
        char sMobno[10];
    };

    struct Student st[20];

    for (int i =0 ;i<20;i++){
        scanf("%d %s %d %s", &st[i].sId, &st[i].sName, &st[i].sRollno, &st[i].sMobno);
    }

    for (int i = 0;i<20;i++){
        printf("%d %s %d %s\n",st[i].sId, st[i].sName, st[i].sRollno, st[i].sMobno);
    }
    return 0;
}
