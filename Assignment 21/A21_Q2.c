#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str1[] = "Hello";
    char str2[] = "World";

    int length = sizeof(str1) / sizeof(str1[0]);

    for (int i = 0;i<length;i++){
        if (str1[i] != str2[i]){
            printf("Strings are Not Equal");
            break;
        } else {
            printf("Strings are Equal");
            break;
        }
    }
    return 0;
}