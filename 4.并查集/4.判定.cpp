/*************************************************************************
	> File Name: 4.判定.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月23日 星期六 19时39分05秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <map>
using namespace std;
#define MAX_N 1000000
//下标重映射

struct Data {
    int i, j, e;
} arr[MAX_N + 5];

map<int, int> m;
int m_tot = 0;

struct UnionSet {
    int fa[(MAX_N << 1) + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return (fa[x] = (x == fa[x] ? x : get(fa[x])));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

UnionSet u;

void solve() {
    int n;
    cin >> n;
    u.init(2 * n);
    m.clear();
    m_tot = 0;
    for (int i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        a = m[a] ? m[a] : (m[a] = ++m_tot);
        b = m[b] ? m[b] : (m[b] = ++m_tot);
        arr[i] = {a, b, c};
    }
    for (int i = 0; i < n; i++) {
        if (arr[i].e == 0) continue;
        u.merge(arr[i].i, arr[i].j);
    }
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i].e == 1) continue;
        if (u.get(arr[i].i) != u.get(arr[i].j)) continue;
        flag = 0;
        break;
    }
    cout << (flag ? "YES" : "NO") << endl;
    return ;
}

int main() {
    int tcase;
    cin >> tcase;
    while (tcase--) {
        solve();
    }
}
