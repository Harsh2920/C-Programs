#include <stdio.h>
int natural(int n);
int main()
{
	int n;
	printf("Enter a limit - ");
	scanf("%d",&n);
	
	natural(n);
	return 0;
}
int natural(int n){
	int i;
	for (i = 1;i <= n;i++){
		printf("%d \n",i);
	}
}
