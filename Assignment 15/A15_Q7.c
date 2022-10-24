#include <stdio.h>
int nCr(int n, int r);
int fact(int n);
int main() {
    int n,r;
    printf("Enter values of n and r - ");
    scanf("%d %d",&n,&r);
    
    printf("%d", nCr(n, r));
    return 0;
}
 
int fact(int n){
	int i;
    if(n == 0)
    return 1;
    int fact= 1;
    for (i = 2; i <= n; i++)
    fact = fact * i;
    return fact;
}
 
int nCr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}
 

