#include<stdio.h>
int smallest(int arr[]);
int main(int argc, char const *argv[])
{
    int arr[] = {2,33,11,5,7};
    printf("%d",smallest(arr));
    return 0;
}
int smallest(int arr[]){
    int min = arr[0];
    for (int i = 0;i<5;i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
