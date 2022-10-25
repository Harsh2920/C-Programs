#include <stdio.h>
int fibo(int n);
int main()
{
	int n;
	printf("Enter a limit - ");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
int fibo(int n){
	int f,s,t;
	f = 1;
	s = 1;
	printf("%d \n%d \n",f,s);
	int i;
	for (i=2;i<n;i++){
		t = f+s;
		printf("%d \n",t);
		f=s;
		s=t;
	}
}
