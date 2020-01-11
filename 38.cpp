/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 38.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 22时05分40秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;

int digit(long long n) {
    if (n == 0) return 1;
    return floor(log10(n)) + 1;
}

int calc(int x) {
    long long n = 1, ans = 0;
    while (digit(ans) < 9) {
        ans *= pow(10, digit(x * n));
        ans += n * x;
        n += 1;
    }
    if (digit(ans) - 9) return 0;
    int num[10] = {1, 0};
    int temp = ans;
    while (temp) {
        if (num[temp % 10]) return 0;
        num[temp % 10] += 1;
        temp /= 10;
    }
    return ans;
}


int main() {
    long long ans = 0;
    for (int i = 1; i < 10000; i++) {
        if (calc(i) > ans) ans = calc(i);
    }
    
    cout << ans << endl;
    return 0;
}
