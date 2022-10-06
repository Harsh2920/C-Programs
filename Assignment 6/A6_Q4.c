#include <stdio.h>
int main()
{
	centimeter();
	printf("\n \n");
	millimeter();
	printf("\n \n");
	inches();
	return 0;
}
void centimeter(){
	int d;
	printf("Enter Distance Between two cities in Kms - ");
	scanf("%d", &d);
	
	int c = d * 100000;
	
	printf("Distance in centimeters - %d", c);
}

void millimeter(){
	int d;
	printf("Enter Distance Between two cities in Kms - ");
	scanf("%d", &d);
	
	int mi = d * 1000000;
	
	printf("Distance in millimeters - %d", mi);
}

void inches(){
	int d;
	printf("Enter Distance Between two cities in Kms - ");
	scanf("%d", &d);
	
	int in = d * 39370;
	
	printf("Enter in inches - %d", in);
}
