#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int flag = 0;

    printf("Moi ban nhap vao so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le!");
        return 0;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho dong!");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap vao phan tu tai vi tri %d", i);
        scanf("%d", &arr[i]);
    }

    for (int i = n; i >= n / 2; i--) {
        for (int j = 0; j < n / 2; j++) {
            if (arr[i] == arr[j]) {
                printf("Cap doi xung: (%d, %d)", arr[i], arr[j]);
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf("Khong co phan tu doi xung!");
    }
    free(arr);
    return 0;
}