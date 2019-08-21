/*************************************************************************
	> File Name: 195.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 15时42分29秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000

int people[max_n + 5] = {0};

// 00000111111找第一个１
int binary_search(int *num, int head, int tail, int x) {
    while (head < tail) {
        int mid = (head + tail) >> 1; // 注意(4 + 5) / 2 下取整死循环
        if (num[mid] < x) head = mid + 1;
        else tail = mid;
    }
    return num[head];
}

int main() {
    int n, m, x;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> people[i];
    }
    int flag = 0;
    for (int j = 1; j <= m; j++) {
        cin >> x;
        flag && cout << " ";
        cout << binary_search(people, 1, n, x);
        flag = 1;
    }
    return 0;
}
