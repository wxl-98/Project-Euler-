/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 09.cpp
*       &Created Time: 20Century 2020年01月01日 星期三 16时02分06秒 
*                          CST  Day/001 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 1000

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 0;
    for (int n = 1; n < 33; n++) {
        for (int m = n + 1; m * m + n * n < MAX_N; m++) {
            if (gcd(n, m) - 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            if (1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = a * b * c *(int)pow(k, 3);
            }
            if (ans) break;
        }
        if (ans) break;
    }
    cout << ans << endl;
    return 0;
}
