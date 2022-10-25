#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	isfibo(n);
	return 0;
}
int isfibo(int n){
	int f = 0;
         
    int s = 1;
         
    int t = 0;
         
    while (t < n)
        {
            t = f + s;
             
            f = s;
             
            s = t;
        }
         
    if(t == n)
    {
        printf("Number is there in Fibonacci series");
    }
    else
    {
        printf("Number isn't there in Fibonacci series");
    }
}
