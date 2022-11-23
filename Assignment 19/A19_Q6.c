#include<stdio.h>
void count(int arr[],int length);
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,1,4,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    count(arr,length);
    return 0;
}
void count(int arr[],int length){
    int ans[5];
    int c;
    for(int i=0; i<length; i++)
    {
        c = 1;
        for(int j=i+1; j<length; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                ans[j] = 0;
            }
        }

        if(ans[i]!=0)
        {
            ans[i] = c;
        }
    }
    for (int i = 0;i<5;i++){
        printf("%d ",ans[i]);
    }
}