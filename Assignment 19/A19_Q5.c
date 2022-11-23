#include<stdio.h>

void reverse(int arr[]);

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    reverse(arr);
    return 0;
}
void reverse(int arr[]){
    for (int i = 9;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
