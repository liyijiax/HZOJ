/*************************************************************************
	> File Name: 310.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年09月29日 星期日 19时08分43秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
#define max_n 1000000

long long prime[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init();
    int n;
    cin >> n;
    for (int i = 1; i <= prime[0] && prime[i] <= n; i++) {
        int cnt = 0;
        for (long long j = prime[i]; j <= n; j *= prime[i]) {
            cnt += n / j;
        }
        cout << prime[i] << " " << cnt << endl;
    }
    return 0;
}
