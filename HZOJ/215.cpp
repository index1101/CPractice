/*************************************************************************
	> File Name: 215.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月19日 星期四 19时45分30秒
 ************************************************************************/

#include <iostream>
using namespace std;

char str[11][41];
int a[41];

int main() {
    int n, frac;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        int ans = 0;
        for (int j = 0; j < 4; j++) {
            cin >> frac;
            ans += frac;
        }
        a[i] = ans;
    }
    sort(a, a + n);
    for (int i = 0; i < 3; i++) {
        cout << 
    }
    return 0;
}
