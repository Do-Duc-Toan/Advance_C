#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXL 100

/*int count_word(char *s) {
    int count = (s[0] != ' ');
    for (int i=0; i<strlen(s)-1; i++) {
        if (s[i]==' ' && s[i+1]!=' ') {
            count++;
        }
    }
    return count;
}*/

int main(int argc, char **argv)
{
    FILE *ptr;
    char c = '\0';
    int count_w = 0, count_c = 0;

    if (argc == 1) {
        ptr = stdin;
    }
    else {
        char input_file[MAXL];
        strcpy(input_file, argv[1]);

        ptr =  fopen(input_file, "r");
        if (ptr == NULL) {
            printf("Cannot open the file");
            exit(0);
        }
    }
    c = getc(ptr);
    while (c != EOF) { 
            if (c==' ' || c=='\n') {
            count_w++;
        }
            else {
            count_c++;
        }
    c = getc(ptr);
    }
    
    printf("The number of words = %d\n", count_w);
    printf("The number of characters = %d", count_c);
    
    fclose(ptr);
    return 0;
}
