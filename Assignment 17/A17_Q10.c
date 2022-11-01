#include <stdio.h>
int odd(int n);
int main(int argc, char const *argv[])
{
    int n = 10;
    odd(n);
    return 0;
}
int odd(int n){
    int i,sum = 0;
    for (i=0;i<=n;i++){
        if (i%2==0){
            continue;
        }
        sum+=i;
    }
    printf("%d",sum);
}