/*************************************************************************
	> File Name: 215.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年09月29日 星期日 20时28分42秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define max_n 40

struct stu{
    string name;
    int math;
    int chn;
    int eng;
    int map;
    int score;
} student;

student sum[max_n + 5];

int cmp(student a, student b) {
    return a.score > b.score;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sum[i].name;
        cin >> sum[i].name >> sum[i].math >> sum[i].chn >> sum[i].eng >> sum[i].map;
        sum[i].score = sum[i].math + sum[i].chn + sum[i].eng + sum[i].map;
    }
    sort(sum, sum + n, cmp);
    for (int i = 0; i < 3; i++) cout << sum[i].name;
    return 0;
}
