#include <stdio.h>
int main()
{
	int s;
	printf("Enter side - ");
	scanf("%d", &s);
	
	int p_s = 4 * s;
	
	printf("Perimeter of square - %d", p_s);
	return 0;
}
