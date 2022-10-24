#include <stdio.h>
int lcm(int a, int b);
int main()
{
	int a,b;
	printf("Enetr two numbers - ");
	scanf("%d %d",&a,&b);
	
	lcm(a,b);
	return 0;
}
int lcm(int a,int b){
	int i;
	if (a>b){
		int temp = a;
		a = b;
		b = temp;
	}
	for (i = 1;i<= a*b;i++){
		if (a%b == 0){
			printf("LCM is - %d",a);
			break;
		} else if (i%a == 0 && i%b == 0){
			printf("LCM is - %d",i);
			break;
		}
	}
}
