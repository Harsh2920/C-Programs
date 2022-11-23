#include<stdio.h>
void sort(int ar1[5],int arr2[5]);
void desSort(int arr1[5],int arr2[5]);
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

    desSort(arr1,arr2);

    sort(arr1,arr2);

    return 0;
}
void sort(int arr1[5],int arr2[5]){
    int ans[10];

    for (int i = 0;i<5;i++){
        ans[i] = arr1[i];
        ans[i+5] = arr2[i];
    }

    for (int i = 0;i<10;i++){
        for (int j =1;j<10;j++){
            if (ans[j] < ans[j-1]){
                int temp = ans[j];
                ans[j] = ans[j-1];
                ans[j-1] = temp;
            }
        }
    }

    for (int i = 0;i<10;i++){
        printf("%d ",ans[i]);
    }
}

void desSort(int arr1[5],int arr2[5]){
    for (int i = 0;i<5;i++){
        for (int j =1;j<5;j++){
            if (arr1[j] > arr1[j-1]){
                int temp = arr1[j];
                arr1[j] = arr1[j-1];
                arr1[j-1] = temp;
            }
        }
    }

    for (int i = 0;i<5;i++){
        for (int j =1;j<5;j++){
            if (arr2[j] > arr2[j-1]){
                int temp = arr2[j];
                arr2[j] = arr2[j-1];
                arr2[j-1] = temp;
            }
        }
    }
}
