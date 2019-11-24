/*************************************************************************
	> File Name: 3.湖泊.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月23日 星期六 18时17分57秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define MAX_N 1000000

char input[1005][1005];

struct UnionSet {
    int fa[MAX_N + 5];
    void init(int n) {
        for (int i = 0; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return (fa[x] = (x - fa[x]) ? get(fa[x]) : x);
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

UnionSet u;

void get_besides(int &i, int &j) {
    if (i > 0 && input[i - 1][j] == 'O') {
        i--;
    } else if (j > 0 && input[i][j - 1] == 'O') {
        j--;
    }
    return ;
}

int possible(int a, int b) {
    return (input[a][b] == 'O');
}

int bound(int a, int b, int n, int m) {
    if (a == 0 || b == 0) return 1;
    if (a == n - 1 || b == m - 1) return 1;
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n * m + 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> input[i][j];
        }
    }/*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << input[i][j];
        }
    }*/
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (possible(i, j)) { //是水域
                int a = i, b = j; //邻接点坐标
                get_besides(a, b); //获得邻接点坐标
                u.merge(i * m + j + 1, a * m + b + 1);
                if (bound(i, j, n, m)) u.merge(i * m + j + 1, 0);
            } else {
                    u.merge(i * m + j + 1, 0);
            }
        }
    }
    int count = 0;
    //cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int ind = i * m + j + 1;
            //cout << u.get(ind) << " ";
            if (u.get(ind) != 0) count++;
        }
        //cout << endl;
    }
    cout << count;
    return 0;
}
