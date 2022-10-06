#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers - ");
	scanf("%d %d", &a, &b);
	
	int c = a;
	a = b;
	b = c;
	
	printf("Swapped Values - %d %d", a,b);
	
	return 0;	
}
