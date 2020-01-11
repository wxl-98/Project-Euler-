/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 14.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 10时47分29秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000000
#define size 1000000

int keep[size + 5] = {0};

long long get_len(long long n) {
    if (n == 1) return 1;
    if (n <= size && keep[n]) return keep[n];
    int ret;
    if (n & 1) ret =get_len(3 * n + 1) + 1;
    else ret = get_len(n >> 1) + 1;
    if (n < size) keep[n] = ret;
    return ret;
}
int main() {
    int ans = 0, num = 0;
    for (int i = 1; i < MAX_N; i++) {
        int a = get_len(i);
        if (a > num) num = a, ans = i;
    }
    cout << ans << endl;
    return 0;
}
