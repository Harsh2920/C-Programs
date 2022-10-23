#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	switch(n>0){
		case (1) : { printf("%d",-n);
			break;
		}
		case (0) : { printf("%d",-n);
			break;
		}
	}
	return 0;
}
