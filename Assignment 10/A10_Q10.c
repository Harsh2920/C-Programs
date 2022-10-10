#include <stdio.h>
int main()
{
	float f;
	printf("testing of various arithematic operators-2\n");
	
	f = 2/9;
	printf("1. Value of float f is %f\n",f);
	
	f = 2.0/9;
	printf("2. Value of float f is %f\n",f);
	
	f = 2/9.0;
	printf("3. Value of float f is %f\n",f);
	
	f = 2.0/9.0;
	printf("4. Value of float f is %f\n",f);
	
	f = 9/2;
	printf("5. Value of float f is %f\n",f);
	
	f = 9.0/2;
	printf("6. Value of float f is %f\n",f);
	
	f = 9/2.0;
	printf("7. Value of float f is %f\n",f);
	
	f = 9.0/2.0;
	printf("8. Value of float f is %f\n",f);
	
return 0;
}

/*
Output ->
testing of various arithematic operators-2
1. Value of float f is 0.000000
2. Value of float f is 0.222222
3. Value of float f is 0.222222
4. Value of float f is 0.222222
5. Value of float f is 4.000000
6. Value of float f is 4.500000
7. Value of float f is 4.500000
8. Value of float f is 4.500000
*/
