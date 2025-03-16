#include <stdio.h>
#include <stdlib.h>
void reserch(int a[],int n,int *max,int *min)
{

    for(int i=0;i<n;i++)
    {
        (*max) = a[0];
        if(a[i]>*max)
            (*max) = a[i];
    }

    for(int i=0;i<n;i++)
    {
        (*min) = a[0];
        if(a[i]<*min)
            (*min) = a[i];
    }
}
int main()
{
    int n,*max,*min;
printf("Nhap vao so phan tu: \n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    printf("a[%d]: ",i);
    scanf("%d",&a[i]);
}
printf("In day so:\n");
for(int i=0;i<n;i++)
{
    printf(" %d ",a[i]);
}
reserch(a,n,&max,&min);
printf("Max: %d\nMin: %d",max,min);
}
