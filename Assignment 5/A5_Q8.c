#include <stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter first side - ");
	scanf("%d", &s1);
	
	printf("Enter second side - ");
	scanf("%d", &s2);
	
	printf("Enter third side - ");
	scanf("%d", &s3);
	
	int sum = s1+s2+s3;
	
	printf("Sum of sides of the triangle - %d", sum);
	return 0;
}
