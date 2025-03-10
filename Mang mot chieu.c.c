/*Cau 1:
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[10];
 for(int i=0;i<10;i++)
 {
     printf("a[%d]: ",i);
     scanf("%d",&a[i]);
 }
     printf("Day so vua nhap la: ");
 for(int i=0;i<10;i++)
 {
     printf(" %d ",a[i]);
 }
 }*/
/* Cau 2:
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[10];
 for(int i=0;i<10;i++)
 {
     printf("a[%d]: ",i);
     scanf("%d",&a[i]);
 }
     printf("Day so vua nhap la: ");
 for(int i=9;i>=0;i--)

     printf(" %d ",a[i]);
     return 0;

 }*/
/* Cau 3:
#include<stdio.h>
#include<stdlib.h>

void so_duong(int a[], int n, int *count_duong, int *sum_duong)
{
    *count_duong = 0;
    *sum_duong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            (*count_duong) += 1;
            *sum_duong += a[i];
        }
    }
}

void so_am(int a[], int n, int *count_am, int *sum_am)
{
    *count_am = 0;
    *sum_am = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            (*count_am) += 1;
            *sum_am += a[i];
        }
    }
}

int main()
{
    int n, sum = 0;
    int sum_duong = 0, sum_am = 0;
    int count_duong = 0, count_am = 0;
    double TBC_duong, TBC_am, TBC;

    printf("Nhap vao man hinh so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    TBC = (double)sum / n;
    so_duong(a, n, &count_duong, &sum_duong);
    so_am(a, n, &count_am, &sum_am);
    if (count_duong == 0)
        printf("Khong co so duong nao ca !!\n");
    else
        TBC_duong = (double)sum_duong / count_duong;
    if (count_am == 0)
        printf("Khong co so am nao ca !!\n");
    else
        TBC_am = (double)sum_am / count_am;
    printf("Tong cua tat ca cac so trong mang la: %d\n", sum);
    printf("Tong cua cac so nguyen duong: %d\n", sum_duong);
    printf("Tong cua cac so nguyen am: %d\n", sum_am);
    printf("Trung Binh Cong cua ca mang la: %.3lf\n", TBC);
    printf("Trung Binh Cong cua cac so nguyen duong la: %.3lf\n", TBC_duong);
    printf("Trung Binh Cong cua cac so nguyen am la: %.3lf\n", TBC_am);
}*/
/*Cau 4:
#include<stdio.h>
void number_max(int a[],int n,int *max, int *l)
{
    *max = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] > *max)
        {
         (*max) = a[i];
        (*l) = i+1 ;
        }
    }

}
void number_min(int a[], int n,int *min, int *b)
{
    *min = a[0];
    for(int i=0;i<n;i++)
    {

        if(a[i] < *min)
        {
            (*min) = a[i];
            (*b) = i+1 ;
        }
    }
}

int main()
{
    int n,max,min,l,b;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    number_max(a,n,&max,&l);
    number_min(a,n,&min,&b);
    printf("So lon nhat cua day la : %d\n",max);
    printf("Vi tri cua so lon nhat la: %d\n",l);
    printf("So be nhat cua day la: %d\n",min);
    printf("Vi tri cua so be nhat la: %d\n",b);
}*/
/* Cau 5:
#include<stdio.h>
void count_x(int a[], int n, int x, int *count)
{
    (*count) = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            (*count) +=1;
    }
}
int main()
{
    int n,x,count;
    printf("Nhap vao man hinh so phan tu cua day: \n");
    scanf("%d",&n);
    printf("Nhap vao man hinh phan tu x: \n");
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    count_x(a,n,x,&count);
    printf("Phan tu %d xuat hien %d lan !!\n",x,count);

}*/
/*Cau 6:
#include<stdio.h>
void change(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
            a[i] = 0;
    }
}
int main()
{
    int n,temp;
    printf("Nhap vao man hinh so phan tu cua day: \n");
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
    change(a,n);
    printf("Day so sau khi chinh sua la: \n");
    for(int i=0;i<n;i++)
    {
    printf(" %d ",a[i]);
    }
}*/
/*Cau 7:
#include<stdio.h>
int main()
{
    int n;
    printf("Nhap vao man hinh so phan tu cua mang: \n");
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
    printf("Day so sau khi duoc sap xep la: \n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
        int temp = a[j];
        if(a[j]>a[j+1])
        {
            a[j] = a[j+1];
            a[j+1] = temp;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
    printf(" %d ",a[i]);
    }
}*/
//Cau 8:
#include <stdio.h>
#include <stdlib.h>
void mang(int a1[], int n, int a2[], int m, int *resultSize, int result[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
        {
        if (a1[i] < a2[j])
            result[k++] = a1[i++];
        else
            result[k++] = a2[j++];
        }
    while (i < n)
        {
        result[k++] = a1[i++];
        }
    while (j < m)
        {
        result[k++] = a2[j++];
        }
*resultSize = k;
}
int main() {
    int m, n;
    int i = 0, j = 0;
    printf("Nhap vao man hinh so phan tu cua mang thu nhat: ");
    scanf("%d", &n);
    printf("Nhap vao man hinh so phan tu cua mang thu hai: ");
    scanf("%d", &m);
    int a1[n], a2[m];
    int result[n + m];
    int resultSize;
    printf("Nhap cac phan tu cua mang thu nhat :\n");
    for (i = 0; i < n; i++)
    {
        printf("a1[%d]: ", i);
        scanf("%d", &a1[i]);
    }
    printf("Nhap cac phan tu cua mang thu hai:\n");
    for (j = 0; j < m; j++)
    {
        printf("a2[%d]: ", j);
        scanf("%d", &a2[j]);
    }
    printf("Day so thu nhat la: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n");
    printf("Day so thu hai la: ");
    for (j = 0; j < m; j++)
    {
        printf("%d ", a2[j]);
    }
    printf("\n");
    mang(a1, n, a2, m, &resultSize, result);
    printf("Mang sau khi ghep: ");
    for (i = 0; i < resultSize; i++)
    {
        printf("%d ", result[i]);
    }
}




