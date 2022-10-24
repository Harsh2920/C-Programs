#include <stdio.h>
int nextprime(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	printf("%d",nextprime(n));
	return 0;
}
int nextprime(int n){
	int p;
	p=2;
	if (n<=0){
		return 0;
	}
	while(n%p != 0){
		p++;
		if (n == p){
			return p;
		}
	}
	while(n%p == 0){
		n++;
		while(n%p != 0){
			p++;
			if (n%p == 0 && n!= p){
				p = 2;
				break;
			}
			if (n%p == 0 && n == p){
				return p;
			}
		}
	}
}
