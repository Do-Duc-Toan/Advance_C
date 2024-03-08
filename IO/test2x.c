#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void convert_case (FILE *ptr, char *path) {

}

int main(int argc, char **argv) 
{
/*Open source file*/
    char path[100];
    char c = '\0';
    FILE *ptr;

    if (argc == 1) {
        ptr = stdin;
    }
    else {
        strcpy(path, argv[1]);
        ptr = fopen(path, "r");
        if (ptr = NULL) {
            printf("Cannot open the file!!");
            exit(0);
        }
    }   

    c = fgetc(ptr);
    while (c != EOF) {
        
    }
    
}