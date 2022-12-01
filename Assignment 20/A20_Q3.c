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
    
    struct Student s1,s2,s3,s4;

    scanf("%d %s %d %s", &s1.sId, &s1.sName, &s1.sRollno, &s1.sMobno);
    scanf("%d %s %d %s", &s2.sId, &s2.sName, &s2.sRollno, &s2.sMobno);
    scanf("%d %s %d %s", &s3.sId, &s3.sName, &s3.sRollno, &s3.sMobno);
    scanf("%d %s %d %s", &s4.sId, &s4.sName, &s4.sRollno, &s4.sMobno);

    printf("%d %s %d %s\n", s1.sId, s1.sName, s1.sRollno, s1.sMobno);
    printf("%d %s %d %s\n", s2.sId, s2.sName, s2.sRollno, s2.sMobno);
    printf("%d %s %d %s\n", s3.sId, s3.sName, s3.sRollno, s3.sMobno);
    printf("%d %s %d %s", s4.sId, s4.sName, s4.sRollno, s4.sMobno);

    return 0;
}