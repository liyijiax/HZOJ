/*************************************************************************
	> File Name: 190.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 14时58分19秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;
#define max_n 8000000

int is_prime[max_n + 5] = {0};
int prime[max_n + 5] = {0};

void init() {
    is_prime[0] = 1;
    is_prime[1] = 1;
    for (int i = 2; i <= max_n; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    init();
    int cnt = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] >= n) break;
        if (!is_prime[n - prime[i]]) cnt++;
    }
    cout << ceil((double)cnt / 2);
}
