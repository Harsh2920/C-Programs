#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	int u = n % 10;
	
	printf("Unit digit of the number - %d", u);
	
	return 0;
}
