/*************************************************************************
	> File Name: 4.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月19日 星期五 18时10分38秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a;
    int b, c, d;
    cin >> a;
    
    b = a % 10;
    a /= 10;
    c = a % 10;
    a/= 10;
    d = a % 10;
    cout << d << endl;
    cout << c << endl;
    cout << b << endl;
    return 0;
}
