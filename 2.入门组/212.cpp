/*************************************************************************
	> File Name: 212.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年09月29日 星期日 19时41分58秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

string name[10];

int main() {
    for (int i = 0; i < 10; i++) cin >> name[i];
    sort(name, name + 10);
    for (int i = 0; i < 10; i++) cout << name[i] << endl;
    return 0;
}
