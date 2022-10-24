#include <stdio.h>
int series(int n);
int main()
{
	int n = 5;
	
	series(n);
	return 0;
}
int series(int n){
	int i,f;
	for (i=1;i<=n;i++){
		f += (f*i)/ i; 
	}
	printf("Sum of the series - %d",f);
}
