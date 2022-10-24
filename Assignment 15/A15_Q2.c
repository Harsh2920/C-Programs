#include <stdio.h>
float SI(float p, float r, float t);
int main()
{
	float p,r,t;
	printf("Enter Principal amount - ");
	scanf("%f",&p);
	
	printf("Enter Interest rate - ");
	scanf("%f",&r);
	
	printf("Enter time period - ");
	scanf("%f",&t);
	
	float ans = SI(p,r,t);
	printf("%f",ans);
	return 0;
}
float SI(float p, float r, float t){
	float simple = p*r*t/100;
	return simple;
}

