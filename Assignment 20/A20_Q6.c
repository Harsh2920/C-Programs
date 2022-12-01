#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct Student_Marks
    {
        int sID;
        char sName[20];
        float phyMarks;
        float ChemMarks;
        float MathMarks;
    };

    struct Student_Marks s1,s2,s3,s4,s5;

    scanf("%d %s %f %f %f\n", &s1.sID, &s1.sName, &s1.phyMarks, &s1.ChemMarks, &s1.MathMarks);
    scanf("%d %s %f %f %f\n", &s2.sID, &s2.sName, &s2.phyMarks, &s2.ChemMarks, &s2.MathMarks);
    scanf("%d %s %f %f %f\n", &s3.sID, &s3.sName, &s3.phyMarks, &s3.ChemMarks, &s3.MathMarks);
    scanf("%d %s %f %f %f\n", &s4.sID, &s4.sName, &s4.phyMarks, &s4.ChemMarks, &s4.MathMarks);
    scanf("%d %s %f %f %f", &s5.sID, &s5.sName, &s5.phyMarks, &s5.ChemMarks, &s5.MathMarks);

    float avg_s1 = ((s1.phyMarks + s1.ChemMarks+ s1.MathMarks) / 300) * 100;
    float avg_s2 = ((s2.phyMarks + s2.ChemMarks+ s2.MathMarks) / 300) * 100;
    float avg_s3 = ((s3.phyMarks + s3.ChemMarks+ s3.MathMarks) / 300) * 100;
    float avg_s4 = ((s4.phyMarks + s4.ChemMarks+ s4.MathMarks) / 300) * 100;
    float avg_s5 = ((s5.phyMarks + s5.ChemMarks+ s5.MathMarks) / 300) * 100;

    printf("%.2f\n",avg_s1);
    printf("%.2f\n",avg_s2);
    printf("%.2f\n",avg_s3);
    printf("%.2f\n",avg_s4);
    printf("%.2f",avg_s5);

    return 0;
}