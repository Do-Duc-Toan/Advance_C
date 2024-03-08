#include<stdio.h>

#define declaresort(prefix, type)\
static int _declaresort_ ## prefix ## _compare(const void *a, const void *b)\
{\
    const type *aa;\
    const type *bb;\
    aa = a; bb = b;\
    if(aa < bb) return -1;\
    else if (bb < aa) return 1;\
    else return 0;\
}\
\
void \
prefix ## _sort(type *a, int n)\
{\
    qsort(a, sizeof(type), n, _declaresort_ ## prefix ## _compare);\
}\

#include<stdlib.h>
declaresort(int, int)
int main(int argc, char **argv)
{
    int x;
    printf("Enter x = ");
    scanf("%d", &x);
    int *a=&x;
    int n;
    printf("Enter n = ");
    scanf("%d, &n");

    int_sort(a,n);
    return 0;
}