#include <stdio.h>
#define pi 3
int main()
{
	int r;
	printf("Enter radius - ");
	scanf("%d", &r);
	
	int a_c = pi * r * r;
	
	printf("Area of circle - %d", a_c);
	return 0;
}

