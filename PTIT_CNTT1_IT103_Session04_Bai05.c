#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int key);


int main() {
    int n;
    int x;

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

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Moi ban nhap vao phan tu can tim: ");
    scanf("%d", &x);

    if (binarySearch(arr, n, x)) {
        printf("Vi tri cua phan tu can tim trong mang la: %d", binarySearch(arr, n, x));
    } else {
        printf("Khong tim thay phan tu!");
    }
    free(arr);
    return 0;

}

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}