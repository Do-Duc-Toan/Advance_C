#include<stdio.h>

int sum(int n){
    static int sum;
    sum = sum + n;
    return sum;
}
int main()
{
    printf("%d  ", sum(25));
    printf("%d  ", sum(15));
    printf("%d  ", sum(30));
    return 0;
}