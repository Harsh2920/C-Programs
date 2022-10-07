#include <stdio.h>
int main()
{
	float u;
	printf("Enter units - ");
	scanf("%f", &u);
	
	float uc,sub,tc;
	
	if (u > 0 && u <= 50){
		uc = 0.50 * u; 
		printf("Electricity Bill in Rs. - %f", uc);
	} else if (u > 50 && u <= 150){
		uc = 0.75 * u;
		printf("Electricity Bill in Rs. - %f", uc);
	} else if (u > 150 && u <= 250){
		uc = 1.20 * u;
		printf("Electricity Bill in Rs. - %f", uc);
	} else if (u > 250){
		uc = (1.50 * u);
		sub = uc * 20 /100;
		tc = uc + sub;
		printf("Electricity Bill in Rs. - %f", tc);
	}
	return 0;
	
}
