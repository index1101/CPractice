/*************************************************************************
	> File Name: 2.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月19日 星期四 19时17分55秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 60) cout << "D" << endl;
    else if (n < 75) cout << "C" << endl;
    else if (n < 85) cout << "B" << endl;
    else cout << "A" << endl;
    return 0;
}
