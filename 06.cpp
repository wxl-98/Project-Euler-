/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 06.cpp
*       &Created Time: 19Century 2019年12月31日 星期二 15时03分37秒 
*                          CST  Day/365 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;


int main () {
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++) {
        sum1 += i;
        sum2 += i * i;
    }
    cout << sum1 * sum1 - sum2 << endl;
    return 0;
}
