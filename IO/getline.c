#define _GNU_SOURCE
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>


int main()
{
    char *buffer = NULL;
    size_t bufsize = 32;
    size_t characters;

    printf("Type sth: ");
    buffer = (char*)malloc(bufsize * sizeof(char));
    if (buffer == NULL) {
        exit(1);
    }
    characters = getline(&buffer, &bufsize, stdin);
    printf("%zu characters were read \n", characters);
    printf("U type: %s\n", buffer);
    return 0;
}