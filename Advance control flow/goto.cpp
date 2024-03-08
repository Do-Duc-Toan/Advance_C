#include<stdio.h>

int main()
{
    int n, i, s=0;
    float av;
    const int limit = 5;
    for (i=0; i<limit; i++){
        printf("Enter the %d number = ", i);
        scanf("%d", &n);
        if (n < 0){
            goto jump;
        }
    s+=n;
    }
    jump: 
        av = (float)s/(i-1);
        printf("Sum = %d\n", s);
        printf("av = %.2f", av);
    return 0;
}