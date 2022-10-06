#include <stdio.h>
#define pi 3
int main (){
	
	Rectangle();
	printf("\n \n");
	Square();
	printf("\n \n");
	Circle();
	printf("\n \n");
	triangle();
	return 0;
}
void Rectangle(){
	int l,b;
	printf("Enter Length - ");
	scanf("%d", &l);
	printf("Enter Breadth - ");
	scanf("%d", &b);
	
	int a_r = l * b;
	int p_r = 2 * (l + b);
	
	printf("Area of rectangle - %d \n", a_r);
	printf("Perimeter of rectangle - %d", p_r);
}
void Square(){
	int s;
	printf("Enter side - ");
	scanf("%d", &s);
	
	int a_s = s * s;
	int p_s = 4 * s;
	
	printf("Area of square - %d \n", a_s);
	printf("Perimeter of square - %d", p_s);
}
void Circle(){
	int r;
	printf("Enter radius - ");
	scanf("%d", &r);
	
	int a_c = pi * r * r;
	int c_c = 2 * pi * r;
	
	printf("Area of circle - %d \n", a_c);
	printf("Circumference of Circle - %d", c_c);
}

void triangle(){
		int s1,s2,s3;
	printf("Enter first side - ");
	scanf("%d", &s1);
	
	printf("Enter second side - ");
	scanf("%d", &s2);
	
	printf("Enter third side - ");
	scanf("%d", &s3);
	
	int sum = s1+s2+s3;
	
	printf("Sum of sides of the triangle - %d", sum);
	
}
