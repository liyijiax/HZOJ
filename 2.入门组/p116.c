/*************************************************************************
	> File Name: p116.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月28日 星期日 23时01分00秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int tur = {a, b, c};
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    if (a + b < c) {
        printf("illegaltriangle");
    } else if (f < 0) {
        pritnf("");
    } else if (f = 0) {
        printf("right triangle");
    } else {
        printf("obtuse triangle");
    }
    return 0;
}
