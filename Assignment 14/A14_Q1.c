#include <stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	fact(n);
	return 0;
}
int fact(int n){
	int i,f = 1;
	for (i=1;i<=n;i++){
		f = f*i;
	}
	printf("Factorial - %d",f);
}
