#include <stdio.h>
int main()
{
	total();
	printf("\n \n");
	percentage();
	printf("\n \n");
	average();
	return 0;
}
void total(){
	
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
	
	printf("Total Marks - %d", t_m);
}

void percentage(){
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
	
	float t_m = m1+m2+m3+m4+m5;
	float percent = t_m / 500 * 100;
	
	printf("Percentage - %f", percent);
}

void average(){
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
	
	int avg = m1+m2+m3+m4+m5 / 5;
	
	printf("Average - %d", avg);
}
