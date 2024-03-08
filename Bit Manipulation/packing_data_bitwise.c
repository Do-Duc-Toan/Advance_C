#include<stdio.h>
#include<stdlib.h>
#define MASK 1
long long decimal_to_binary(int n);

int main()
{
    int n, pos, i;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("Binary n = %d\n", decimal_to_binary(n));
    printf("Enter nth bit to check and set: ");
    scanf("%d", &pos);
    i = (n >> pos) & MASK;
    printf("the state of this bit is %d\n", i);
    printf("Number before setting %dth bit:  %d\n", pos, n);
    if (i==0){
        n = (MASK << pos) | n;
        printf("Setting successfully\n");
        printf("Number after setting %dth bit:  %d", i, n);
    }
    else printf("This bit is set\n");
    return 0;
}