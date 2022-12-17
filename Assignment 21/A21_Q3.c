#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Umbrella";
    char vowels[] = "aeiouAEIOU";
    int length = sizeof(str) / sizeof(str[0]);
    int length2 = sizeof(vowels) / sizeof(vowels[0]);
    int count = -1;
    for (int i = 0;i<length;i++){
        for (int j = 0;j<length2;j++){
            if (str[i] == vowels[j]){
                count +=1;
            }
        }
    }
    printf("%d",count);
    return 0;
}