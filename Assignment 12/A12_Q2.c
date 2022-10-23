#include <stdio.h>
int main()
{
	int a;
	printf("Enter a limit - ");
	scanf("%d",&a);
	
	int i;
	for (i = 1;i<=a;i++){
		printf("%d \n",i);
	}
	return 0;
}
