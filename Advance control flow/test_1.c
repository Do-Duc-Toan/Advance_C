#include<stdio.h>

int main()
{
    int row, space, i, j;
    printf("Choose the height of the tree(line): ");
    scanf("%d", &row);
    space = row;
    for (i=1; i<=row; i++) {
        for (j=1; j<=i; j++) {
            while (space)
                {
                    printf(" ");
                    space--;
                }
            printf("* ");
        }
        printf("\n");
        space = row - i;
    }
    return 0;
}