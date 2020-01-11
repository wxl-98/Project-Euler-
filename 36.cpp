/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 36.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 20时00分45秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000000

int is_val(int n, int base) {
    int temp = 0;
    while (n) {
        temp = temp * base + n % base;
        n /= base;
    }
    return temp;
}

int main() {
    int sum = 0;
    for (int i = 1; i <= MAX_N; i++) {
        if (is_val(i, 2) == is_val (i, 10) && is_val(i, 10) == i) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
