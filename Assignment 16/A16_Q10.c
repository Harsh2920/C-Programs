#include <stdio.h>
int fibo(int n);
int main()
{
	int n;
	printf("Enter the Term - ");
	scanf("%d",&n);
	
	printf("%d",fibo(n));
	return 0;
}
int fibo(int n){
	
    if (n <= 1) {
        return n;
    }
 	return fibo(n - 1) + fibo(n - 2);
}
