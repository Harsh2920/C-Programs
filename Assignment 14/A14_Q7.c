#include <stdio.h>
int calci(int a,int b,int c);
int main()
{
	int a,b,c;
	printf("Enter two numbers - ");
	scanf("%d %d",&a,&b);
	
	printf("1. - Addition \n2. - Subtraction \n3. - Multiplication \n4. - Division \n5. - Exit \nEnter Choice - ");
	scanf("%d",&c);
	
	calci(a,b,c);
	return 0;
}
int calci(int a,int b,int c){
		switch (c){
		case (1) : { printf("Addition - %d",a+b);
			break;
		}
		case (2) : { printf("Subtraction - %d",a-b);
			break;
		}
		case (3) : { printf("Multiplication - %d",a*b);
			break;
		}
		case (4) : { printf("Division - %d",a/b);
			break;
		}
		case (5) : { 
			break;
		}
	}
}
