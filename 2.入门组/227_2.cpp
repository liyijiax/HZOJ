/*************************************************************************
	> File Name: 227_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 15时25分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;

ll quick_sub(ll a, ll b) {
    ll res = 0;
    while (b) {
        if (b & 1) res += a;
        a *= 2;
        b >>= 1;
    }
    return res;
}

int main() {
    ll a, b;
    while (cin >> a >> b) cout << quick_sub(a, b) << endl;
    return 0;
}
