#include <stdio.h>
int area_square(int s);
int main()
{
	int s;
	printf("Enter side - ");
	scanf("%d", &s);
	
	area_square(s);
	return 0;
}
int area_square(int s){
	int a_s = s * s;
	
	printf("Area of square - %d", a_s);
}
