#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	if (n > 0){
		printf("Number is Positive \n");
		if (n % 10 == 0){
			printf("Number is divisible by 10");
		}
	} else if (n < 0){
		printf("Number is Negative");
	} else {
		printf("Number is Zero");
	}
	return 0;
}
