/*************************************************************************
	> File Name: 471.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月16日 星期六 18时08分26秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define max_n 200

int res[max_n + 5];
int fac[max_n + 5];
int main() {
    char ch;
    while (~scanf("%c", &ch)) {
        res[++res[0]] = atoi(&ch);
    }
    while (~scanf("%c", &ch)) {
        fac[++fac[0]] = atoi(&ch);
    }


    return 0;
}
