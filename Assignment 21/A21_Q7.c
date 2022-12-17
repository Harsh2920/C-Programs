#include<stdio.h>
int main(int argc, char const *argv[])
{
    // Space is Treated as Special Character.
    char str[] = "@#$Hello World123";
    int length = sizeof(str)/sizeof(str[0]);
    
    int ac = 0, dc = -1,sc = 0;

    for (int i = 0;i<length;i++){
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            ac+=1;
        } else if (str[i] >= '0' && str[i] <= '9999'){
            dc+=1;
        } else {
            sc+=1;
        }
    }

    printf("%d\n",ac);
    printf("%d\n",dc);
    printf("%d\n",sc);
    return 0;
}