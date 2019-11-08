/*************************************************************************
	> File Name: 490.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月02日 星期六 14时08分32秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <set>
using namespace std;
#define max_n 400000

long long a[max_n + 5];
long long b[max_n + 5];

struct Data {
    Data(int val, int i, int j) : val(val), i(i), j(j) {}
    long long val;
    int i, j;
    bool operator<(const Data &a) const {
        if (val - a.val) return val < a.val;
        if (i - a.i) return i < a.i; 
        return j < a.j;
    }
};

set<Data> s;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%lld", a + i);
    for (int i = 0; i < n; i++) scanf("%lld", b + i);
    s.insert(Data(a[0] + b[0], 0, 0));
    for (int i = 0; i < n; i++) {
        long long val = s.begin()->val;
        int x = s.begin()->i;
        int y = s.begin()->j;
        s.erase(s.begin());
        printf("%lld\n", val);
        if (y + 1 < n) s.insert(Data(a[x] + b[y + 1], x, y + 1));
        if (x + 1 < n) s.insert(Data(a[x + 1] + b[y], x + 1, y));
    }
    return 0;
}
