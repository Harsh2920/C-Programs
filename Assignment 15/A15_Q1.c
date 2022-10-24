#include <stdio.h>
float area_circle(float r);
int main()
{
	float r;
	printf("enter radius - ");
	scanf("%f",&r);
	
	float ans = area_circle(r);
	printf("%f",ans);
	return 0;
	
}
float area_circle(float r){
	float area = 3.14 * r * r;
	return area;
}
