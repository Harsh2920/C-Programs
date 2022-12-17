#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    int length = sizeof(str) / sizeof(str[0]);
    
    for (int i = 0;i<length;i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += (char) 32;
        }
    }

    printf("%s",str);
    return 0;
}