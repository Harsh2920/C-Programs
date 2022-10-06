#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a -");
	scanf("%d", &a);
	printf("Enter value of b -");
	scanf("%d", &b);
	printf("Enter value of c - ");
	scanf("%d", &c);
	
	if (b*b > 4*a*c){
		printf("Roots are real and distinct");
	} else if (b*b == 4*a*c){
		printf("Roots are real and equal");
	} else {
		printf("Roots are imagonary");
	}
	return 0;
}
