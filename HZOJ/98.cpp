/*************************************************************************
	> File Name: 12.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月19日 星期五 18时34分38秒
 ************************************************************************/

#include<iostream>
#include <stdio.h>
using namespace std;

#define pi 3.14
int main() {
    double r, h;
    cin >> r >> h;
    printf("%.2f", r * r * pi);
    printf("%.2f", r * r * pi *h);
    return 0;
}
