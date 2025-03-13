#include <stdio.h>
#include <stdlib.h>

void printMatrix(int a[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void xoayMatrix(int a[3][3])
{
    for(int j = 0; j < 3; j++)
    {
        printf("%d ", a[0][j]);
    }
    for(int i = 1; i < 3; i++)
    {
        printf("%d ", a[i][2]);
    }
    for(int j = 1; j >= 0; j--)
    {
        printf("%d ", a[2][j]);
    }
    for(int i = 1; i > 0; i--)
    {
        printf("%d ", a[i][0]);
    }
}

int main()
{
    int a[3][3] =
    {
        {1, 2, 3},
        {8, 9, 4},
        {7, 6, 5}
    };

    printf("Ma tran A: \n");
    printMatrix(a);
    printf("Ma tran xoay:\n");
    xoayMatrix(a);

}

