#include <stdio.h>
int main()
{
	int c,q;
	printf("1. - Burger \n2.- French Fries \n3. - Pizza \n4. - Sandwiches \nEnter Choice - ");
	scanf("%d",&c);
	
	printf("Enter quantity - ");
	scanf("%d",&q);
	
	switch(c){
		case (1) : { printf("Total Charges - %d",q*200);
			break;
		}
		case (2) : { printf("Total Charges - %d",q*50);
			break;
		}
		case (3) : { printf("Total Charges - %d",q*500);
			break;
		}
		case (4) : { printf("Total Charges - %d",q*150);
			break;
		}
		default : { printf("Enter some valid choice");
			break;
		}
	}
	return 0;
}
