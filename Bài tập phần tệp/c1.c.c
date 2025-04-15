#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void nhapMaTran(int mat[MAX][MAX], int dong, int cot, char ten)
{
    printf("Nhap ma tran %c (%dx%d):\n", ten, dong, cot);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void inMaTran(FILE *f, int mat[MAX][MAX], int dong, int cot, char ten)
{
    fprintf(f, "Ma tran %c:\n", ten);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            fprintf(f, "%d\t", mat[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\n");
}

void congMaTran(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int dong, int cot)
{
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n;
    FILE *f;

    printf("Nhap so dong (n) va so cot (m) cua ma tran: ");
    scanf("%d %d", &n, &m);

    nhapMaTran(A, n, m, 'A');
    nhapMaTran(B, n, m, 'B');


    congMaTran(A, B, C, n, m);


    f = fopen("CONG_MT.C", "w");
    if (f == NULL) {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }


    inMaTran(f, A, n, m, 'A');
    inMaTran(f, B, n, m, 'B');
    inMaTran(f, C, n, m, 'C');

    fclose(f);

    printf("Da ghi ma tran vao file CONG_MT.C\n");
    printf("\nNoi dung file CONG MT.C:\n");
    system("type CONG_MT.C");

}
