#include<stdio.h>
#include<stdlib.h>

void up_and_down(int n) {
    printf("Level is %d, located at %p \n", n, &n);
    if (n<4) {
        up_and_down(n+1);
    }
    printf("LEVEL is %d, located at %p \n", n, &n);
}

int main()
{
    up_and_down(1);
    return 0;
}