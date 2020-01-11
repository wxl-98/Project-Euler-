/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 21.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 18时03分19秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 10000

int is_prime[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};
int d[MAX_N + 5] = {0};

void init() {
    d[1] = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;
            d[i] = i + 1;
            is_prime[i] = i;
        }
        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            if (i % prime[j] == 0) {
                is_prime[i * prime[j]] = is_prime[i] * prime[j];
                d[i * prime[j]] = d[i] * (is_prime[i] * prime[j] * prime[j] - 1) / (is_prime[i] * prime[j] - 1);
                break;
            } else {
                is_prime[i * prime[j]] = prime[j];
                d[i * prime[j]] = d[prime[j]] * d[i];
            }
        }
    }
    return ;
}


int main() {
    int sum = 0;
    init();
    for (int i = 0; i <= MAX_N; i++) {
        d[i] -= i;
    }
    for (int i = 0; i <= MAX_N; i++) {
        if (d[i] != i && d[i] <= MAX_N && d[d[i]] == i) sum += i;
    }
    cout << sum << endl;
    return 0;
}
