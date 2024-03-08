#include<stdio.h>

int main()
{
    char string[] = "Hello, \nGood morning";
    int i = 0;
    while(string[i] != '\0') {
        if (string[i] != '\n') {
            putchar(string[i]);
        }
        i++;
    }
    return 1;
}

