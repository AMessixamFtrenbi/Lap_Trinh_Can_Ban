#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void nhapMaTran(int mat[MAX][MAX], int dong, int cot, char ten) {
    printf("Nhap ma tran %c (%dx%d):\n", ten, dong, cot);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void inMaTran(FILE *f, int mat[MAX][MAX], int dong, int cot, char ten) {
    fprintf(f, "Ma tran %c:\n", ten);
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            fprintf(f, "%d\t", mat[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\n");
}

void nhanMaTran(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
                int dongA, int cotA, int cotB) {
    for (int i = 0; i < dongA; i++) {
        for (int j = 0; j < cotB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cotA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p;
    FILE *f;

    printf("Nhap kich thuoc ma tran A (n x m): ");
    scanf("%d %d", &n, &m);

    printf("Nhap so cot cua ma tran B (m x p): ");
    scanf("%d", &p);
    nhapMaTran(A, n, m, 'A');
    nhapMaTran(B, m, p, 'B');

    if (m != p) {
        printf("Khong the nhan ma tran vi so cot A khac so dong B!\n");
        return 1;
    }
    nhanMaTran(A, B, C, n, m, p);
    f = fopen("NHAN_MT.C", "w");
    if (f == NULL) {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }

    fprintf(f, "MA TRAN DAU VAO:\n");
    inMaTran(f, A, n, m, 'A');
    inMaTran(f, B, m, p, 'B');

    fprintf(f, "MA TRAN TICH C = A x B:\n");
    inMaTran(f, C, n, p, 'C');
    fclose(f);
    printf("\nDa ghi ket qua vao file NHAN_MT.C\n");
    printf("\nNoi dung file NHAN_MT.C:\n");
    system("type NHAN_MT.C");

}
