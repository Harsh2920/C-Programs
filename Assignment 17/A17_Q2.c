#include<stdio.h>
int prime(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number - ");
    scanf("%d",&n);

    prime(n);
    return 0;
}
int prime(int n){
    int i;
    for (i=2;i<=n;i++){
        if (i==n){
            printf("Prime");
            break;
        } 
        if (n%i==0){
            printf("Not Prime");
            break;
        }
    }
}
