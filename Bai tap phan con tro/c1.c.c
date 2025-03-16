#include <stdio.h>
#include <stdlib.h>
void change(int *a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int *a,*b;
    printf("Nhap vao man hinh cac gia tri a, b : \n");
    scanf("%d%d",&a,&b);
    printf("Hai so vua nhap la:\na: %d\nb: %d\n",a,b);
    printf("Hoa doi !!\n");
    change(&a,&b);
    printf("%d, %d",a,b);

}
