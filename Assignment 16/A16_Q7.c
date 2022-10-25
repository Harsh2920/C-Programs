#include <stdio.h>  
int count(int n);
int main()  
{  
   	int n; 
   	printf("Enter a number - ");  
   	scanf("%d",&n);  
  
  	count(n);
    return 0;  
}
int count(int n){
	int c=0;
	while(n!=0){  
       n=n/10;  
       c++;  
   }  
    printf("%d",c);
} 
