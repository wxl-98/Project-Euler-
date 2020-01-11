/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 11.cpp
*       &Created Time: 20Century 2020年01月01日 星期三 18时03分19秒 
*                          CST  Day/001 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 20

int grid[MAX_N + 5][MAX_N + 5];
int dir[4][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}};

int val(int x, int y) {
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        int p = 1;
        for (int j = 0; j < 4; j++) {
            int dx = x + dir[i][0] * j;
            int dy = y + dir[i][1] * j;
            if (dx < 0 || dx >= MAX_N) break;
            if (dy < 0 || dy >= MAX_N) break;
            p *= grid[dx][dy];
        }
        if (p > ans) ans = p;
    }
    return ans;
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            int p = val(i, j);
            if (p > ans) ans = p;
        }
    }
    cout << ans << endl;
    return 0;
}
