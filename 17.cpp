/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 17.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 16时46分29秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int val(int n) {
    static int str1[20] = {
        0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3,
        6, 6, 8, 8, 7, 7, 9, 8, 8
    };
    static int str2[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
    if (n < 20) return str1[n];
    else if (n < 100) {
        return str2[n / 10] + str1[n % 10];
    } else if (n < 1000) {
        if (n % 100 == 0) {
            return str1[n / 100] + 7;
        } 
        return str1[n / 100] + 10 + val(n % 100);
    } else {
        return 11;
    }
}


int main() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += val(i);
    }
    cout << sum << endl;
    return 0;
}
