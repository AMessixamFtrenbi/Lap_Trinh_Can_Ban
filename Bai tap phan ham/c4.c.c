#include <stdio.h>
#include <stdlib.h>

int n;
void inputMatrix(int **a, char* name) {
    printf("Nhap vao man hinh cac thong so cua ma tran %s(%dx%d):\n", name, n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void printMatrix(int **a, char* name) {
    printf("Ma tran %s:\n", name);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void resultMatrix(int **a1, int **a2, int **result) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = a1[i][j] + a2[i][j];
        }
    }
}

void multiplyMatrix(int **a1, int **a2, int **c) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
}

int main() {
    printf("Vui long nhap ma tran vuong de thuc hien ca 2 phep cong va nhan ma tran !!\n");
    scanf("%d", &n);
    printf("Kich thuoc ma tran vuong (%d x %d) ",n,n);
    int **a1 = (int **)malloc(n * sizeof(int *));
    int **a2 = (int **)malloc(n * sizeof(int *));
    int **result = (int **)malloc(n * sizeof(int *));
    int **c = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        a1[i] = (int *)malloc(n * sizeof(int));
        a2[i] = (int *)malloc(n * sizeof(int));
        result[i] = (int *)malloc(n * sizeof(int));
        c[i] = (int *)malloc(n * sizeof(int));
    }

    inputMatrix(a1, "A");
    inputMatrix(a2, "B");
    resultMatrix(a1, a2, result);
    multiplyMatrix(a1, a2, c);

    printMatrix(a1, "A");
    printMatrix(a2, "B");
    printMatrix(result, "A + B");
    printMatrix(c, "A * B");
    for (int i = 0; i < n; i++) {
        free(a1[i]);
        free(a2[i]);
        free(result[i]);
        free(c[i]);
    }
    free(a1);
    free(a2);
    free(result);
    free(c);


}
