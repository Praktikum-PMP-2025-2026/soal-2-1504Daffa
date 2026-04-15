#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT 9999 

int jumlah_langkah(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 0;
    }
    if (n % 2 == 0) {
        return 1 + jumlah_langkah(n / 2);
    } else {
        return 1 + jumlah_langkah(3 * n + 1);
    }
}

int main() {
    int N;
    int numbers[MAX_INPUT];

    if (scanf("%d", &N) != 1 || N <= 0 || N > MAX_INPUT) {
        printf("jumlah bilangan invalid \n");
        return 1;
    }

    printf("", N);
    for (int i = 0; i < N; i++) {
        if (scanf("%d", &numbers[i]) != 1 || numbers[i] <= 0) {
            printf("bentuk bilangan invalid ");
            return 1;
        }
    }

    for (int i = 0; i < N; i++) {
        int langkah = jumlah_langkah(numbers[i]);
        printf("LANGKAH: %d\n", langkah);
    }

    return 0;
}
