#include<stdio.h>

int func(){
    static int count ;
    int localvar = 0;
    printf("automatic = %d, static = %d\n", localvar, count);
    count++;
    localvar++;
    return count;
}

int main()
{
    for (int i=0; i<5; i++) {
        func();
    }
    return 0;
}