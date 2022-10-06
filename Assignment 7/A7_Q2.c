#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers - ");
	scanf("%d %d", &a, &b);
	
	printf("Enter choice - ");
	scanf("%d", &c);
	
	if (c ==1){
		printf("Sum of the numbers - %d", a+b);
	} else if (c == 2){
		printf("Difference of the numbers - %d", a-b);
	} else if (c == 3){
		printf("Product of the numbers - %d", a*b);
	} else if (c == 4){
		printf("Quotient of the numbers - %d", a/b);
	} else if (c == 0){
		printf("NO OPERATON");
	} else {
		printf("Enter a valid number");
	}
	return 0;
}
