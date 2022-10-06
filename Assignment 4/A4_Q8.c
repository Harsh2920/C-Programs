#include <stdio.h>
int main()
{
	int d;
	printf("Enter Distance Between two cities in Kms - ");
	scanf("%d", &d);
	
	int mi = d * 1000000;
	
	printf("Distance in millimeters - %d", mi);
	return 0;
}
