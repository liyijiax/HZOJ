/*************************************************************************
	> File Name: 79.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 14时11分13秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;
#define max_n 10000000

int prime[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    init();
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] < a) continue;
        if (prime[i] > b) break;
        printf("%d\n", prime[i]);
    }
    return 0;
}

