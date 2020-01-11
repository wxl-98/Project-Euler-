/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 16.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 15时04分43秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;
#define MAX_N 400

int str[MAX_N + 5] = {0};

int main() {
    str[0] = str[1] = 1;
    for (int i = 0; i < 100; i++) {
        for (int j = 1; j <= str[0]; j++) str[j] *= 1024;
        for (int k = 1; k <= str[0]; k++) {
            if (str[k] < 10) continue;
            str[k + 1] += str[k] / 10;
            str[k] %= 10;
            str[0] += (k == str[0]);
        }
    }

    int sum = 0;
    for (int i = str[0]; i >= 1; i--) {
        sum += str[i];
    }
    cout << sum << endl;
    return 0;
}

