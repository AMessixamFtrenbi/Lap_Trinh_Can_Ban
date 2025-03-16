#include <stdio.h>
#include <stdlib.h>
int i=0;
void toHe2(int n)
{
    int He2[32];
    while(n>0)
    {
        He2[i] = n%2;
        n = n/2;
        i++;
    }
    printf("He co so 2: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",He2[j]);
    }
    printf("\n");
}
void toHe8(int n)
{
    int He8[32];
    while(n>0)
    {
        He8[i] = n%8;
        n = n/8;
        i++;
    }
    printf("He co so 8: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",He8[j]);
    }
    printf("\n");
}
void toHe16(int n)
{
    char He16[32];
    while(n>0)
    {
        int He_16 = n%16;
        if(He16 <10)
            He16[i] = He_16 + '0';
        else
            He16[i] = He_16 -10 + 'A';
        n = n/16;
        i++;
    }
    printf("He co so 16: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",He16[j]);
    }
}
int main()
{
    int n;
    printf("Nhap vao man hinh so : ");
    scanf("%d",&n);
    toHe2(n);
    toHe8(n);
    toHe16(n);
}
