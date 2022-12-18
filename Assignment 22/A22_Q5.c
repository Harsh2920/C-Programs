#include<stdio.h>
int sum(int *ptr,int length);
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("%d",sum(arr,length));
    return 0;
}
int sum(int *ptr,int length){
    int sum = 0;

    for (int i = 0;i<length;i++){
        sum += ptr[i];
    }
    return sum;
}