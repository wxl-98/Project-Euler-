/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 12.cpp
*       &Created Time: 20Century 2020年01月01日 星期三 20时27分06秒 
*                          CST  Day/001 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000000

int f[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[i * prime[j]] = cnt[i] + 1;
            } else {
                f[i * prime[j]] = f[i] * f[prime[j]];
                cnt[i * prime[j]] = 1;
            }
        }
    }
    return ;
}

int main() {
    init();
    long long n = 0, fac = 0;
    while (fac <= 500) {
        n += 1;
        if (n & 1) {
        fac = f[n] * f[(n + 1) >> 1];
        } else {
            fac = f[n >> 1] * f[n - 1];
        }
    }
    cout << n * (n + 1) / 2 << endl;
    return 0;
}
