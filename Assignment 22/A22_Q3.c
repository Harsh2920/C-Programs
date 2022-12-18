#include<stdio.h>
int calStringLength(char *ptr,int Arraysize);
int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    int arrraysize = sizeof(str)/sizeof(str[0]);

    printf("%d",calStringLength(str,arrraysize));
    return 0;
}
int calStringLength(char *ptr,int Arraysize){

    int length = Arraysize;
    int count = 0;

    for (int i = 0;i<length;i++){
        if (ptr[i] == '\0'){
            break;
        } else {
            count +=1;
        }
    }
    return count;
}