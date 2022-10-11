#include <stdio.h>
int main()
{
	int i,o;
	for (i=20;i>=1;i--){
		if (i%2 != 0){
			o = i;
			printf("%d \n",o);	
		} 
	}
	return 0;
}
