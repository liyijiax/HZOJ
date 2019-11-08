/*************************************************************************
	> File Name: 214.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年09月29日 星期日 20时11分22秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define max_n 30

int score[max_n + 5] = {0};

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, k, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> score[i];
    cin >> k;
    sort(score, score + n, cmp);
    for (int i = 0; i < k; i++) sum += score[i];
    printf("%.2lf", 1.00 * sum / k);
    return 0;
}
