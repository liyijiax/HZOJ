/*************************************************************************
	> File Name: 189.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月21日 星期三 14时28分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int in[max_n + 5];
int out[max_n + 5];

int binary_search(int x, int teal) {
    int head = 0;
    while (head <= teal) {
        int mid = (head + teal) >> 1;
        if (in[mid] == x) return mid;
        if (in[mid] > x) teal = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        cin >> in[i];
    }
    for (int j = 1; j <= b; j++) {
        cin >> out[j];
    }
    int flag = 0;
    for (int j = 1; j <= b; j++) {
        flag && cout << " ";
        cout << binary_search(out[j], a);
        flag = 1;
    }
    return 0;
}
