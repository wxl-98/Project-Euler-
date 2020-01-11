/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 30.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 15时08分43秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 200000

int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 2; i < MAX_N; i++) {
        if (is_val(i)) sum += i;
    }
    cout << sum << endl;
    return 0;
}
