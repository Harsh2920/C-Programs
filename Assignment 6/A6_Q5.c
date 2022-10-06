#include <stdio.h>
int main()
{
	loop();
	return 0;
}

void loop(){
	int i,n;
	printf("Enter the limit - ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		printf("%d \n", i);
	}
}
