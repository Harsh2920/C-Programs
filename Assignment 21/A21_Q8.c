#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    int length = sizeof(str)/sizeof(str[0]);
    char copy[length];

    for (int i = 0;i<length;i++){
        copy[i] = str[i];
    }

    printf("Original String - %s\n",str);
    printf("Copied String - %s",copy);
    return 0;
}