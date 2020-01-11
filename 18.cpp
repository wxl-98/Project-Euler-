/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 18.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 17时16分12秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 20

int val[MAX_N + 5][MAX_N + 5] = {0};
int keep[MAX_N + 5][MAX_N + 5] = {0};

int dfs(int i, int j, int n) {
    if (i + 1 == n) return val[i][j];
    if (keep[i][j]) return keep[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return keep[i][j] = (val1 > val2 ? val1: val2) + val[i][j];
}


int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            cin >> val[i][j];
        }
    }
    cout << dfs(0, 0, MAX_N) << endl;
    return 0;
}
