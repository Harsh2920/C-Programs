#include<stdio.h>
int greatest(int arr[]);
int main(int argc, char const *argv[])
{
    int arr[] = {2,33,11,5,7};
    printf("%d",greatest(arr));
    return 0;
}
int greatest(int arr[]){
    int max = arr[0];
    for (int i = 0;i<5;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}