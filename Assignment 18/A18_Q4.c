#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],max;

    for (int i = 0;i<10;i++){
        printf("Enter a number - ");
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    for (int i = 0;i<10;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    printf("%d",max);
    return 0;
}
