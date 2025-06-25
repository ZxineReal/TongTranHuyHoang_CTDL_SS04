#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int left, int right, int key);

int main() {
    int n, x;

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

    // Sap xep tang dan
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Moi ban nhap vao phan tu can tim kiem: ");
    scanf("%d", &x);

    if (binarySearch(arr, 0, n - 1, x)) {
        printf("Phan tu co trong mang");
    } else {
        printf("Phan tu khong co trong mang");
    }

    free(arr);
    return 0;
}

int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) return 0;

    int mid = (left + right) / 2;
    if (arr[mid] == key)
        return 1;
    else if (arr[mid] > key)
        return binarySearch(arr, left, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, right, key);
}
