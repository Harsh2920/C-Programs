#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],Esum = 0,Osum = 0;

    for (int i = 0;i<10;i++){
        printf("Enter a number - ");
        scanf("%d",&arr[i]);

        if (arr[i] == 0){
            continue;
        }

        if(arr[i] % 2 == 0){
            Esum += arr[i]; 
        } 
        else {
            Osum += arr[i];
        }
    }

    printf("%d \n",Esum);
    printf("%d",Osum);

    return 0;
}