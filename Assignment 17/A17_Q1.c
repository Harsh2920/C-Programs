#include<stdio.h>
int comp();
int main()
{
	int a;
	a=comp();
    printf("%d",a);
	
    return 0;
}
int comp(){
	int i,c=0,a,j,sum=0;
	for(i=1;i<=10;i++){
		printf("enter a number : ");
		scanf("%d",&a);
		for(j=2;j<=a;j++){
		if(a==j){
		 c=5;
		 break;
		}
		if(a%j==0){
			break;
		}
		
	}
	if(c==5){
		break;
	}
	sum+=a;
	}
	return sum;
}
