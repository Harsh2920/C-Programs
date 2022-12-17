#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Hello";
    int length = sizeof(str)/ sizeof(str[0]);
    
    for (int i = length-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}