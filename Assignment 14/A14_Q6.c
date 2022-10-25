#include <stdio.h>
int zero(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	zero(n);	
	return 0;
}
int zero(int n){
	int num = (n/10);
	num = num * 10;
	
	printf("%d \n", num);
}
