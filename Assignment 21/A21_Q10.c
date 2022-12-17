#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Assuming that String is Not Empty.
    char str[] = "Hello World";
    int length = sizeof(str)/sizeof(str[0]);

    int count = 1;

    for (int i = 0;i<length;i++){
        if (str[i] == ' '){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}