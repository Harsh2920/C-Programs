#include <stdio.h>
int primef(int n);
 int main()
{
    int n;
    printf("Enter a number - ");
    scanf("%d",&n);
    
    primef(n);
    return 0;
}
 
int primef(int n)
{
    int i;
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (i = 3; i <= n*n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
     if (n > 2)
        printf("%d ", n);
}

