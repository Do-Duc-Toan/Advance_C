#include<stdio.h>

int main()
{
    size_t rows = 0;
    size_t columns = 0;
    printf("enter the number of rows:  ");
    scanf("%d", &rows);
    printf("enter the number of colums:  ");
    scanf("%d", &columns);
    int a[rows][columns];
    for (int i=0; i<rows; i++)
        for (int j=0; j<columns; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}