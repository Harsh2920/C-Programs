#include <stdio.h>
/* Convert Fahrenheit temperature to Celsius Equivalent*/
int main()
{
	int fahr,celsius;
	printf("Enter temperature in Fahr\n");
	scanf("%d",&fahr);
	celsius = 5/9 * (fahr-32);
//	celsius = 5 * (fahr-32) / 9;
//	celsius = 5.0 / 9 * (fahr-32);
	
	printf("Temperature in celsius is = %d\n", celsius);
	
return 0;
}

/*
Output ->
1. Enter temperature in Fahr
98
Temperature in celsius is = 0

2. Enter temperature in Fahr
98
Temperature in celsius is = 36

3. Enter temperature in Fahr
98
Temperature in celsius is = 36
*/
