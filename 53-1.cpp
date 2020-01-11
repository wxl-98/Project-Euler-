/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 53-1.cpp
*       &Created Time: 19Century 2019年12月29日 星期日 20时36分00秒 
*                          CST  Day/363 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000000
int f[MAX_N + 5] = {0};

void init() {
    for (int i = 1; i <= MAX_N; i++) {
        for (int j = 2; i * j <= MAX_N; j++) {
            f[i * j] += i;
       //     f[i] += j;
         //   f[i] += i / j;      
        }
       // f[i] -= i;          
    }
    return ;
}

int main() {
    init();
    int sum = 0;
    for (int i = 2; i < MAX_N; i++) {
		if (f[i] > sum) sum = f[i];
    }
    cout << sum << endl;
    return 0;
}
