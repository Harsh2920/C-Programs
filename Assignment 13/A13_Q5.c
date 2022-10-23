#include <stdio.h>
int main()
{
	int c;
	printf("1. - Check for isosceles Triangle \n2. - Check for right angled Triangle \n3. - Check for equilateral traingle \n4. - Exit \nEnter Choice - ");	
	scanf("%d",&c);
	
	int s1,s2,s3;
	printf("Enter sides of the traingle - ");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	switch(c){
		case (1) : { if (s1 == s2 && s1 != s3 || s2 == s3 && s2 != s1 || s3 == s2 && s3 != s1){
						printf("Isosceles Triangle");
				} else 
						printf("Not an Isosceles Triangle");
			break;
		}
		case (2) : { if (s1*s1 == (s2*s2) + (s3*s3) || s2*s2 == (s1*s1) + (s3*s3) || s3*s3 == (s2*s2) + (s1*s1)){
						printf("Right angled Triangle");
				} else 
						printf("Not a right angled Triangle");
			break;
		}
		case (3) : { if (s1 == s2 && s2 == s3 && s3 == s1){
						printf("Equilateral Triangle");
				} else 
						printf("Not an Equilateral Triangle");
			break;
		}
		case (4) : {
			break;
		}
	}
	return 0;
}
