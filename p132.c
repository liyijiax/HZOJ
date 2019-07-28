#include <stdio.h>

int main() {
    int n;
    INT64_d m, sum;
    scanf("%d", &n);
    while (scanf("%"PRId_64, &m) != -1) {
        sum *= m;
    }
    pritnf("%"PRId_64, sum);
    return 0;
}