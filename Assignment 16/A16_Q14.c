#include <stdio.h>
int coprime(int a,int b);
int main()
{
	int a,b;
	printf("Enter two numbers - ");
	scanf("%d %d",&a,&b);
	
	coprime(a,b);
	return 0;
}
int coprime(int a,int b){
	int i,hcf;
	
	for(i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
	   		hcf = i;
	  	}
	}
	if(hcf == 1){
	  	printf("CO-PRIME");
	}
	else{
	  	printf("NOT CO-PRIME");
	}
}

