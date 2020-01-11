/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 23.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 20时57分53秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 28123

int is_prime[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};
int f[MAX_N + 5] = {0};
int num[MAX_N + 5] = {0};

void init() {
    f[1] = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) {
            is_prime[i] = i;
            f[i] = i + 1;
            prime[++prime[0]] = i;
        }

        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            if (i % prime[j] == 0) {
                is_prime[i * prime[j]] = is_prime[i] * prime[j];
                f[i * prime[j]] = f[i] *
                (is_prime[i] * prime[j] * prime[j] - 1) / 
                (is_prime[i] * prime[j] - 1);
                break;
            } else {
                is_prime[i * prime[j]] = prime[j];
                f[i * prime[j]] = f[prime[j]] * f[i];
            }
        }
    }
    return ;
}


int main() {
    f[0] = 0;
    init();
    for (int i = 0; i <= MAX_N; i++) {
        f[i] -= i;
        if (f[i] > i) f[++f[0]] = i;
    }

    for (int i = 1; i <= f[0]; i++) {
        for (int j = 1; j <= f[0]; j++) {
            if (f[i] + f[j] > MAX_N) break;
            num[f[i] + f[j]] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i <= MAX_N; i++) {
        if (!num[i]) sum += i;
    }
    cout << sum << endl;
    return 0;
}
