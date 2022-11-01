#include<stdio.h>
int skip_prime();
int main()
{
	skip_prime();
    return 0;	
}
int skip_prime(){
    int a,l=0,sum=0;
	for(int i=1;i<=10;i++){
		printf("enter a number : ");
		scanf("%d",&a);
	
	for(int j=2;j<=a;j++){
		if(j==a){
		    a=0;
		    l=1;
		    break;
		}
		if(a%j==0){
			break;
		}
	}
	sum+=a;
	}
	printf("%d",sum);
}