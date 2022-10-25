#include <stdio.h>
int cube_sum(int n);
int main()
{
	int n;
	printf("Enter a limit - ");
	scanf("%d",&n);
	
	cube_sum(n);
	return 0;
}
int cube_sum(int n){
	int i,s=0;
	for (i=1;i<=n;i++){
		s+=i*i*i;
	}
	printf("%d",s);

}

