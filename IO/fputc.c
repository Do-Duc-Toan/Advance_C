#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    char c = '\0';
    ptr = fopen("my_file.txt", "w");
    if (ptr != NULL) {
        for (c = 'A'; c <= 'Z'; c++) {
            fputc(c, ptr);
        }
    fclose(ptr);
    }
    return 0;
}