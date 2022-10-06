#include <stdio.h>
int main()
{
	int l1,l2,l3;
	int s = 0;
	printf("Enter Sides of the triangle - ");
	scanf("%d %d %d", &l1, &l2, &l3);
	
	if (l1 > l2 && l1 > l3){
		s = (l2+l3) > l1;
	} else if (l2 > l1 && l2 > l3){
		s = (l1+l3) > l2;
	} else {
		s = (l1+l2) > l3;
	}
	
	if (s){
		printf("Triangle is valid");
	} else {
		printf("Triangle is not valid");
 	}
 	
	return 0;
}
