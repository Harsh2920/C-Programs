#include <stdio.h>
int nprime(int n);
int main()
{
	int n;
	printf("Enter a number - ");
	scanf("%d",&n);
	
	nprime(n);
	return 0;
}
int nprime(int n){
	int count,c,i=3;
	if (n>=1){
		printf("2 \n");
	}
    for(count = 2; count <= n; i++){
        for(c = 2; c < i; c++){
            if(i%c == 0)
            break;
        }
		if(c == i){
            printf("%d \n",i);
            count++; 
        }
    }
}


