#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	int i,f = 1;
	for (i=1;i<=n;i++){
		f = f*i;
	}
	printf("Factorial - %d",f);
	return 0;
}
