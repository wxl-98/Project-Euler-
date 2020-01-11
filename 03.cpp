/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 03.cpp
*       &Created Time: 19Century 2019年12月30日 星期一 22时57分53秒 
*                          CST  Day/364 and Week/52 of this year
*       &Description:
***********************************************************/



#include <iostream>
using namespace std;
#define MAX_N 600851475143LL

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {1, 1, 0};

void init() {
    for (long long i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    long long ans = 0;
    init();
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i] || MAX_N % is_prime[i]) continue;
       // if (MAX_N % is_prime[i]) continue;
       // ans = is_prime[i];
        if(is_prime[i] > ans) ans = is_prime[i];
    }
    cout << ans << endl;
    return 0;
}
