/*************************************************************************
	> File Name: 5.银河英雄传说.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月23日 星期六 20时22分49秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define MAX_N 500000

struct UninonSet {
    int fa[MAX_N + 5], size[MAX_N + 5], val[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i, size[i] = 1, val[i] = 0;
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root =get(fa[x]);
        val[x] += val[fa[x]];
        return fa[x] == root;
    }
    void merge(int a, int b) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = size[bb];
        size[bb] += size[aa];
        return ;
    }
};

UninonSet u;

int main() {
    int n, a, b;
    string op;
    cin >> n;
    u.init(n);
    for (int i = 0; i < n; i++) {
        cin >> op >> a >> b;
        switch (op[0]) {
            case 'M': u.merge(a, b); break;
            case 'C': {
                if (u.get(a) - u.get(b)) {
                    cout << "-1" << endl;
                } else {
                    cout << max(0, abs(u.val[a] - u.val[b]) - 1) << endl; 
                }
            }
        }
    }
    return 0;
}
