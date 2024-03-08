#include<stdio.h>
extern int i=200; //global variable
void foo();

int main()
{
    printf("%i\n", i);
    foo();
    printf("%i" , i);
    return 0;
}
