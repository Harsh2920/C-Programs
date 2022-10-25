#include <stdio.h>
int even_sum(int n);
int main()
{
	int n;
	printf("Enter a limit - ");
	scanf("%d",&n);
	
	even_sum(n);
	return 0;
}
int even_sum(int n){
	int i,s=0;
	n=n*2;
	for (i=1;i<=n;i++){
		if (i%2==0){
			s+=i;
		}
	}
	printf("%d",s);

}

