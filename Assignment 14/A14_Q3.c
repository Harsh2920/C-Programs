#include <stdio.h>
int pass_fail(int m1,int m2,int m3,int m4,int m5);
int main()
{
	int m1,m2,m3,m4,m5;
	printf("Enter marks obtained - ");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	
	pass_fail(m1,m2,m3,m4,m5);
	return 0;
}
int pass_fail(int m1,int m2,int m3,int m4,int m5){
	if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33){
		printf("Fail");
	} else {
		printf("Pass");
	}
}
