#include <stdio.h>
int hcf(int a,int b);
int main()
{
	int a,b;
	printf("Enter two numbers - ");
	scanf("%d %d",&a,&b);
	
	printf("%d",hcf(a,b));
	return 0;
}
int hcf(int a,int b){
	
	if (a == b){
		return a;
	} 
	
	if (a>b){
		return hcf(a-b,b);
	}
	return hcf(a,b-a);

}
