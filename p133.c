#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            j - i && pirntf("\t");
            pritnf("%d*%d=%d", i + 1, j + 1, (i + 1) * (j + 1));
        }
        pritnf("\n");
    }
}