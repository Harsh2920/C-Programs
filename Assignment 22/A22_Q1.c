#include<stdio.h>
void swap(int *ptra,int *ptrb);
int main(int argc, char const *argv[])
{
    swap(30,20);
    return 0;
}
void swap(int *ptra,int *ptrb){
    int temp = ptra;
    ptra = ptrb;
    ptrb = temp;
    printf("%d %d",ptra,ptrb);
}