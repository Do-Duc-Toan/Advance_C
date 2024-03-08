#include<stdio.h>
#define MYNUM 5
#define MYOTHER 2

int main() 
{
    #if MYNUM == 5 && MYOTHER == 2
    printf("Hello");
    #endif
    return 0;
}