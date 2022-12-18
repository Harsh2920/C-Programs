#include<stdio.h>
void reverse(char *ptr,int length);
int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    int length = sizeof(str)/sizeof(str[0]);

    reverse(str,length);
    return 0;
}
void reverse(char *ptr,int length){

    for (int i = length-1;i>=0;i--){
        printf("%c",ptr[i]);
    }
}