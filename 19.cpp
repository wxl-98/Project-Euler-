/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 19.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 17时25分15秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int val(int y, int m, int d) {
    if (m == 1 || m== 2) {
        y--;
        m += 12;
    }
    int w;
    w = (d + 2 * m + 3 * (m + 1) / 5
        + y + y / 4 - y / 100
        + y / 400) % 7;
    return w;
}

int main() {
    int sum = 0;
    for (int y = 1901; y < 2001; y++) {
        for (int m = 1; m <= 12; m++) {
            if (val(y, m, 1) == 6) {
                sum ++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
