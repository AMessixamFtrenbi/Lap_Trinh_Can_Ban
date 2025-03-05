/*Cau 1:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, mu_2, mu_3,mu_4;
    printf("Nhap vao man hinh gia tri cua x: ");
    scanf("%d",&x);
    mu_2 = pow(x,2);
    mu_3 = pow(x,3);
    mu_4 = pow(x,4);
    printf("Gia tri cua x^2: %d\n",mu_2);
    printf("Gia tri cua x^3: %d\n",mu_3);
    printf("Gia tri cua x^4: %d\n",mu_4);

}*/

/*Cau 2:
#include<stdio.h>
int main()
{
int d,m,y;
printf("Nhap vao man hinh ngay, thang, nam: ");
scanf("%d%d%d",&d,&m,&y);
if(d<=31 && m<=12 && m!=2)
{
    printf("%d / %d / %d",d,m,y);
}
else if(d<=29 && m==2 && y%4==0)
{
    printf("%d/%d/%d",d,m,y);
}
else if(d<=28&&m==2&&d%4!=0)
{
    printf("%d/%d/%d",d,m,y);
}
else
    printf("Khong duoc!!");
}*/

/*Cau 3
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,Cong,Tru,Nhan;
    float Chia;
    printf("Nhap vao man hinh so a,b: ");
    scanf("%d%d",&a,&b);
    Cong = a+b;
    Tru = a-b;
    Nhan = a*b;
    Chia = (float)a/b;
    printf("%d\n%d\n%d\n%.3lf\n",Cong,Tru,Nhan,Chia);
}*/

/*Cau 4
#include<stdio.h>
int main()
{
    int R;
    float pi=3.14,S,V;
    printf("Nhap vao man hinh ban kinh R:");
    scanf("%d",&R);
    S =(float)4*pi*R*R;
    V = (float)4/3*R*R*R;
    printf("%.3lf\n%.3lf",S,V);
}*/
