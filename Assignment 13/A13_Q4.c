#include <stdio.h>
int main()
{
	int n;
	printf("Enter Day number - ");
	scanf("%d",&n);
	
	switch(n){
		case (1) : { printf("Have a Great Monday");
			break;
		}
		case (2) : { printf("Have a Great Tuesday");
			break;
		}
		case (3) : { printf("Have a Great Wednesday");
			break;
		}
		case (4) : { printf("Have a Great Thursday");
			break;
		}
		case (5) : { printf("Have a Great Friday");
			break;
		}
		case (6) : { printf("Have a Great Saturday");
			break;
		}
		case (7) : { printf("Have a Great Sunday");
			break;
		}
		default : { printf("Enter a valid Day number");
			break;
		}
	}
	return 0;
}
