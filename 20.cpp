/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 20.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 17时45分21秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;
#define MAX_N 300

int ans[MAX_N + 5] = {1, 1, 0};

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= ans[0]; j++) {
            ans[j] *= i;
        }
        for (int k = 1; k <= ans[0]; k++) {
            if (ans[k] < 10) continue;
            ans[k + 1] += ans[k] / 10;
            ans[k] %= 10;
            ans[0] += (ans[0] == k);
        }
    }
    for (int i = 1; i <= ans[0]; i++) {
        sum += ans[i];
    }
    cout << sum << endl;
    return 0;
}

