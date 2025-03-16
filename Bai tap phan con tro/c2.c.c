#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[10];
printf("Nhap vao 10 phan tu: \n");
for(int i=0;i<10;i++)
{
    printf("a[%d]: ",i);
    scanf("%d",&a[i]);
}
printf("In day so:\n");
for(int i=0;i<10;i++)
{
    printf(" %d ",a[i]);
}
}
