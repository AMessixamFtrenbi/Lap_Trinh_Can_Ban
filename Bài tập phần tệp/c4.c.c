#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct sinhvien
{
    char hoTen[50];
    float diemTB;
    int tuoi;
    struct sinhvien*next;
}SinhVien;

SinhVien* taoNodeMoi(char* hoTen, float diemTB, int tuoi)
{
    SinhVien* newNode = (SinhVien*)malloc(sizeof(SinhVien));
    strcpy(newNode ->hoTen, hoTen)
    newNode -> diemTB = diemTB;
    newNode -> tuoi = tuoi;
    newNode -> next = NULL;
    return newNode;
}

void ThemSinhVien(SinhVien **head, char* hoTen, float diemTB, int tuoi)
{
    if(*head == NULL)
        *head = newNode;
    else
    {
        SinhVien* temp = *head;
        while(temp -> next != NULL)
        {
            temp = temp*next;
        }
        temp*next = newNode;
    }
}
void HienThiDanhSach(SinhVien* head) {
    printf("\n|DANH SÁCH SINH VIÊN|||\n");
    printf("| :-: | :- | :- | :- |\n");
    printf("|STT|Ho ten|Tuoi|Diem TB|\n");

    int stt = 1;
    SinhVien* temp = head;
    while (temp != NULL) {
        printf("|%d|%s|%d|%.2f|\n", stt++, temp->hoTen, temp->tuoi, temp->diemTB);
        temp = temp->next;
    }
}

void GhiVaoFile(SinhVien* head, const char* filename) {
    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Khong the mo file de ghi!\n");
        return;
    }

    SinhVien* temp = head;
    while (temp != NULL) {
        fwrite(temp, sizeof(SinhVien), 1, file);
        temp = temp->next;
    }

    fclose(file);
}
SinhVien* DocTuFile(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        return NULL;
    }

    SinhVien* head = NULL;
    SinhVien* temp = NULL;
    SinhVien node;

    while (fread(&node, sizeof(SinhVien), 1, file) == 1) {
        SinhVien* newNode = TaoNodeMoi(node.hoTen, node.diemTB, node.tuoi);

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    fclose(file);
    return head;
}


void ThemSinhVienTuBanPhim(SinhVien** head) {
    char hoTen[50];
    float diemTB;
    int tuoi;

    printf("\nNhap thong tin sinh vien moi:\n");
    printf("Ho ten: ");
    scanf(" %[^\n]", hoTen);
    printf("Tuoi: ");
    scanf("%d", &tuoi);
    printf("Diem TB: ");
    scanf("%f", &diemTB);

    ThemSinhVien(head, hoTen, diemTB, tuoi);
    GhiVaoFile(*head, "DSACH.C");
}

void SuaSinhVien(SinhVien* head) {
    char hoTen[50];
    printf("\nNhap ten sinh vien can sua: ");
    scanf(" %[^\n]", hoTen);

    SinhVien* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->hoTen, hoTen) == 0) {
            printf("Nhap tuoi moi: ");
            scanf("%d", &temp->tuoi);
            printf("Nhap diem TB moi: ");
            scanf("%f", &temp->diemTB);
            GhiVaoFile(head, "DSACH.C");
            printf("Da cap nhat thong tin!\n");
            return;
        }
        temp = temp->next;
    }

    printf("Khong tim thay sinh vien co ten '%s'\n", hoTen);
}
void GiaiPhongDanhSach(SinhVien* head) {
    SinhVien* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    SinhVien* danhSach = DocTuFile("DSACH.C");
    int luaChon;

    do {
        printf("\nMENU:\n");
        printf("1. Hien thi danh sach sinh vien\n");
        printf("2. Them sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                HienThiDanhSach(danhSach);
                break;
            case 2:
                ThemSinhVienTuBanPhim(&danhSach);
                break;
            case 3:
                SuaSinhVien(danhSach);
                break;
            case 4:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 4);

    GiaiPhongDanhSach(danhSach);
    return 0;
}
