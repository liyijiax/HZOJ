#incllude <stdio.h>

int main() {
    int n, x, sum = 0;
    scanf("%d", &n);
    while (scanf("%d", &x) != -1) {
        sum += x;
    }
    printf("%.2f", sum / n)
    return 0;
}