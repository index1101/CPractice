/*************************************************************************
	> File Name: 89.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月21日 星期三 18时54分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a =  n % 10;
    n /= 10;
    int b = n % 10;
    cout << b << endl;
    cout << a << endl;
    return 0;
}
