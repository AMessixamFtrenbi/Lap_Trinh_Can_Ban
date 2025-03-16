#include <stdio.h>
#include <stdlib.h>

void input(int *bac, int heSo[]) {
    printf("Nhap bac cua da thuc: ");
    scanf("%d", bac);
    if (*bac < 0)
        printf("Bac khong hop le !!");
    else {
        printf("Nhap he so cua da thuc:\n");
        for (int i = *bac; i >= 0; i--) {
            printf("He so a(%d): ", i);
            scanf("%d", &heSo[i]);
        }
    }
}

void print(int bac, int heSo[]) {
    for (int i = bac; i >= 0; i--) {
        if (heSo[i] != 0) {
            if (i == 0)
                printf("%d", heSo[i]);
            else if (i == 1)
                printf("%dx + ", heSo[i]);
            else
                printf("%dx^%d + ", heSo[i], i);
        }
    }
    printf("\n");
}

void result(int bacP, int heSoP[], int bacQ, int heSoQ[], int *bacR, int heSoR[]) {
    *bacR = (bacP > bacQ) ? bacP : bacQ;

    for (int i = 0; i <= *bacR; i++) {
        heSoR[i] = 0;
        if (i <= bacP)
            heSoR[i] += heSoP[i];
        if (i <= bacQ)
            heSoR[i] += heSoQ[i];
    }
}

int gtr(int bac, int heSo[], int x) {
    int sum = heSo[bac];
    for (int i = bac - 1; i >= 0; i--) {
        sum = sum * x + heSo[i];
    }
    return sum;
}

int main() {
    int bacP, bacQ, bacT;
    int heSoP[100], heSoQ[100], heSoT[100];
    int x;

    printf("Nhap da thuc P(x):\n");
    input(&bacP, heSoP);
    printf("Nhap da thuc Q(x):\n");
    input(&bacQ, heSoQ);

    printf("Da thuc P(x): ");
    print(bacP, heSoP);
    printf("Da thuc Q(x): ");
    print(bacQ, heSoQ);

    result(bacP, heSoP, bacQ, heSoQ, &bacT, heSoT);
    printf("Da thuc T(x): ");
    print(bacT, heSoT);

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    int sumP = gtr(bacP, heSoP, x);
    int sumQ = gtr(bacQ, heSoQ, x);
    int sumT = gtr(bacT, heSoT, x);

    printf("Gia tri P(x) = %d\n", sumP);
    printf("Gia tri Q(x) = %d\n", sumQ);
    printf("Gia tri T(x) = %d\n", sumT);

    return 0;
}
