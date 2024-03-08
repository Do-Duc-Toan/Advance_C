#include<stdio.h>
#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))

int main()
{
    int x;
    scanf("%d", &x);
    int s = SQUARE(x);
    printf("%d\n", s);
    int c = CUBE(x);
    printf("%d", c);
    return 0;
}