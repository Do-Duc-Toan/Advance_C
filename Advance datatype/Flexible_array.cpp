#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct s {
    int array_size;
    int array[];
};

int main()
{
    int desired_size = 5;
    struct s *ptr;
    ptr = (s*)malloc(sizeof(struct s) + desired_size*sizeof(int));
    /*The size of struct s is evaluated for the size of all the members int struct s except that array, except this flexible array.
And then desired size time sizeof int is allocating memory for the flexible array*/
}