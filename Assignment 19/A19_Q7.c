#include<stdio.h>
void duplicate(int arr[],int length);
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,8,6,7,8,10,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    duplicate(arr,length);

    return 0;
}
void duplicate(int arr[],int length){
    int d = 0;
    for (int i = 0; i < length; i++)
	{
		for(int j = i + 1; j < length; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			d++;
				break;
			}
		}
	}
    printf("%d ",d);
}