#include <stdio.h>
#include <stdlib.h>
double power(double x, int y)
{
    if(y==0)
        return 1;
    else if(y<0)
        printf("Khong tinh !!");
    else
    {
        return x * power(x,y-1);
    }

}
int main()
{
    double x;
    int y;
    printf("Nhap vao man hinh gia tri x: ");
    scanf("%lf",&x);
    printf("%.1lf mu ",x);
    scanf("%d",&y);
    power(x,y);
    printf("%.1lf mu %d :%.1lf",x,y,power(x,y));
}
