/*************************************************************************
	> File Name: 462.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 16时33分18秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include <math.h>

int main() {
    long long count, man = 0, women = 0;
    long long len;
    long long sum = 0;
    long long num = 0;
    char c;
    char s[30];
    scanf("%lld", &count);
    for (int i = 0; i < count; i++){
        scanf("%c", &c);
        scanf("%[^\n]", s);
        switch (s[0]) {
            case 'i': {
                len = strlen(s);
                if ((s[len - 2] - '0') % 2 == 1) man++;
                else women++;
                break;
            } 
            case 'q': {
                len = strlen(s);
                long long p = 1;
                for (int i = len - 1; i > 1; i--) {
                    sum += (s[i] - '0') * p;
                    p *= 10;
                }
                num++;
				break;
            }
        }
    }
    printf("%lld %lld %lld\n", man, women, (long long)floor(sum / num + 0.5));
    return 0;
}
