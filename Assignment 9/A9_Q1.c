#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter first number - ");
	scanf("%d", &a);
	printf("Enter second number - ");
	scanf("%d", &b);
	
	if (a > b){
		printf("First numbers is greater \n");
		if (a >= 500 && a <= 1000){
			printf("Value of the number - %d", a);
		}
	} else if (b > a){
		printf("Second number is greater \n");
		if (b >= 500 && b <=1000){
			printf("Value of the number - %d", b);
		}
	} else {
		printf("Numbers are equal");
	}
	return 0;
}
