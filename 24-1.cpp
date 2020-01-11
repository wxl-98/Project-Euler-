/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 24-1.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 20时47分42秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num[10];
    for (int i = 0; i < 10; i++) num[i] = i;
    int k = 1000000 - 1;
    do {
        next_permutation(num, num + 10);
        k--;
    } while (k);

    for (int i = 0; i < 10; i++){
        cout << num[i];
    }
    cout << endl;
    return 0;
}
