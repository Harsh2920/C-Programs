#include <stdio.h>
int main()
{
	int a,b; // Declaration of Variables.
	
	printf("Enter the value of first variable - "); // Taking input from the user first time.
	
	scanf("%d", &a); // Scanning the entered value in the first variable.
	
	printf("Enter the value of second variable - " ); // Taking input from the user second time.
	
	scanf("%d", &b); // Scanning the entered value in the second variable.
	 
	printf("Value of the first variable is - " "%d" "\n",a); // Printing the value of the first variable.
	
	printf("Value of the second variable is - " "%d",b); // Printing the value of the second variable.
	
	return 0;
}

