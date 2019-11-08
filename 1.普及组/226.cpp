/*************************************************************************
	> File Name: 226.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年09月29日 星期日 18时53分15秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
#define intl long long

long long quick_mod(long long a, long long b, long long p) {
    intl tmp = a, ans = 1;
    while (b) {
        if (b & 1) ans  = ans * tmp % p;
        tmp = tmp * tmp % p;
        b >>= 1;
    }
    return ans % p;
}

int main() {
    intl a, b, p;
    cin >> a >> b >> p;
    cout << quick_mod(a, b, p) << endl;
    return 0;
}
