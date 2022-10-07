#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("Number is Even \n");
		if (n % 3 == 0){
			printf("Number is divisible by both 3 and 2");
		}
	} else if (n % 2 != 0){
		printf("Number is Odd \n");
		if (n % 5 == 0){
			printf("Number is divisible by 5");
		}
	} else {
		printf("Number is Zero");
	}
	return 0;
}
