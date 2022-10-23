#include <stdio.h>
int main()
{
	int y;
	printf("Enter year - ");
	scanf("%d",&y);
	
	switch(y%4 == 0){
		case (1) : { printf("Leap year");
			break;
		}
		case (0) : {
			printf("Not a Leap year");
			break;
		}
	}
	return 0;
}

