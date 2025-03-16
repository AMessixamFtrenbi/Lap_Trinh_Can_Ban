#include <stdio.h>
#include <stdlib.h>
long gt(int n)
{
    if(n==0||n==1)
        return 1;
    else if (n<0)
         printf("Khong thuc hien duoc !!");
    else
        return n *gt(n-1);
}
int main()
{
    int n;
    printf("Nhap vao man hinh so n: ");
    scanf("%d",&n);
    gt(n);
    printf("%d! = %ld",n,gt(n));

}
