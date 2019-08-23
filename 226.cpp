/*************************************************************************
	> File Name: 26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月23日 星期五 14时43分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a, b, p;
    int ans =1;
    scanf("%d %d %d", &a, &b, &p);
    for (int i = 0; i < b; i++) {
        ans *= a;
        ans %= p;
    }
    printf("%d",ans);
}
