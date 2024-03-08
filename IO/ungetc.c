#include<stdio.h>
#include <ctype.h>
int main()
{
    char c = 0;
    while (isspace(c = (char)getchar())); //Read as long as there are space
    {
        ungetc(c, stdin);
        printf("%c", c);
    }
    return 0;    
}