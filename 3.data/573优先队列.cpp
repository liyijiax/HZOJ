/*************************************************************************
	> File Name: 573优先队列.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月02日 星期六 14时56分48秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <set>
using namespace std;

struct Data {
    Data(int t, int id, int p) : t(t), p(p), id(id) {}
    int t, id, p;
    bool operator<(const Data &a) const {
        if (t - a.t) return t < a.t;
        if (id - a.id) return id < a.id;
    }
};

set<Data> s;

int main() {
    string op;
    int id, p, k;
    while (cin >> op) {
        if (op == "#") break;
        cin >> id >> p;
        s.insert(Data(p, id, p));
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        int t = s.begin()->t;
        int id = s.begin()->id;
        int p = s.begin()->p;
        s.erase(s.begin());
        cout << id << endl;
        s.insert(Data(t + p, id, p));
    }
    return 0;
}

// 具备思维复杂度，不具有编码复杂度，面试容易考
