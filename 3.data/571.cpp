/*************************************************************************
	> File Name: 571.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月31日 星期四 20时48分07秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <set>
using namespace std;
#define MAX_N 100
int arr[MAX_N + 5][MAX_N + 5];

struct Data {
    Data(int cnt, int x, int y) {
        x = x, y = y, cnt = cnt;
    } 
    int cnt, x, y;
};

struct DataCompare {
    bool operator()(const Data &a, const Data &b) const {
        if (a.cnt - b.cnt) return a.cnt < b.cnt;
        if (a.x - b.x) return a.x < b.x;
        return a.y < b.y;
    }
};

set<Data, DataCompare> s;

int main() {
    int x, y, n;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j ,+ n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1 && i < j) {
                s.insert(Data(i, j, 0));
            }
        }
    }
    while (s.size()) {
        int x = s.begin()->x;
        int y = s.begin()->y;
        int cnt = s.begin()->cnt;
        s.erase(s.begin());
        for (int i = 1; i <= n; i++) {
            if (arr[y][i] != 1) continue;
            if (arr[x][i]) continue;
            arr[i][x] = cnt + 1;
            s.insert(Data(x, i, cnt + 1));
        }
    }
    cout << arr[x][y] - 1 << endl;;
    return 0;
}
//看书先自己想想，自己现有印象，会做不是终点
//思考为什么自己看不懂，听课就能听懂，反思，那么以后自学能力才能上台阶
//讲任何东西之前都得自己先看，有自觉，知道为什么不会，才能提高
//预习不是为了做回
//留的作业都是这个书上的
