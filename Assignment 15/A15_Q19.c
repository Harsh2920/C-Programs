#include <stdio.h>
int cube(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	printf("Cube - %d",cube(n));
	return 0;
}
int cube(int n){
	int c = n*n*n;
	return c;
}
