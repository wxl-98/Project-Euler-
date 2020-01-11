/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 13.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 09时55分10秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 52

char str[MAX_N + 5] = {0};
int ans[MAX_N + 5] = {0};

int main() {
    while (~scanf("%s", str)) {
        int len = strlen(str);
        if (len > ans[0]) ans[0] = len;
        for (int i = 0; i < len; i++) {
            ans[len - i] += str[i] - '0';
        }

        for (int i = 1; i <= ans[0]; i++) {
            if (ans[i] < 10) continue;
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
            ans[0] += (ans[0] == i);
        }
    }

    for (int i = ans[0]; i > ans[0] - 10; i--) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
