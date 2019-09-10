/*************************************************************************
	> File Name: 53.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月10日 星期二 13时58分15秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};
int sum[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            cnt[i] = 1;
            sum[i] = 1 + i;
        } 
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                cnt[i * prime[j]] = cnt[i] + 1;
                int a = pow(prime[j], cnt[i] + 1) - 1;
                int b = pow(prime[j], cnt[i] + 2) - 1;
                sum[i * prime[j]] = sum[i] * b / a;
                break;
            } else {
                sum[i * prime[j]] = sum[i] * sum[prime[j]];
                cnt[i * prime[j]] = 1;
            }
        }
    }
}

int main() {
    init();
    int sum_max = 0;
    for (int i = 1; i <= max_n; i++) {
        if (sum[i] > sum_max) sum_max = sum[i];
    }
    cout << sum_max << endl;
    return 0;
}
