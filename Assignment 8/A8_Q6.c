#include <stdio.h>
int main()
{
	int m;
	printf("Enter month number - ");
	scanf("%d", &m);
	
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
		printf("Number of Days are 31");
	} else if (m == 2){
		printf("Number of Days are 28");
	} else {
		printf("Number of Days are 30");
	}
	return 0;
}
