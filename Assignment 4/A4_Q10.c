#include <stdio.h>
int main()
{
	int f;
	printf("Enter temperature of the city in fahrenheit - ");
	scanf("%d", &f);
	
	int c = (f - 32) * 5/9;
	
	printf("Temperature in Celsius - %d", c);
	return 0;
}
