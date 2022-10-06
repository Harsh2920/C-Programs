#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number between 1-100 - ");
	scanf("%d", &n);
	
	if (n > 50 && n <= 100){
		printf("SUCCESS");
	} else {
		printf("FAILURE");
	}
	return 0;
}
