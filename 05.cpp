/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 05.cpp
*       &Created Time: 19Century 2019年12月30日 星期一 16时32分53秒 
*                          CST  Day/364 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 1;
    for (int i = 1; i < 20; i++) {
        if (ans % i == 0) continue;
        ans *= i / gcd(ans, i);
    }
    cout << ans << endl;
    return 0;
}
