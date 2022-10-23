#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter sides of Triangle - ");
	scanf("%d %d %d", &a,&b,&c);
	
	if (a == b && b == c && c == a){
		printf("Equilateral Triangle");
	} else if (a == b && a != c || b == c && b != a || c == b && c != a){
		printf("Isosceles Triangle");
	} else {
		printf("Scaler Triangle");
	}
	return 0;
}
