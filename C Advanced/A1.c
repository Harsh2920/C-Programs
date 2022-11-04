#include<stdio.h>
int main(int argc, char const *argv[])
{
     int i,j;
     int arr[5] = {12,5,8,16,2};
     for (i=0;i<4;i++){
          for (j=0;j<5;j++){
               if (arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }
          }
     }
     printf("Output is - ");
     for (i = 0;i<5;i++){
          printf("%d  ",arr[i]);
     }
     return 0;
}

