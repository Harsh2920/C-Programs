#include <stdio.h>
int main()
{
	int l,b;
	printf("Enter Length - ");
	scanf("%d", &l);
	printf("Enter Breadth - ");
	scanf("%d", &b);
	
	int p_r = 2 * (l + b);
	
	printf("Perimeter of rectangle - %d", p_r);
	return 0;
}
