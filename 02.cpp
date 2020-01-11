/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 02.cpp
*       &Created Time: 19Century 2019年12月30日 星期一 16时34分05秒 
*                          CST  Day/364 and Week/52 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;
#define MAX_N 44
#define N 4000000

int f[MAX_N + 5];

int main() {
    long long sum = 0;
    f[1] = 1, f[2] = 2;
    for (int i = 3; i <= MAX_N && f[i - 1] + f[i - 2] <= N; i++) {
        f[i] = f[i - 1] + f[i - 2];
        if (f[i] & 1) continue;
        sum += f[i];
    }
    cout << sum << endl;

    return 0;
}
