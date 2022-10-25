#include <stdio.h>
int armstrong(int n);
int main()
{	
	int n = 1000;
	armstrong(n);
	return 0; 
}
int armstrong(int n){
	    int temp,n1,n2,n3;

	 for(n=1;n<=1000;n++) 
    {
        if(n<=9)
        {
            printf("%d ",n);
        }
        else
        {
            n1 = n % 10;   
            n2 = (n % 100 - n1) / 10;  
            n3 = (n % 1000 - n2) /100; 
            temp = (n1 * n1 * n1) + (n2 * n2 * n2) + (n3 * n3 * n3); 
	if (temp == n)
            {
                printf("%d ", temp);
            }
        }
    }
}

