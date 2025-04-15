#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char ten_hang[50];
    int don_gia;
    int so_luong;
    int thanh_tien;
} BanHang;

void nhapSoLieu(BanHang *bh) {
    printf("Nhap ten hang: ");
    fflush(stdin);
    gets(bh->ten_hang);

    printf("Nhap don gia: ");
    scanf("%d", &bh->don_gia);

    printf("Nhap so luong: ");
    scanf("%d", &bh->so_luong);

    bh->thanh_tien = bh->don_gia * bh->so_luong;
}

void hienThiSoLieu(BanHang bh[], int n) {
    int tong_tien = 0;

    printf("\nSO LIEU BAN HANG\n");
    printf("------------------------------------------------\n");
    printf("| %-5s | %-20s | %-10s | %-10s | %-12s |\n",
           "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    printf("------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("| %-5d | %-20s | %-10d | %-10d | %-12d |\n",
               i+1, bh[i].ten_hang, bh[i].don_gia, bh[i].so_luong, bh[i].thanh_tien);
        tong_tien += bh[i].thanh_tien;
    }

    printf("------------------------------------------------\n");
    printf("| %-5s | %-20s | %-10s | %-10s | %-12d |\n",
           "", "", "", "Tong tien", tong_tien);
    printf("------------------------------------------------\n");
}

int main() {
    int n;
    FILE *f;

    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);

    BanHang *ds = (BanHang*)malloc(n * sizeof(BanHang));

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin mat hang thu %d:\n", i+1);
        nhapSoLieu(&ds[i]);
    }

    f = fopen("SO_LIEU.C", "wb");
    if (f == NULL) {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }

    fwrite(ds, sizeof(BanHang), n, f);
    fclose(f);

    f = fopen("SO_LIEU.C", "rb");
    if (f == NULL) {
        printf("Khong the mo file de doc!\n");
        return 1;
    }

    BanHang *doc = (BanHang*)malloc(n * sizeof(BanHang));
    fread(doc, sizeof(BanHang), n, f);
    fclose(f);

    hienThiSoLieu(doc, n);

    free(ds);
    free(doc);

}
