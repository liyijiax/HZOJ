/*************************************************************************
	> File Name: p119.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月28日 星期日 23时13分33秒
 ************************************************************************/

#include<stdio.h>

int days[] = {
    0, 31, 28, 


}

int Days(int y, int m) {
    return days[m] + (m == 2 && )
}
int prev_day(int &y, int &m, int &d) {
    d -= 1;
    if (d == 0) {
        m -= 1;
        if (m == 0) {
            y -= 1;
            m = 12;
        }
        d = Days(y, m);
    }
}

int next_day(int &y, int &m, int &d) {
    d += 1;
    if (d > Days(y, m)) {
        d = 1;
        m += 1;
        if (m > 12) {
            m = 1;
            y += 1;
        }
    }
    return ;
}
int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
       
    return 0;
}
