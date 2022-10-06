#include <stdio.h>
int main()
{
	int h;
	printf("Enter Height of the student in ft - ");
	scanf("%d", &h);
	
	int in = h * 12;
	
	printf("Height in Inches - %d", in);
	return 0;
}
