/*************************************************************************
	> File Name: 227.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年09月29日 星期日 19时02分47秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
#define intl long long 

intl quick_mul(intl a, intl b, intl p) {
    intl tmp = a, ans = 0;
    while (b) {
        if (b & 1) ans = (ans + tmp) % p;
        tmp = tmp * 2 % p;
        b >>= 1;
    }
    return ans;
}

int main() {
    intl a, b, p;
    cin >> a >> b >> p;
    cout << quick_mul(a, b, p) << endl;
    return 0;
}
