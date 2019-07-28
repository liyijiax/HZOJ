/*************************************************************************
	> File Name: p115.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月28日 星期日 22时37分13秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == b) {
        printf("100");
    } else if (a % 10 == b / 10 && a / 10 == b % 10) {
        printf("20");
    } else if (a / 10 == b / 10 || a / 10 == b % 10) {
        printf("2");
    } else if (a % 10 == b /10 || a / 10 == b % 10) {
        printf("2");
    } else {
        printf("0");
    }
    return 0;
}
