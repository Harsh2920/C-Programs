#include<stdio.h>
void reverse(int *ptr,int length);
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr,length);
    return 0;
}
void reverse(int *ptr,int length){

    for (int i = length - 1;i>=0;i--){
        printf("%d ",ptr[i]);
    }
}
