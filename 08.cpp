/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 08.cpp
*       &Created Time: 19Century 2019年12月31日 星期二 19时35分52秒 
*                          CST  Day/365 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 1000

char num[MAX_N + 5];

int main() {
    int len = 0;
    while (~scanf("%s", num + len)) len += strlen(num + len);
    long long ans = 0, p = 1, zero = 0;
    for (int i = 0; num[i]; i++) {
        num[i] -= '0';
        if (num[i]) p *= num[i];
        else zero += 1;
        if (i < 13) continue;
        if (num[i - 13]) p /= num[i - 13];
        else zero -= 1;
        if (zero == 0 && p > ans) ans = p;
    }
    cout << ans << endl;
    return 0;
}
