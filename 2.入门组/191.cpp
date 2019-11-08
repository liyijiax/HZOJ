/*************************************************************************
	> File Name: 191.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 15时20分47秒
 ************************************************************************/

#include <iostream>
#include <cinttypes>
using namespace std;
#define max_n 8000000

int prime[max_n + 5] = {0};

int main() {
    int max = 0;
    int min = INT32_MAX;
    int l, r, a = 0, b = 0, c = 0, d = 0;
    cin >> l >> r;
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] < l) continue;
        if (prime[i + 1] > r) break;
        int distance = prime[i + 1] - prime[i];
        if (distance < min) min = distance, a = l, b = r;
        if (distance > max) max = distance, c = l, d = r;
    }
    if (a && c){
        cout << a << "," << b << " are most closet, " << c << "," << d << " are most distant." << endl;
    } else {
        cout << "There are no adjacent primes." << endl;
    }
	return 0;
}
