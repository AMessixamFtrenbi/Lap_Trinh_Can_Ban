#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien
{
    char hoTen[50];
    int tuoi;
    float diemTB;
    struct SinhVien* next;
};
struct SinhVien* NewSinhVien(char hoTen[], int tuoi, float diemTB)
{
    struct SinhVien* newSinhVien = (struct SinhVien*)malloc(sizeof(struct SinhVien));
    strcpy(newSinhVien->hoTen, hoTen);
    newSinhVien->tuoi = tuoi;
    newSinhVien->diemTB = diemTB;
    newSinhVien ->next = NULL;
    return newSinhVien;
};
void inputSinhVien(struct SinhVien** head, char hoTen[],int tuoi, float diemTB)
{
    struct SinhVien* newSinhVien = NewSinhVien(hoTen, tuoi, diemTB);
    if(*head == NULL)
    *head = newSinhVien;
    else
    {
    struct SinhVien* temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newSinhVien;
    }

}

void insertSinhVien(struct SinhVien** head, char tagHoTen[], char hoTen[], int tuoi, float diemTB)
{
    struct SinhVien* newSinhVien = NewSinhVien(hoTen, tuoi, diemTB);
    if(*head == NULL)
    {
        printf("Danh sach rong, khong the chen.\n");
        return;
    }
    if(strcmp((*head)->hoTen,tagHoTen)==0)
    {
        newSinhVien->next = *head;
        *head = newSinhVien;
        return;
    }
    struct SinhVien* temp = *head;
    while(temp->next != NULL && strcmp(temp->next->hoTen,tagHoTen)!=0)
    {
        temp = temp->next;
    }
    if(temp->next != NULL)
    {
        newSinhVien->next = temp->next;
        temp->next = newSinhVien;
    }
    else
        printf("Khong tim thay sinh vien: %s\n",tagHoTen);
}
void removeSinhVien(struct SinhVien** head, char tagHoTen[])
{
    if(*head == NULL)
    {
        printf("Danh sach rong, khong the xoa.\n");
        return;
    }
    if(strcmp((*head)->hoTen, tagHoTen) == 0)
    {
        struct SinhVien* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    struct SinhVien* temp = *head;
    while(temp->next != NULL && strcmp(temp->next->hoTen,tagHoTen)!=0)
    {
        temp = temp->next;
    }
    if(temp->next != NULL)
    {
        struct SinhVien* nodeToRemove = temp->next;
        temp->next = temp->next->next;
        free(nodeToRemove);
    }
    else
        printf("Khong tim thay sinh vien %s\n",tagHoTen);
}
void printList(struct SinhVien* head)
{
    printf("\nDanh sach sinh vien:\n");
    printf("STT | Ho Ten      | Tuoi | DiemTB\n");
    printf("---------------------------------\n");
    int stt = 1;
    struct SinhVien* temp = head;
    while (temp != NULL)
    {
        printf("%-4d | %-15s | %-2d | %-2.2f\n",stt++,temp->hoTen,temp->tuoi,temp->diemTB);
        temp = temp->next;
    }
}
void freeList(struct SinhVien* head)
{
    struct SinhVien* temp;
    while(head != NULL)
    {
        temp = head;
        head = head -> next;
        free(temp);
    }
}
void inputInformation(char hoTen[],int* tuoi, float* diemTB)
{
    printf("Nhap ho ten: ");
    scanf(" %[^\n]", hoTen);
    printf("Nhap tuoi: ");
    scanf("%d", tuoi);
    printf("Nhap diem trung binh: ");
    scanf("%f",diemTB);
}
int main()
{
    struct SinhVien* head = NULL;
    int choice;
    char hoTen[50];
    char tagHoTen[50];
    int tuoi;
    float diemTB;
    while(1)
    {
        printf("\nMENU:\n");
        printf("1.Nhap sinh vien tu ban phim \n");
        printf("2. Chen sinh vien vao truoc mot sinh vien\n");
        printf("3. Loai bo sinh vien\n");
        printf("4. In danh sach sinh vien\n");
        printf("5. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            inputInformation(hoTen,&tuoi,&diemTB);
            inputSinhVien(&head, hoTen, tuoi, diemTB);
            break;
            case 2:
                printf("Nhap ten sinh vien can chen truoc: ");
                scanf(" %[^\n]", tagHoTen);
                inputInformation(hoTen, &tuoi, &diemTB);
                insertSinhVien(&head, tagHoTen, hoTen, tuoi, diemTB);
                break;
            case 3:
                printf("Nhap ten sinh vien can xoa: ");
                scanf(" %[^\n]", tagHoTen);
                removeSinhVien(&head, tagHoTen);
                break;
            case 4:
                printList(head);
                break;
            case 5:
                freeList(head);
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    }

    return 0;
}



