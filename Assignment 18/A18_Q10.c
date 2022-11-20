#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr1[10];
    int arr2[10];

    for (int i = 0;i< 10;i++){
        printf("Enter a number - ");
        scanf("%d",&arr1[i]);
    }

    for (int i = 0;i< 10;i++){
        arr2[i] = arr1[i];
    }

    for (int i = 0;i< 10;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for (int i = 0;i< 10;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
