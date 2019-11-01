#include <stdio.h>

int main() {
    int n = 10;
    int numbers[10];
    int i, j, m, temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; ++i) {
        m = i;
        for (j = i + 1; j < n; ++j) {
            if (numbers[m] < numbers[j]) {
                m = j;
            }
        }
        temp = numbers[m];
        numbers[m] = numbers[i];
        numbers[i] = temp;
    }
    printf("%d", numbers[0]);
    for (i = 1; i < 10; ++i) {
        printf("%d", numbers[i]);
    }
    return 0;
}
