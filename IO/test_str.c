#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    //printf("%s", argv[2]);
    if (argc < 3) {
        printf("Lack of input data");
        exit(0);
    }

    FILE *fp;
    char buf[256];
    char c = argv[1][0]; //if you say argv1, argv1 is actually a character pointer, right. 
                        //It's not a single character. So you can't say argv1 because we're only reading in a single character.
                        //. You can just specify you only want the first character in the string.
    fp = fopen(argv[2], "r");
    while (fgets(buf, sizeof(buf), fp) != NULL)
    {
        if (strchr(buf, c) != NULL) {
            puts(buf);
        }
    }
    fclose(fp);
    return 0;
}