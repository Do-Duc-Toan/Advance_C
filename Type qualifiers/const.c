#include<stdio.h>

int main()
{
    const float *pf;//pf points to a const float value, its value can be changed(address)
    float * const pt; //pt is a constant pointer, the pointed value can be changeg bu not the addrss
    const float *const ptr; //both not be changed
    float const *pfc; // same the 1st one
    /*A constant anywhere to the left of the star makes the data constant.
    So a constant to the right of star makes the pointer itself constant.*/

}