#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int pos;

    printf("Moi ban nhap vao so luong phan tu: ");
    scanf("%d", &n);
    if ( n <= 0 || n >= 1000) {
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

    for (int i = 0; i < n; i++) {
        int min = arr[0];
        if (arr[i] < min) {
            min = arr[i];
            pos = i;
        }
    }
    printf("Vi tri dau tien cua phan tu nho nhat trong mang la: %d", pos);
    free(arr);
    return 0;
}