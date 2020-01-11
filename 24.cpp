/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 23.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 20时03分28秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 10

int fac[MAX_N];
int num[MAX_N];

void init(int n) {
    fac[0] = 1, num[0] = 1;
    for (int i = 1; i <= n; i++) {
        fac[i] = i * fac[i - 1];
        num[i] = 1;
    }
    return ;
 }

int get_num(int k, int n, int &x) {
    int step = k / n, t = 0;
    x = 0;
    for (int t = 0; t <= step; x += (t <= step)) {
        t += num[x];
    }
    k %= n;
    num[x] = 0;
    return k;
}


int main() {
    init(MAX_N);
    int k = 1000000 - 1;
    for (int i = MAX_N; i >0; i--) {
        int x;
        k = get_num(k, fac[i - 1], x);
        cout << x;
    }
    cout << endl;
    return 0;
}
