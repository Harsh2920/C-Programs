#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter value of a - ");
	scanf("%d",&a);
	
	printf("Enter value of b - ");
	scanf("%d",&b);
	
	printf("Enter value of c - ");
	scanf("%d",&c);
	
	d = (b*b) - 4 * a * c;
	
	switch (d>0){
		case (1) : {
			printf("Roots are Real and Unequal");
			break;
		}
		case (0) : {
			printf("Roots are Unequal and Imaginary");
			break;
		}
		default : {
			printf("roots are Real and Equal");
			break;
		}
	}
	return 0;
	
}
