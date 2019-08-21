/*************************************************************************
	> File Name: 243.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 18时01分11秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
#include <cstring>
#include <cinttypes>
using namespace std;
#define max_n 1000000
typedef long long int1;

int1 val[max_n + 5] = {0};

void add(int1 *val, int s, int e, int d) {
    for (int i = s; i <= e; i += d) {
        val[i]++;
    }
}

void find(int1 *val) {
    int1 sum = 0;
    for (int i = 1; i <= max_n; i++) {
        sum += val[i];
        if (sum & 1) {
            printf("%d %lld\n", i, val[i]);
            return ;
        }
    }
    printf("Poor QIN Teng:(\n");
    return ;
}

int main() {
    int t, n, s, e, d;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> s >> e >> d;
            add(val, s, e, d);
        }
        find(val);
        memset(val, 0, sizeof(val));
    }
    return 0;
}
