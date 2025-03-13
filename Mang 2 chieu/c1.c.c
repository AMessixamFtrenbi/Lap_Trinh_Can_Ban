#include <stdio.h>
#include <stdlib.h>

void printMatrix(int a[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Nhap vao truong hop: \n ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("TH1\n");
        int a1[3][3]=
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        printMatrix(a1);

        }
     else if(n==2)
     {
         printf("TH2\n");
         printf("Nhap cac so lieu vao man hinh: \n");
         int a2[3][3];
         for(int i=0;i<3;i++)
         {
             for(int j=0;j<3;j++)
             {
                 printf("Nhap phan tu a%d%d",i,j);
                 scanf("%d",&a2[i][j]);
             }
         }
         printMatrix(a2);

     }
     else
     {
         printf("Khong co truong hop nao !!");
     }
}

