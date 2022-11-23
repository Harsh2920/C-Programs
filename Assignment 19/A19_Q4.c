#include<stdio.h>

int duplicate(int arr[]);

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,2,3,4};
    int ans = duplicate(arr);
    printf("%d",ans);
    return 0;
}
int duplicate(int arr[]){
    int ans;
    for (int i = 0;i<5;i++){
        if (arr[i] == arr[i+1]){
            ans = arr[i];
        }
    }
    return ans;
}