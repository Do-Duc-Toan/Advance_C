#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 41

int main()
{
    FILE *fp = NULL;
    char words[MAX];

    fp = fopen("data.txt", "a+");
    if (fp == NULL) {
        fprintf(stdout, "Can't open the file");
        exit(0);
    }
    puts("Enter words add to the file; press the #");
    puts("Key at the beginning of a line to terminate");
    
    while ((fscanf(stdin, "%40s", words)) && (words[0] != '#'))
    {
        fprintf(fp, "%s\n", words);
    }
    puts("Fie content");
    rewind(fp);
    while(fscanf(fp, "%s", words) != -1) {
        puts(words);
    }
    puts("Done");

    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file");
    }
    return 0;
}