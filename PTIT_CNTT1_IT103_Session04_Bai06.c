#include <stdio.h>
#include <stdlib.h>

struct Students {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Students student[5];
    int n;
    int inputID;
    int flag = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &student[i].id);
        printf("Name: ");
        scanf("%s", &student[i].name);
        printf("Age: ");
        scanf("%d", &student[i].age);
    }

    printf("Moi ban nhap ID sinh vien can tim: ");
    scanf("%d", &inputID);
    for (int i = 0; i < 5; i++) {
        if (student[i].id == inputID) {
            printf("ID: %d, name: %s, age: %d ", student[i].id, student[i].name, student[i].age);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("Sinh vien khong ton tai!");
    }
    return 0;
}