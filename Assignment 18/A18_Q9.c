#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10];

    for(int i = 0;i<10;i++){
        printf("Enter a number - ");
        scanf("%d",&arr[i]);
    }

    for (int i = 9;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}