#include <stdio.h>
int isPrime(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	isPrime(n);
	return 0;
}
int isPrime(int n){
	int i,p=0;
	for (i=1;i<=n;i++){
		if (n%i == 0){
			p++;
		}
	}
	
	if (p == 2){
		printf("Prime Number");
	} else {
		printf("Not a Prime Number");
	}
}
