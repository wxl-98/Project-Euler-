/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 29.cpp
*       &Created Time: 19Century 2019年12月29日 星期日 14时16分11秒 
*                          CST  Day/363 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 10000
#define MAX_M 210

int result[MAX_N + 5][MAX_M + 5];

int result_len = 0;

int find(int *num) {
    for (int i = 0; i < result_len; i++) {
        if (memcmp(result[i], num, sizeof(int) *MAX_M)) continue;
        return i + 1;
    }
    return 0;
}

int main() {
    for (int a = 2; a <= 100; a++) {
        for (int b = 2; b <= 100; b++) {
            int temp[MAX_M] = {1, 1, 0};
            for (int i = 0; i < b; i++) {
                for (int j = 1; j <= temp[0]; j++) temp[j] *= a;
                for (int j = 1; j <= temp[0]; j++) {
                    if (temp[j] < 10) continue;
                    temp[j + 1] += temp[j] / 10;
                    temp[j] %= 10;
                    temp[0] += (j == temp[0]);
                }
            }
            if (find(temp) == 0) {
                memcpy(result + result_len, temp, sizeof(int) * MAX_M);
                result_len += 1;
            }
        }
    }
    cout << result_len << endl;
    return 0;
}
