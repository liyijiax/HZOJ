/*************************************************************************
	> File Name: 213.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年09月29日 星期日 19时59分07秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define max_n 30

int a[max_n + 5] = {0};
int b[10] = {0};

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        switch (a[i] / 10) {
            case 10 : b[1]++; break;
            case 9 : b[2]++; break;
            case 8 : b[3]++; break;
            case 7 : b[4]++; break;
            case 6 : b[5]++; break;
            default : b[6]++; break;
        }
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    for (int i = 1; i <= 6; i++) {
        (i - 1) && cout << " ";
        cout << b[i];
    }
    return 0;
}
