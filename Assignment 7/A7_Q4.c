#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	if (n > 10){
		printf("Value is greater than ten");
	} else if (n< 10){
		printf("Value is less than ten");
	} else {
		printf("Value is equal to ten");
	}
	return 0;
}
