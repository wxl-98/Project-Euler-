/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 22.cpp
*       &Created Time: 20Century 2020年01月02日 星期四 19时32分21秒 
*                          CST  Day/002 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>

#include <stdio.h>

#include <inttypes.h>

#include <algorithm>

#include "22.h"

 

int32_t main() {

    int64_t i = 0, len, sum, total = 0;

    while (nameList[i++].length() != 0) ;

    std::sort(nameList, nameList + i - 1);

    i = 0;

    while (nameList[i].length() != 0) {

        sum = 0;

        for (int32_t j = 0; j < nameList[i].length(); j++) {

            sum += nameList[i][j] - 'A' + 1;

        }

        total += sum * (++i);

    }

    printf("%"PRId64"\n", total);

    return 0;

}
