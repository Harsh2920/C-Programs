#include <stdio.h>
int square_sum(int n);
int main()
{
	int n;
	printf("Enter a limit - ");
	scanf("%d",&n);
	
	square_sum(n);
	return 0;
}
int square_sum(int n){
	int i,s=0;
	for (i=1;i<=n;i++){
		s+=i*i;
	}
	printf("%d \n",s);

}

