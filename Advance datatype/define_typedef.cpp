#include<stdio.h>
#define MAXIMUM 1000
#define TWO_PI 2.0*3.1415
typedef int *pointer;
#define int_pointer int
int_pointer shushi, udon;//same as int sushi, udon;
const float r = 3.45;
int main()
{
    pointer p; //same as int *p;
    pointer *a; //same as **a;
    pointer myarray[MAXIMUM]; //same as *myarray[1000];
    shushi = 5;
    printf("%f \n", TWO_PI * r);
    printf("%d", shushi);
    return 0;
}