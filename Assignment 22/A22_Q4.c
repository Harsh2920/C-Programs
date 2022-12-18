#include<stdio.h>
void vowels_consonants(char *ptr,int length);
int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    int length = sizeof(str)/sizeof(str[0]);

    vowels_consonants(str,length);
    return 0;
}
void vowels_consonants(char *ptr,int length){
    char vowels[] = "aeiouAEIOU";
    int length2 = sizeof(vowels) / sizeof(vowels[0]);

    int Vcount = -1,Ccount = 0,Scount = 0;

    for (int i = 0;i<length;i++){
        for (int j = 0;j<length2;j++){
            if (ptr[i] == vowels[j]){
                Vcount +=1;
            }
        }
        if (ptr[i] == ' '){
                Scount +=1;
            } 
        }
    Ccount = (length - 1) - Vcount - Scount;
    printf("%d\n",Vcount);
    printf("%d\n",Ccount);
}