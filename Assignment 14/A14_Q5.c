#include <stdio.h>
int triangle(int a,int b,int c);
int main()
{
	int a,b,c;
	printf("Enter sides of triangle - ");
	scanf("%d %d %d", &a,&b,&c);
	
	triangle(a,b,c);
	return 0;
}
int triangle(int a,int b,int c){
	if (a + b > c && a + c > b && b + c > a){
		printf("Triangle is Valid");
	} else {
		printf("Triangle is not Valid");
	}
}
