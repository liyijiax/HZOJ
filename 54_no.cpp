/*************************************************************************
	> File Name: 54.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月10日 星期二 14时09分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 500

int factorial[max_n + 5] = {0};

int calc(int i) {
    if (factorial[i]) return factorial[i];
    factorial[i] = i * calc(i - 1);
    return factorial[i];
}

void init() {
    factorial[1] = 1;
    for (int i = 1; i <= max_n; i++) {
        factorial[i] = calc(i);
    }
}

int main() {
    init();
    int x;
    while (scanf("%d", &x) != EOF) {
        int fac = factorial[x];
        int a = fac;
        int mul = 1;
        while (fac) {
            int tmp = fac % 10;
            if (tmp) mul *= tmp;
            fac /= 10;
        }
        cout << mul << endl;
    }
    return 0;
}
