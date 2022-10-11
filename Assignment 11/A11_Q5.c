#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	int i,n1,n2;
	for (i=1;i<=n;i++){
		printf("Enter values - ");
		scanf("%d %d",&n1,&n2);
		int sum = n1+n2;
		printf("Sum - %d \n",sum);
	}	
	return 0;
}
