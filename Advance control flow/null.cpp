#include <stdio.h>

int main()
{

    int row, space, i, j;
    row = 4;
    space = row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            while (space)
            {
                printf(" ");
                space--;
            }
            printf("* ");
        }
        printf("\n");
        space = row - i - 1;
    }
}