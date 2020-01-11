/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 35.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 19时45分54秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 1000000

int prime[MAX_N + 5];
int is_prime[MAX_N + 5] = {0};

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
    int w = floor(log10(n)) + 1;
    int h = pow(10, w - 1);
    int temp = n;
    for (int i = 1; i < w; i++) {
        temp = temp % 10 * h + temp / 10;
        if (is_prime[temp]) return 0;
    }
    return 1;
}


int main() {
    init();
    int sum = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (!is_val(prime[i])) continue;
        sum += 1;
    }
    cout << sum << endl;
    return 0;
}
