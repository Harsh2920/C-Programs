#include <stdio.h>
int armstrong(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	armstrong(n);
	return 0;
}
int armstrong(int n){
	int original,rem,res = 0;
	original = n;

    while (original != 0) {
        rem = original % 10;
        
       	res += rem * rem * rem;
        original /= 10;
    }

    if (res == n)
        printf("Armstrong number");
    else {
        printf("Not an Armstrong number");
	}
}
