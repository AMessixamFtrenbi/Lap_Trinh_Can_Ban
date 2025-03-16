#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
printf("Nhap vao so phan tu: \n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    printf("a[%d]: ",i);
    scanf("%d",&a[i]);
}
printf("Day so vua nhap la: \n");
for(int i=0;i<n;i++)
      {
printf(" %d ",a[i]);
      }
printf("\n");
for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {

        if(a[j]>a[j+1])
        {
            int *l = &a[j];
            int *b = &a[j+1];
            int temp = (*l);

            (*l) = (*b);
            (*b) = temp;
        }
        }
    }
    printf("Day so sau khi duoc sap xep !!\n");
for(int i=0;i<n;i++)
    {
         printf(" %d ",a[i]);
    }
}
