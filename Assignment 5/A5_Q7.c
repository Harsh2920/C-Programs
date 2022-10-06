#include <stdio.h>
#define pi 3
int main()
{
	int r;
	printf("Enter radius - ");
	scanf("%d", &r);
	
	int p_c = 2 * pi * r;
	
	printf("Circumference of circle - %d", p_c);
	return 0;
}
