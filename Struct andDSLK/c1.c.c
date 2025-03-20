#include <stdio.h>
#include <stdlib.h>
struct Mathang
{
    char tenHang[100];
    float donGia;
    int soLuong;
    float thanhTien;
};
int main()
{
    int n;
    printf("Nhap so luong mat hang ");
    scanf("%d",&n);
    struct Mathang danhSach[n];
    for(int i=0;i<n;i++)
    {
        printf("\nNhap thong tin mat hang thu %d:\n",i+1);
        printf("Ten Hang: ");
        scanf(" %[^\n]", danhSach[i].tenHang);
        printf("Don Gia: ");
        scanf("%f",&danhSach[i].donGia);
        printf("So Luong: ");
        scanf("%d",&danhSach[i].soLuong);
        danhSach[i].thanhTien = danhSach[i].donGia * danhSach[i].soLuong;
    }
    printf("\nDanh sach mat hang:\n");
    printf("STT | Ten Hang | Don Gia | So Luong | Thanh Tien \n");
    printf("-------------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
       printf("%-1d | %-10s | %-10.2f | %-5d | %-15.2f\n",i + 1, danhSach[i].tenHang, danhSach[i].donGia, danhSach[i].soLuong, danhSach[i].thanhTien);

    }
}
