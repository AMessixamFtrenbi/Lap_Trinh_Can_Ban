/*Cau 1:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int Tong=0;
    printf("Nhap vao man hinh 10 phan tu: \n");
    for(int i=0;i<10;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        Tong += a[i];
    }
    printf("Tong cua 10 SO NGUYEN bat ki la: %d",Tong);
    return 0;
}

*/
/*Cau 2:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Un=0;
    int n;
    printf("Nhap vao man hinh so n: ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Khong phai SNT !!\n");
    }
    else
    {
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
           Un += 1;
    }
    }
     if(Un >= 2)
            printf("Khong phai SNT !!\n");
    else
            printf("So Nguyen To !!\n");
}*/
/*Cau 3:
#include<stdio.h>
int main()
{
    int i=2;
    printf("Cac so chan tu 1 den 20 la: \n");
    do
        {
            printf("%d ",i);
            i+=2;
        }
        while
            (i<=20);
}*/
/*Cau 4:
#include<stdio.h>
int main()
{
    int i=1;
    int Tong=0;
    printf("Tong cua cac so le tu 1 den 100 la: ");
    do
    {
        Tong += i;
        i+=2;
    }
    while(i<100);
    printf("%d",Tong);
}*/
/*Cau 5:
#include<stdio.h>
int main()
{
    int n;
    printf("Nhap vao man hinh so n: \n");
    scanf("%d",&n);
    printf("Cac uoc cua n la: ");
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf(" %d ",i);
    }
}*/
/*Cau 6.1:
#include<stdio.h>
int ucln(int x, int y)
{
    while(y!=0)
    {
        int temp = y;
            y = x%y;
            x = temp;
    }
}
int main()
{
    int x,y;
    printf("Nhap vao man hinh hai so x,y: \n");
    scanf("%d%d",&x,&y);
int bcnn = (x*y)/ucln(x,y);
printf("UCLN: %d\n",ucln(x,y));
printf("BCNN: %d\n",bcnn);
}*/
/*Cau 6.2:
#include<stdio.h>
int main()
{
    int n;
    int SUM =0;
    printf("Nhap vao man hinh so can kiem tra: \n");
    scanf("%d",&n);
    if(n>1)
    {
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            SUM += i;
    }
    if(SUM==2*n)
        printf("So hoan hao !!");
    else
        printf("Khong phai so hoan hao !!");
    }
    else
        printf("Khong thuc hien duoc !!");
}*/
/*Cau 7:
#include<stdio.h>
int main()
{
    int n;
    float S = 0;
    printf("Nhap vao so n: \n");
    scanf("%d",&n);
    for( int i=1;i<=n;i++)
    {
        S += (float)1/ i;
    }
    printf("S = %.3lf",S);
}*/
/*Cau 8:
#include<stdio.h>
int main()
{
    int n;
    int Nhan = 1;
    printf("Nhap vao man hinh gia tri cua n: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        Nhan = Nhan*i;

    }
    printf("%d! = %d",n,Nhan);
}*/
/*Cau 9:
#include<stdio.h>
long long factorial(int n)
{
    long long fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}
double sum_factorial(int n)
{
    double sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum += (double) 1/factorial(i);
    }
    return sum;
}
int main()
{
    int n;
    printf("Nhap vao man hinh so n: ");
    scanf("%d",&n);
    double S = sum_factorial(n);
    printf("S = %.3lf",S);
}*/
/*Cau 10:
#include<stdio.h>
long long fibonaci(int n)
{
    int i;
    if( i==1 || i==2)
        printf(" Gia tri : 1");
    else
    {
        long long a=1, b=1,temp;
        for(i=3;i<=n;i++)
        {
        temp = a+b;
        a = b;
        b = temp;
        }
        return b;
    }
}
int main()
{
    int n;
    printf("Nhap vao man hinh gia tri n: ");
    scanf("%d",&n);
    long long S = fibonaci(n);
    printf("f(%d) = %lld",n,S);
}
*/
/*Cau 11:
#include<stdio.h>

void toBinary(int n)
{
    int binary[32];
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("He co so 2: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void toOctal(int n)
{
    int octal[32];
    int i = 0;
    while (n > 0)
    {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("He co so 8: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void toHexadecimal(int n)
{
    int hexadecimal[32];
    int i = 0;
    while (n > 0)
    {
        int remainder = n % 16;
        if (remainder < 10)
        {
            hexadecimal[i] = remainder + '0';
        }
        else
        {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        n = n / 16;
        i++;
    }
    printf("He co so 16: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Nhap vao man hinh so n: \n");
    scanf("%d", &n);
    toBinary(n);
    toOctal(n);
    toHexadecimal(n);
    return 0;
}*/
/*Cau 12:
#include<stdio.h>
#include<math.h>
int main()
{
    double x, eps, n, x1, sum = 0;
    printf("Nhap vao man hinh gia tri cua x: \n");
    scanf("%lf",&x);
    printf("Nhap vao man hinh gia tri can kiem tra: \n");
    scanf("%lf",&eps);
    x1 = x*3.14/180;
    int i=0;
    n = x1;
    do
    {
        sum += n;
        i++;
        n *= -x1*x1/((2*i)*(2*i+1));
    }
    while(n>eps);
    printf("Sin(%lf)= %lf",x,sum);
}*/
/*Cau 13:
#include<stdio.h>
#include<math.h>
int main()
{
    double x, eps, term, sum = 1;
    printf("Nhap vao man hinh giua tri cua x: \n");
    scanf("%lf",&x);
    printf("Nhap vao man hinh gia tri can kiem tra: \n");
    scanf("%lf",&eps);
    int i = 1;
    term = 1 ;
    do
    {
        sum += term;
        i++;
        term *= x/i;
    }
    while(term>eps);
    printf("e mu %lf = %lf",x,sum);
}*/
/*Cau 14:
#include<stdio.h>
int main()
{
    double G, G1,grow;
    printf("GDP nam 2014 la: \n");
    scanf("%lf",&G1);
    printf("Ty le tang truong la: ");
    scanf("%lf",&grow);
    int n = 2014;
    G = G1;
    printf("Nam       GDP\n");
    printf("%d     %.3lf\n",n,G);
    while(G < 2 * G1)
    {
        n++;
        G += G*(grow/100);
        printf("%d     %.3lf\n",n,G);

    }
}*/
//Cau 15:
#include<stdio.h>
int main()
{
    int t,n,T;
    printf("Nhap vao so tien gui: \n");
    scanf("%d",&t);
    printf("Gui bao nhieu thang: \n");
    scanf("%d",&n);
    T = t;
    for(int i=0;i<n;i++)
    {
    T += t*45/1000;
    }
    printf(" Sau khi gui %d thi sau %d thang nhan duoc: %d",t,n,T);
}





