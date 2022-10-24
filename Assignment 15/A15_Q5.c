#include <stdio.h>
int odd(int n);
int main()
{
	int n;
	printf("Enter a limit - ");
	scanf("%d",&n);
	
	odd(n);
	return 0;
}
int odd(int n){
	int i;
	n = n*2;
	for (i = 1;i <= n-1;i++){
		if (i%2 != 0){
			printf("%d \n",i);	
		}
	}
}
