/*************************************************************************
	> File Name: 3.hu.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月23日 星期六 19时11分37秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define MAX_N 1000000

struct UnionSet {
    int fa[MAX_N + 5], size[MAX_N + 5];
    void init(int n) {
        for (int i = 0; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return (fa[x] = (x = fa[x] ? x : get(fa[x])));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

int ind(int a, int b, int m) {
    return a * m + b + 1;
}

UnionSet u; //定义为全局变量，否则会在栈内局部变量最大两百多万
char g[1005][1005];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> g[i];
    u.init(n * m + 1);
    for (int i = 0; i  < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] - 'O') continue;
            if (j - 1 >= 0 && g[i][j - 1] == 'O') u.merge(ind(i, j, m), ind(i, j - 1, m));
            if (i - 1 >= 0 && g[i - 1][j] == 'O') u.merge(ind(i, j, m), ind(i - 1, j, m));
            if (i == 0 || j == n - 1) u.merge(ind(i, j), 0);
            if (j == 0 || j == m - 1) u.merge(ind(i, j), 0);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

        }
    }
}
