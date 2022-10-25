#include <stdio.h>
int main()
{
	int inr;
	printf("Enter amount in INR - ");
	scanf("%d", &inr);
	
	int usd = inr / 80;
	
	printf("Amount in USD - %d", usd);
	
	return 0;
}
