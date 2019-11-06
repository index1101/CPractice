/*************************************************************************
	> File Name: 138.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月19日 星期四 20时15分36秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 2 * i; j++) {
            cout << "A";
        }
        cout << endl;
    }
    return 0;
}
