/*************************************************************************
	> File Name: 2.猜拳.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月23日 星期六 16时35分52秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define MAX_N 10000

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i, val[i] = 0;
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]]; 
        val[x] %= 3;
        return fa[x] = root;
    }
    void merge(int a, int b) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = (2 + val[b] - val[a] + 3) % 3;
    }
};

UnionSet u;

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n);
    for (int i = 0;i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        switch (a) {
            case 1: u.merge(b, c); break;
            case 2: {
                if (u.get(b) - u.get(c))  {
                    cout << "Unknown" << endl;
                } else {
                    int res = (u.val[b] - u.val[c] + 3) % 3;
                    switch (res) {
                        case 0: cout << "Tie" << endl; break;
                        case 1: cout << "Loss" << endl; break;
                        case 2: cout << "Win" << endl; break;
                    }
                }
            }
            break;
        }
    }


    return 0;
}
