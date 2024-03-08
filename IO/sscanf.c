#include<stdio.h>
#include<string.h>

int main()
{
    char *s = "Toan Stupid 20";
    char name[20], character[20]; 
    int age=0, re=0;
    re = sscanf(s, "%s %s %d", name, character, &age); //returns the number of items read from the string

    printf("Name: %s\n", name);
    printf("Character: %s\n", character);
    printf("%d\n", age);
    printf("%d", re);
    return 0;
}