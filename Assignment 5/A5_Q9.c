#include <stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	printf("Marks in Subject 1 - ");
	scanf("%d", &m1);
	
	printf("Marks in Subject 2 - ");
	scanf("%d", &m2);
	
	printf("Marks in Subject 3 - ");
	scanf("%d", &m3);
	
	printf("Marks in Subject 4 - ");
	scanf("%d", &m4);
	
	printf("Marks in Subject 5 - ");
	scanf("%d", &m5);
	
	int t_m = m1+m2+m3+m4+m5;
	int agg = t_m / 5;
	
	printf("Aggregate marks - %d", agg);
	return 0;	
}

