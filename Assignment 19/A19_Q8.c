#include <stdio.h>
void unique(int arr[],int length);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,8,10};
    int length = sizeof(arr)/sizeof(arr[0]);
    unique(arr,length);

}
void unique(int arr[],int length){
    int ans[length];
    int u;
    for(int i=0; i<length; i++)
    {
        u = 1;
        for(int j=i+1; j<length; j++)
        {
            if(arr[i] == arr[j])
            {
                u++;
                ans[j] = 0;
            }
        }
 
        if(ans[i] != 0)
        {
            ans[i] = u;
        }
    }
    for(int i=0; i<length; i++)
    {
        if(ans[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}