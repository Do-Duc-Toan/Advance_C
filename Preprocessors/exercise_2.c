#include<stdio.h>

#define SUM(a, b) ((a)+(b))
int main()
{
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    int s = SUM(a, b);
    printf("sum = %d", s);
    return 0;
}