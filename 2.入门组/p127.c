#include <stdio.h>
#inlcude <math.h>

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    for (int i = 0; i < n; i++) {
        x *= 1.06;
    }
    printf("%d",ceil(x));

    return 0;
}