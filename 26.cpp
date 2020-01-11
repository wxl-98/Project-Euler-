/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 26.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 22时33分30秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 1000

int len[MAX_N + 5];

int get_len(int d) {
    memset(len, 0, sizeof(len));
    int r = 1, t = 1;
    while (d) {
        r *= 10;
        r %= d;
        t += 1;
        if (len[r]) return t - len[r];
        len[r] = t;
    }
    return 0;
}

int main() {
    int d = 0, l = -1;
    for (int i = 2; i < MAX_N; i++) {
        int temp = get_len(i);
        if (l < temp) {
            l = temp;
            d = i;
        }
    }
    cout << d << endl;
    cout << l << endl;
    return 0;
}
