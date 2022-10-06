#include <stdio.h>
int main()
{
	int d;
	printf("Enter Distance Between two cities in Kms - ");
	scanf("%d", &d);
	
	int m = d * 1000;
	
	printf("Distance in meters - %d", m);
	return 0;
}

