/*************************************************************************
	> File Name: 464.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月19日 星期四 20时51分42秒
 ************************************************************************/

#include <iostream>
using namespace std;
int main() {
	int x, y, ans = 0;
	cin >> x >> y;
	for (int i = x; i <= y; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			ans++;
		}
	}
	cout << ans << endl;
    return 0;
}
