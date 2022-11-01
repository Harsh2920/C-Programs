#include<stdio.h>
int zero();
int main(int argc, char const *argv[])
{
    zero();
    return 0;
}
int zero(){
    int i,a;
    for (i=1;;i++){
        printf("Enter a number - ");
        scanf("%d",&a);
        if (a==0){
            break;
        }
        if (a%10==0){
            continue;
        }
        printf("%d \n",a);

    }
}
