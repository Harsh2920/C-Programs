#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10];
    int i,j,k;
    for (i=0;i<10;i++){
        printf("Enter age - ");
        scanf("%d",&arr[i]);
    }
        for (j=0;j<9;j++){
            for (k=0;k<10;k++){
                if (arr[k] > arr[k+1]){
                    int temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
            }
        }
    }
    for (j=0;j<10;j++){
        printf("%d \n",arr[j]);
    }
    return 0;
}