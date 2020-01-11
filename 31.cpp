/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 31.cpp
*       &Created Time: 20Century 2020年01月03日 星期五 15时21分50秒 
*                          CST  Day/003 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 8
#define MAX_M 200

int w[MAX_N + 5] = {1, 2, 5, 10, 20, 50, 100, 200};

int f[MAX_M + 5] = {0};

int main() {
    f[0] = 1;
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 1; j <= MAX_M; j++) {
            if (j >= w[i]) f[j] += f[j - w[i]];
        }
    }
    cout << f[MAX_M] << endl;
    return 0;
}
