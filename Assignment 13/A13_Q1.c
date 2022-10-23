#include <stdio.h>
int main()
{
	int n,y;
	printf("Enter month number - ");
	scanf("%d",&n);
	
	if (n==2){
		printf("Enter year - ");
		scanf("%d",&y);
	}
	switch(n){
		case (1) : { printf("31");
			break;
		}
		case (2) : { if (y%4 == 0){
						printf("29");
					} else {
						printf("28");
					}
			break;
		}
		case (3) : { printf("31");
			break;
		}
		case (4) : { printf("30");
			break;
		}
		case (5) : { printf("31");
			break;
		}
		case (6) : { printf("31");
			break;
		}
		case (7) : { printf("31");
			break;
		}
		case (8) : { printf("31");
			break;
		}
		case (9) : { printf("31");
			break;
		}
		case (10) : { printf("31");
			break;
		}
		case (11) : { printf("31");
			break;
		}
		case (12) : { printf("31");
			break;
		}
		default : { printf("Enter a valid month number");
			break;
		}
	}
	return 0;
}
