/*************************************************************************
	> File Name: 110.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月21日 星期日 12时00分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int main() {
    double X;
    cin >> X;
    if (X <= 15) {
        printf("%.2f\n", 6 * X );
    } else {
        printf("%.2f\n", 9 * (X - 15 ) + 90);
    }
    return 0;
}
