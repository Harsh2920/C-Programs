#include <stdio.h>
int usd(int inr);
int main()
{
	int inr;
	printf("Enter amount in INR - ");
	scanf("%d", &inr);
	
	usd(inr);
	return 0;
}
int usd(int inr){
	int usd = inr / 80;
	
	printf("Amount in USD - %d", usd);
}
