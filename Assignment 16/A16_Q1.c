#include <stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("Enter a limit - ");
	scanf("%d",&n);
	
	sum(n);
	return 0;
}
int sum(int n){
	int i,s=0;
	for (i=1;i<=n;i++){
		s +=i;
	}
	printf("%d",s);
}

