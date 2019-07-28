#include <stdio.h>
#include <inttypes.h>

int main() {
    int dif = 0;
    int n, m, max = INT32_MIN, min = INT32_MAX;
    scanf("%d", &n);
    while (scanf("%d", &m) != EOF) {
        m < min && min = m;
        m > max && max = m;        
    }
    printf("%d", max - min);
    return 0;
}