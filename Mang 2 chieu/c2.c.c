#include <stdio.h>
#include <stdlib.h>
int m,n;
void InputMatrix(int **a,char* name)
{
    printf("Nhap cac thong so cua ma tran %s:(%dx%d) \n",name,m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Nhap phan tu %s%d%d: ",name,i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void printMatrix(int **a,char* name)
{
    printf("Nhap cac thong so cua ma tran %s:(%dx%d) \n",name,m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void AddMatrix(int **a1,int **a2,int **result)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i][j] = a1[i][j]+a2[i][j];
        }
    }
}

int main()
{

    printf("Nhap kich thuoc cua ma tran: \n");
    scanf("%d %d",&m,&n);
    printf("So hang: %d\n",m);
    printf("So cot: %d\n",n);
    int **a1 = (int**)malloc(m*sizeof(int*));
    int **a2 = (int**)malloc(m*sizeof(int*));
    int **result = (int **)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        a1[i] = (int*)malloc(n*sizeof(int *));
        a2[i] = (int*)malloc(n*sizeof(int *));
        result[i] = (int *)malloc(n*sizeof(int *));
    }
    InputMatrix(a1,"A");
    InputMatrix(a2,"B");
    AddMatrix(a1,a2,result);
    printMatrix(a1,"A");
    printMatrix(a2,"B");
    printMatrix(result,"A+B");
    for(int i=0;i<m;i++)
    {
        free(a1[i]);
        free(a2[i]);
        free(result[i]);
    }
    free(a1);
    free(a2);
    free(result);


}
