/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 07.cpp
*       &Created Time: 19Century 2019年12月31日 星期二 18时55分19秒 
*                          CST  Day/365 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 200000

int prime[MAX_N + 5] = {0};
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

int main() {
    init();
   /* for (int i = 1; i <= MAX_N; i++) {
        if (is_prime[i]) continue;
    }*/

    cout << prime[10001] << endl;

    return 0;
}
