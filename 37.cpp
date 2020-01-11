/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 37.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 20时34分20秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {1, 1, 0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
 }

int is_val(int n) {
    if (is_prime[n] != 0) return 0;
    int x = n, h;
    while (x) {
        if (is_prime[x] != 0) return 0;
        x /= 10;
    }
    h = (int)pow(10, floor(log10(n)));
    x = n;
    while (x) {
        if (is_prime[x] != 0) return 0;
        x -= (x / h) * h;
        h /= 10;
    }
    return 1;
}


int main() {
    init();
    int sum  = 0;
    for (int i = 2; i <= prime[i]; i++) {
        if (prime[i] < 10) continue;
        if (!is_val(prime[i])) continue; 
        sum += prime[i];
    }
    cout << sum << endl; 
    return 0;
}
