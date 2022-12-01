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

    struct Student_Marks s1,s2,s3,s4,s5;

    scanf("%d %s %d %d %d", &s1.sID, &s1.sName, &s1.phyMarks, &s1.ChemMarks, &s1.MathMarks);
    scanf("%d %s %d %d %d", &s2.sID, &s2.sName, &s2.phyMarks, &s2.ChemMarks, &s2.MathMarks);
    scanf("%d %s %d %d %d", &s3.sID, &s3.sName, &s3.phyMarks, &s3.ChemMarks, &s3.MathMarks);
    scanf("%d %s %d %d %d", &s4.sID, &s4.sName, &s4.phyMarks, &s4.ChemMarks, &s4.MathMarks);
    scanf("%d %s %d %d %d", &s5.sID, &s5.sName, &s5.phyMarks, &s5.ChemMarks, &s5.MathMarks);

    printf("%d %s %d %d %d\n", s1.sID, s1.sName, s1.phyMarks, s1.ChemMarks, s1.MathMarks);
    printf("%d %s %d %d %d\n", s2.sID, s2.sName, s2.phyMarks, s2.ChemMarks, s2.MathMarks);
    printf("%d %s %d %d %d\n", s3.sID, s3.sName, s3.phyMarks, s3.ChemMarks, s3.MathMarks);
    printf("%d %s %d %d %d\n", s4.sID, s4.sName, s4.phyMarks, s4.ChemMarks, s4.MathMarks);
    printf("%d %s %d %d %d\n", s5.sID, s5.sName, s5.phyMarks, s5.ChemMarks, s5.MathMarks);
    
    return 0;
}