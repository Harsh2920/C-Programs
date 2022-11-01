#include<stdio.h>
int natural(int);
int main(int argc, char const *argv[])
{
    int n = 10;
    natural(n);
    return 0;
}
int natural(int n){
    int i,a;
    for (i=1;i<=n;i++){
        printf("Enter natural numbers - ");
        scanf("%d",&a);

        if (a==10){
            break;
        } else {
            printf("%d \n",a);
        }
    }
}
