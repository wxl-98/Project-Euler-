/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 32.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 15时57分46秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;
#define MAX_N 3000000

int keep[10] = {1, 1};

void fac() {
    for (int i = 2; i < 10; i++) {
        keep[i] = i * keep[i - 1];
    }
}


int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += keep[(x % 10)];
        x /= 10;
    }
    return temp == n;
} 


int main() {
    fac();
    int sum = 0;
    for (int i = 3; i <= MAX_N; i++) {
        if (is_val(i)) sum += i;
    }
    cout << sum << endl;
    return 0;
}

