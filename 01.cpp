/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 05.cpp
*       &Created Time: 19Century 2019年12月30日 星期一 16时26分46秒 
*                          CST  Day/364 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000

int val() {
    int sum = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (i % 3 && i % 5) continue;
        sum += i;
    }
    return sum;
}


int main() {
    cout << val() << endl;
    return 0;
}
