/*************************************************************************
	> File Name: p109.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月28日 星期日 21时54分27秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, flag = 1;
    scanf("%d", &a);
    while (a && flag) {
        flag = a & 1;
        a /= 10;
    }
    if (!flag) {
        printf("YES");
    } else {
        printf("NO");
    }
}
