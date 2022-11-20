#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],min;

    for (int i = 0;i<10;i++){
        printf("Enter a number - ");
        scanf("%d",&arr[i]);
    }

    min = arr[0];
    for (int i = 0;i< 10;i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}