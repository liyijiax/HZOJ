/*************************************************************************
	> File Name: 471yu.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月16日 星期六 18时14分05秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define max_n 200

char str_a[max_n + 5], str_b[max_n + 5];
int a[max_n + 5], b[max_n + 5], ans[max_n + 5];

void mul(char *str_a, char* str_b) {
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);
    for (int i = 0; i < len_a; i++) a[len_a - i - 1] = str_a[i] - '0';
    for (int i = 0; i < len_b; i++) b[len_b - i - 1] = str_b[i] - '0';
    for (int i = 0; i < len_a; i++) {
        for (int j = 0; j < len_b; j++) {
            ans[i + j] += a[i] * b[j];
            if (ans[i + j] < 10) continue;
            ans[i + j + 1] += ans[i + j] / 10;
            ans[i + j] %= 10;
        }
    }
    if (ans[len_a + len_b - 1]) cout << ans[len_a + len_b - 1];
    for (int i = len_a + len_b - 2; i >= 0; i--) cout << ans[i];
    cout << endl;
    return ;
}

int main() {
    cin >> str_a >> str_b;
    memset(ans, 0, sizeof(ans));
    mul(str_a, str_b);
    return 0;
}
