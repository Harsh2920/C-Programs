#include <stdio.h>
int even_odd(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	int ans = even_odd(n);
	printf("%d",ans);
	return 0;
}
int even_odd(int n){
	if (n%2 == 0){
		return 1;
	} else { 
		return 0;
	}
}
