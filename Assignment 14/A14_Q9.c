#include <stdio.h>
int leap_year(int y);
int main()
{
	int y;
	printf("Enter year - ");
	scanf("%d",&y);
	
	leap_year(y);
	return 0;
}
int leap_year(int y){
		switch(y%4 == 0){
		case (1) : { printf("Leap year");
			break;
		}
		case (0) : {
			printf("Not a Leap year");
			break;
		}
	}
}
