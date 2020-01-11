/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 39.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 22时12分35秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000

int cnt[MAX_N + 5] = {0};

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    for (int i = 1; i <= 32; i++) {
        for (int j = i + 1; j <= 32; j++) {
            if (gcd(i, j) - 1) continue;
            int a = 2 * i * j;
            int b = j * j - i * i;
            int c = i * i + j * j;
            for (int p = a + b + c; p <= MAX_N; p += (a + b + c)) {
                cnt[p] += 1;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= MAX_N; i++) {
        if (cnt[i] > cnt[ans]) ans = i;
    }
    cout << ans << endl;
    return 0;
}
