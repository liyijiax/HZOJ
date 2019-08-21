/*************************************************************************
	> File Name: 188.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 14时16分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int num[max_n + 5] = {0};

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!num[i]) num[++num[0]] = i;
        for (int j = 1; j <= num[0]; j++) {
            if (i * num[j] > max_n) break;
            num[i * num[j]] = 1;
            if (i % num[j] == 0) break;
        }
    }
}

int main() {
    init();
    int a, b;
    cin >> b >> a;
    for (int i = 1; i < num[0]; i++) {
        if (num[i] < a) continue;
        if (num[i] > b) break;
        cout << num[i] << endl;
    }
    return 0;
}
