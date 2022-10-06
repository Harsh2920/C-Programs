#include <stdio.h>
int main()
{
	int a,b,c; // Declaration of variables.
	
	printf("Enter the value of first variable - "); // Taking input from the user first time.
	
	scanf("%d", &a); // Scanning the entered value in the first variable.
	
	printf("Enter the value of second variable - "); // Taking input from the user second time.
	
	scanf("%d", &b); // Scanning the entered value in the second variable.
	
	printf("Enter the value of third variable - "); // Taking input from the user third time.
	
	scanf("%d", &c); // Scanning the entered value in the third variable.
	
	printf("Value of the first variable is - " "%d" "\n",a); // Printing the value of the first variable.
	
	printf("Value of the second variable is - " "%d" "\n",b); // Printing the value of the second variable.
	
	printf("Value of the third variable is - " "%d",c); // Printing the value of the third variable.
	
	return 0;
}
