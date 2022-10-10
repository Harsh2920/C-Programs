#include <stdio.h>
int main()
{
	int i;
	printf("testing of various arithematic operators-2\n");
	
	i = 2/9;
	printf("1. Value of integer i is %d\n",i);
	
	i = 2.0/9;
	printf("2. Value of integer i is %d\n",i);
	
	i = 2/9.0;
	printf("3. Value of integer i is %d\n",i);
	
	i = 2.0/9.0;
	printf("4. Value of integer i is %d\n",i);
	
	i = 9/2;
	printf("5. Value of integer i is %d\n",i);
	
	i = 9.0/2;
	printf("6. Value of integer i is %d\n",i);
	
	i = 9/2.0;
	printf("7. Value of integer i is %d\n",i);
	
	i = 9.0/2.0;
	printf("8. Value of integer i is %d\n",i);
	
return 0;
}

/*
Output ->
testing of various arithematic operators-2
1. Value of integer i is 0
2. Value of integer i is 0
3. Value of integer i is 0
4. Value of integer i is 0
5. Value of integer i is 4
6. Value of integer i is 4
7. Value of integer i is 4
8. Value of integer i is 4
*/
