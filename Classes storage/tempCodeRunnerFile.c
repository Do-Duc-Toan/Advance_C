#include<stdio.h>

void func_1(int my_scope){
    my_scope = 800;
    printf("2-my scope is my_scope = %d", my_scope);
}

int main()
{
    int my_scope;
    my_scope = 900;
    printf("1-my scope is my_scope = %d\n", my_scope);
    
    func_1(my_scope);
    return 0;
}


