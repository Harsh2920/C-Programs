#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d", &n);
	
	int one = n % 10;
	int ten = (n % 100) / 10;
	
	printf("Digit at one's place - %d \n", one);
	printf("Digit at tenth place - %d \n", ten);
	
	if (one == ten){
		printf("Both are equal");
	} else {
		printf("Both are unequal");
	}
	return 0;
}
