#include<stdio.h>
void merge(int arr1[5],int arr2[5]);
int main(int argc, char const *argv[])
{
    int arr1[5];
    int arr2[5];

    for (int i = 0;i<5;i++){
        printf("Enter a number in 1st Array - ");
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    for (int i = 0;i<5;i++){
        printf("Enter a number in 2nd Array - ");
        scanf("%d",&arr2[i]);
    }

    merge(arr1,arr2);
    return 0;
}
void merge(int arr1[5],int arr2[5]){
    int ans[10];
    for (int i = 0;i<5;i++){
        ans[i] = arr1[i];
        ans[i+5] = arr2[i];
    }

    for (int i = 0;i<10;i++){
        printf("%d ",ans[i]);
    }
}