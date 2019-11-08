#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    sum = 100;
    for (int i = 0; i < n; i++) {
        sum += sum * 1.00417 + 100;
    }
    pritnf("$%.2f", sum);

    return 0;
}