/*Cau 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a,b,c,delta;
   float x,x1,x2;
   scanf("%d%d%d",&a,&b,&c);
   printf("Phuong trinh:%dx^2+%dx+%d\n",a,b,c);
   if(a==0&&b!=0)
   {
       x = -c/b;
       printf("Phuong trinh cos mot nghiem: %.3lf",x);
   }
   else
    {
        delta = b*b-4*a*c;
   if(delta<0)
   {
       printf("Phuong trinh vo nghiem !!");
   }
   else if(delta==0)
   {
    x=(float)-b/2*(a);
    printf("Phuong trinh co mot nghiem: %.3lf",x);
   }
   else
   {
       x1 = (float)(-b+sqrt(delta))/2*(a);
       x2 = (float)(-b-sqrt(delta))/2*(a);
       printf("Phuong trinh co hai nghiem:%.3lf\n %.3lf\n",x1,x2);
   }
    }

}*/

/*Cau 2:
    #include<stdio.h>
    #include<math.h>
    int main()
    {
        int a,b,c,d,e,f;
        float x,y,t;
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        printf("%dx + %dy = %d\n",a,b,c);
        printf("%dx + %dy = %d\n",d,e,f);
        t=(float)a/d;
        if(t==(float)b/e)
        {
            if(t==(float)c/f)
                printf("He phuong trinh co vo so nghiem !!");
            else if(t!=(float)c/f)
                printf("He phuong trinh vo nghiem !!");
        }
        else
        {
        y = (float)(c*d-f*a)/(b*d-e*a);
        x = (float)(c - b*y)/a;
        printf("x= %.3lf\n",x);
        printf("y= %.3lf\n",y);
        }
    }*/

/*    Cau 3:
        #include <stdio.h>
        #include <math.h>
        int main()
        {
            float x;
            printf("Nhap diem vao man hinh: ");
            scanf("%f",&x);
            if(x<5)
                printf("Yeu !!");
            else if(5<=x&&x<7)
                printf("TB !!");
            else if(7<=x&&x<8)
                printf("Kha !!");
            else if(8<=x&&x<9)
                printf("Gioi !!");
            else if(x>9)
                printf("XUAT SAC !!");
            return x;
        }*/

/*        Cau 4:
            #include<stdio.h>
            #include<math.h>
            int main()
            {
            float a,b,c;
            float S,C,p;
            printf("Nhap vao man hinh chi so cua tam giac:\n");
            scanf("%f%f%f",&a,&b,&c);
            if(a+b>c && a+c>b && b+c>a)
            {
                    C = a+b+c;
                    p = C/2;
                    S = sqrt(p*(p-a)*(p-b)*(p-c));
                    printf("Dien tich: %.3lf \nChu vi: %.3lf\n",S,C);

                if(a==b && b==c)
                    printf("Tam giac deu !!\n");
                else if(S==a*c/2&&a==c||S==b*c/2&&b==c||S==a*b/2&&a==b)
                    printf("Tam gia vuong can !!");
                else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
                    printf("Tam giac vuong !!\n");
                else if(a==b||b==c||a==c)
                    printf("Tam giac can !!\n");
                else
                    printf("Tam giac thuong !!\n");

            }
            else
                printf("Khong phai tam giac \n!!");
            }*/
//            Cau 5
            #include<stdio.h>
            #include<stdlib.h>
            int main()
            {
            int m,y;
            printf("Nhap vao man hinh thang va nam: ");
            scanf("%d%d",&m,&y);
            switch(m)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("Thang %d nam %d co 31 ngay",m,y);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("Thang %d nam %d co 30 ngay",m,y);
                break;
            case 2:
                if(y%4==0)
                printf("Thang 2 nam %d co 29 ngay",y);
                else
                printf("Thang 2 nam %d co 28 ngay",y);
                break;
            default:
                printf("Thang khong hop le !!");

            }
            }



