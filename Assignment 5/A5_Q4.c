#include <stdio.h>
int main()
{
	int s;
	printf("Enter side - ");
	scanf("%d", &s);
	
	int a_s = s * s;
	
	printf("Area of square - %d", a_s);
	return 0;
}
