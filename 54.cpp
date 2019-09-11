/*************************************************************************
	> File Name: 54.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月10日 星期二 14时25分05秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define max_n 10000
typedef long long int1;

int1 factorial[max_n + 5] = {0};
int1 mul[max_n + 5] = {0};

void calc(int x) {
    memset(factorial, 0, sizeof(factorial));
    factorial[0] = 1, factorial[1] = 1;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= factorial[0]; j++) {
            factorial[j] *= i;
        }
        for (int j = 1; j <= factorial[0]; j++) {
            if (factorial[j] < 10) continue;
            factorial[j + 1] += factorial[j] / 10;
            factorial[j] %= 10;
            factorial[0] += (j == factorial[0]);
        }
    }
}

void mul_num() {
    mul[0] = 1, mul[1] = 1;
    for (int i = 1; i <= factorial[0]; i++) {
        if (!factorial[i]) continue;
        for (int j = 1; j <= mul[0]; j++) {
            mul[j] *= factorial[i];
        }
        for (int j = 1; j <= mul[0]; j++) {
            if (mul[j] < 10) continue;
            mul[j + 1] += mul[j] / 10;
            mul[j] %= 10;
            mul[0] += (mul[0] == j);
        }
    }
    for (int i = mul[0]; i >= 1; i--) {
        cout << mul[i];
    }
    cout << endl;
}

int main() {
    int x;
    while (scanf("%d", &x) != EOF) {
        long long mul = 1;
        calc(x);
        /*for (int i = factorial[0]; i >= 1; i--) {
            cout << factorial[i];
        }*/
        //cout << endl;
        mul_num();
    }
    return 0;
}
