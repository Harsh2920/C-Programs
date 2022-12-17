#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    int length = sizeof(str)/sizeof(str[0]);

    int freq = 0;
    char ch;
    printf("Enter character to find Frequency - ");
    scanf("%c",&ch);

    for (int i = 0;i<length;i++){
        if (str[i] == ch){
            freq +=1;
        }
    }
    printf("%d",freq);
    return 0;
}