/*************************************************************************
	> File Name: p110.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月28日 星期日 21时59分32秒
 ************************************************************************/

#include<stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    y = (x > 15 ? 15 : x) * 6 + (x > 15) * (x - 15) * 9;
    printf("%.2lf\n", y);
    return 0;
}
