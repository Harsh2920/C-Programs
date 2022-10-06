#include <stdio.h>
int main()
{
	int a;
	printf("Enter Salary - ");
	scanf("%d", &a);
	
	int allowance = a * 40/100;
	int gross = a + allowance;
	
	printf("Gross salary - %d", gross);
	return 0;
}
