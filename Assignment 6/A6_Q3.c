#include <stdio.h>
int main()
{
	add();
	printf("\n \n");
	sub();
	printf("\n \n");
	multiply();
	printf("\n \n");
	divide();
	return 0;
}
void add(){
	int a,b;
	printf("Enter first number - ");
	scanf("%d", &a);
	
	printf("Enter second number - ");
	scanf("%d", &b);
	
	printf("Sum of the numbers - %d", a+b);
}

void sub(){
	int a,b;
	printf("Enter first number - ");
	scanf("%d", &a);
	
	printf("Enter second number - ");
	scanf("%d", &b);
	
	printf("Difference of the numbers - %d", a-b);
}
void multiply(){
	int a,b;
	printf("Enter first number - ");
	scanf("%d", &a);
	
	printf("Enter second number - ");
	scanf("%d", &b);
	
	printf("Product of the numbers - %d", a*b);
}

void divide(){
	int a,b;
	printf("Enter first number - ");
	scanf("%d", &a);
	
	printf("Enter second number - ");
	scanf("%d", &b);
	
	printf("Division of the numbers - %d", a/b);
}


