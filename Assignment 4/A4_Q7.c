#include <stdio.h>
int main()
{
	int d;
	printf("Enter Distance Between two cities in Kms - ");
	scanf("%d", &d);
	
	int c = d * 100000;
	
	printf("Distance in centimeters - %d", c);
	return 0;
}
