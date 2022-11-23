#include<stdio.h>

void sort(int arr[]);
void swap(int arr[] , int first, int second);

int main(int argc, char const *argv[])
{
    int arr[] = {5,3,2,1,4};
    sort(arr);
    for (int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int arr[]){
    for (int i = 0;i < 5;i++){
        for (int j = 1;j<5;j++){
            if (arr[j] < arr[j-1]){
                swap(arr,j,j-1);
            }
        }
    }
}
void swap(int arr[] , int first, int second){
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}