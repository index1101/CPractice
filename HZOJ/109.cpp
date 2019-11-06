/*************************************************************************
	> File Name: 109.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月21日 星期日 11时54分17秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c, d;
    a = n % 10;
    n /= 10;
    if (a % 2 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    b = n % 10;
    n /= 10;
    if (b % 2 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    c = n % 10;
    n /= 10;
    if (c % 2 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    d = n % 10;
    n /= 10;
    if (d % 2 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
