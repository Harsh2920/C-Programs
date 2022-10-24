#include<stdio.h>
int digit(int num,int d);
int main()
{
	int n,num,d,rem;
	printf("Enter number and digit to find - ");
	scanf("%d %d",&num,&d);
	
	digit(num,d);
	return 0;

}
int digit(int num,int d){
	int n,rem;
	n=num;
	while(num!=0)
	{
		rem=num%10;
		if(rem==d)
		{
			printf("DIGIT IS PRESENT IN THE NUMBER",digit,n);
			return 1;
		}
		num/=10;
	}
	printf("DIGIT IS NOT PRESENT IN THE NUMBER",digit,n);
	return 0;
}
