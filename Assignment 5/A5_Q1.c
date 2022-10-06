#include <stdio.h>
int main()
{
	int a;
	printf("Enter Salary - ");
	scanf("%d", &a);
	
	int D_allowance = a * 50/100;
	int H_allowance = a * 20/100;
	int gross = a + D_allowance + H_allowance;
	
	printf("Gross salary - %d", gross);
	return 0;
}

