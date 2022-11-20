#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],sum = 0;
    for(int i = 0;i<10;i++){
        printf("Enter a number - ");
        scanf("%d",&arr[i]);

        sum += arr[i];
    }

    printf("%d",sum);

    return 0;
}