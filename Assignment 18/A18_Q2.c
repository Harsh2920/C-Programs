#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],sum = 0;
    float avg;

    for (int i = 0;i<10;i++){
        printf("Enter a number - ");
        scanf("%d",&arr[i]);

        sum += arr[i];
    }
    avg = (float) sum/10;

    printf("%f",avg);

    return 0;
}