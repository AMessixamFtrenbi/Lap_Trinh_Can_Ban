#include <stdio.h>
#include <stdlib.h>
#define rows1 2
#define cols1 3
#define rows2 3
#define cols2 2
void multiplyMatrix(int a[rows1][cols1],int b[rows2][cols2],int c[rows1][cols2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<3;k++)
                {
                    c[i][j] +=a[i][k]*b[k][j];
                }
        }
    }
}
void printMatrix(int matrix[][cols2],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    int a[rows1][cols1] =
    {
        {1,2,3},
        {4,5,6}

    };
    int b[rows2][cols2] =
    {
    {1,2},
    {3,4},
    {5,6}

};
int c[rows1][cols2];
multiplyMatrix(a,b,c);
printf("Ma tran A:\n");
printMatrix(a,rows1,cols1);
printf("\n");
printf("Ma tran B: \n");
printMatrix(b,rows2,cols2);
printf("\n");
printf("2 Ma tran nhan voi nhau: \n ");
printMatrix(c,rows1,cols2);
}
