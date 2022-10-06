#include <stdio.h>
int main()
{
	float cp,sp;
	printf("Enter Cost Price - ");
	scanf("%f", &cp);
	printf("Enter Selling Price - ");
	scanf("%f", &sp);
	
	float p = sp - cp;
	float l = cp - sp;
	
	float lp = l/cp * 100;
	
	printf("Profit - %f \n", p);
	printf("Loss Percentage - %f", lp);
	
	return 0;
	
}
