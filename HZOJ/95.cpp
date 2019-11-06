/*************************************************************************
	> File Name: 9.c
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月19日 星期五 18时26分02秒
 ************************************************************************/

#include<iostream>

using namespace std;
int main() {
    int n, m;
    m = 0;
    cin >> n;
    for (int i = 0; i < 2; i++) {
        m = m * 10 + n % 10;
        n /= 10;
    }
    cout << m << endl;
    return 0;
}
