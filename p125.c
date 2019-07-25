/*************************************************************************
	> File Name: p125.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 19时52分58秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    int h,m,s,t;
    char* str;
    scanf("%d%d%d%d",&h,&m,&s,&t);
    int hp = t / 3600;
    int mp = t % 3600 / 60;
    int tp = t % 60;
    int te = (tp + t) % 60;
    int me = ((mp + m) + (tp + t) / 60) % 60;
    int he = ((hp + h) + (mp + m) / 60) % 12;
    if (he / 24) {
        str = "am";
    } else if (he / 12) {
        str = "pm";
    } else {
        str = "am";
    }
    if ( he == 0 && str == "pm" ){
        he = 12;
    }
    printf("%d:%d:%d%s\n", te, me, he, str);
}
