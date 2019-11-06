/*************************************************************************
	> File Name: 108.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月21日 星期日 11时11分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>

int main() {
    char c;
    double a, b;
    cin >> c;
    cin >> a >> b;
    switch(c){
        case 'r' : printf("%.2f", a * b); break;
        case 't' : printf("%.2f", a * b / 2); break;
    }
    return 0;
}
