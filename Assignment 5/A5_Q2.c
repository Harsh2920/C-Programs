#include <stdio.h>
int main()
{
	int l,b;
	printf("Enter Length - ");
	scanf("%d", &l);
	printf("Enter Breadth - ");
	scanf("%d", &b);
	
	int a_r = l * b;
	
	printf("Area of reactangle - %d", a_r);
	return 0;
}

