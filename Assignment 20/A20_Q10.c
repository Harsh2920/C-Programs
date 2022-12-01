#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Student_Marks
    {
        int sID;
        char sName[20];
        int phyMarks;
        int ChemMarks;
        int MathMarks;
    };

    struct Student_Marks st[20];

    for (int i = 0;i<20;i++){
        scanf("%d %s %d %d %d",&st[i].sID, &st[i].sName, &st[i].phyMarks, &st[i].ChemMarks, &st[i].MathMarks);
    }

    for (int i = 0;i<20;i++){
        printf("%d %s %d %d %d\n",st[i].sID, st[i].sName, st[i].phyMarks, st[i].ChemMarks, st[i].MathMarks);
    }
    return 0;
}