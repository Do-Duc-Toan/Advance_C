#include<stdio.h>

int main()
{
    FILE *fp = NULL;
    char c = '/0';

    fp = fopen("getchar.c","r");

    if (fp == NULL) {
        printf("Couldnt open the file");
        exit(0);
    }
    printf("Reading the file: \n");
    while (1)
    {
        c = fgetc(fp); //can use getc(fp) here
        if (c == EOF) {
            break;
        }
        printf("%c", c);
    }
    printf("\nClosing the file");
    fclose(fp);
    return 0;
}