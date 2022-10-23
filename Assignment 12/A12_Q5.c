#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	int num = (n/10);
	num = num * 10;
	
	printf("%d \n", num);
	
	return 0;
}
