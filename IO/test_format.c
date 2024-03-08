#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check_prime(int n) {
    if (n==0 || n==1) {
        return 0;
    }
    for (int i=2; i*i<=n; i++) {
        if (n%i == 0) return 1;
    }
    return 0;
}

int main()
{
    FILE *fp = NULL;
    fp = fopen("numbers.txt", "r");
    int num;
    if (fp == NULL) {
        printf("Cannot open the file!!");
        exit(0);
    }
    int success = 0;
    success = fscanf(fp, "%d", &num);
    while (success)
    {
        if ((num>0) && (check_prime(num)==0)) {
            printf("%d is a prime number\n", num);
        }
        else if (num%2 == 0) {
            printf("%d is an even number\n", num);
        }
        else printf("%d is an odd number\n", num);
        success = fscanf(fp, "%d", &num);
    }   
    fclose(fp);
    return 0;
}