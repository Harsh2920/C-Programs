#include<stdio.h>
int findmax(int *ptr1,int *ptr2);
int main(int argc, char const *argv[])
{
    printf("%d",findmax(20,40));
    return 0;
}
int findmax(int *ptr1,int *ptr2){
    int max = 0;
    if (ptr1 > ptr2){
        max = ptr1;
    } else {
        max = ptr2;
    }
    return max;
}