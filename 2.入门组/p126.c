#include <stdio.h>

int main() {
    double r1, r2;
    scanf("%ld%ld", &r1, &r2);
    printf("%.2ld", 3.14 * (r1 * r1 - r2 * r2));
    return 0;
}