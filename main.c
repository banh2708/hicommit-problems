#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d CHAN", n);
    } else {
        printf("%d LE ", n);
    }

    return 0;
}