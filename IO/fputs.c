#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100];
    FILE *p = NULL;
    p = fopen("my_file.txt", "w");
    if (p == NULL) {
        printf("Couldnt open the file");
        exit(0);
    }
    fputs("Hello, Where are u", p);
    fclose(p);
    return 0;
}