#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    puts(s);
    
}