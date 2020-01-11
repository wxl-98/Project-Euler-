/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 04.cpp
*       &Created Time: 19Century 2019年12月31日 星期二 11时13分35秒 
*                          CST  Day/365 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000

int val(int n, int base) {
    int x = n, tmp = 0;
    while (x) {
        tmp = tmp * base + x % base;
        x /= base;
    }

    return tmp == n;

}

int main () {
    int ans = 0;
    for (int i = 100; i < MAX_N; i++) {
        for (int j = i; j < MAX_N; j++) {
            if (val(i * j, 10) && i * j > ans) ans = i * j;
        }
    }
    cout << ans << endl;
    return 0;
}
