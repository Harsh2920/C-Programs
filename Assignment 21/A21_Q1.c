#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    int length = 0;
    int  i = 0;
    while (1){
        if (str[i] == '\0'){
            break;
        } else {
            length+=1;
        }
        i++;
    }
    printf("%d",length);
    return 0;
}