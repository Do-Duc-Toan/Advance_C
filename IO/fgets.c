#include<stdio.h>
#include<string.h>

int main()
{
    char buf[250];
    int c = '\0';
    char *p = NULL;
    FILE *fp;
    fp = fopen("my_file.txt", "r");
    if (fgets(buf, sizeof(buf), fp)) {
        p = strchr(buf, '\n');
        if (p) {
            *p = '\0';
        }
        else {
        while (((c = getchar()) != '\n') && !feof(stdin) && !ferror(stdin));
        }
    }
    else {

    }
    printf("Buffer contains: %s\n", buf);
    return 0;
}