/*************************************************************************
	> File Name: 226_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 14时54分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef long long ll;

ll my_pow(ll a, ll b, ll p) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res % p) * (a % p) % p;
        a = (a % p) * (a % p) % p;
        b >>= 1;
    }
    return res % p;
}

int main() {
    ll a, b, p;
    while (cin >> a >> b >> p) cout << my_pow(a, b, p) << endl;
    return 0;
}
