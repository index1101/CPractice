/*************************************************************************
	> File Name: 111.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月21日 星期日 12时04分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 3) {
        cout << 13 << endl;
    } else {
        cout << 13 + (n - 3) * 2.3 + 1 << endl;
    }
    return 0;
}
