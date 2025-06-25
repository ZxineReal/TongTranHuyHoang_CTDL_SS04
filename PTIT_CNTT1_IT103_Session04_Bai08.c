#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int x;
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
        printf("Moi ban nhap vao phan tu tai vi tri %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Moi ban nhap vao phan tu can tim vi tri: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("Phan tu khong ton tai trong mang!");
    }
    free(arr);
    return 0;
}