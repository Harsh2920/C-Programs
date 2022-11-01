#include<stdio.h>
int sum(int);
int main(int argc, char const *argv[])
{
    int n = 10;
    sum(n);
    return 0;
}
int sum(int n){
    int i,a,s=0;
    for(i=1;i<=n;i++){
    printf("Enter a number - ");
    scanf("%d",&a);
    if (a<0){
        continue;
    }
    s+=a;

}
printf("%d",s);
}
