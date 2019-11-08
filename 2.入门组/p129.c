#include <stdio.h>
#include <inttypes.h>

int main() {
    int n, m;
    int min = INT32_MIN;
    scanf("%d", &n);
    while(scanf("%d", &m) != -1) {
        m < min && m = min;
    }
    printf("%d", min);

    return 0;
}