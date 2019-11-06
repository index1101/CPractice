/*************************************************************************
	> File Name: 128.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月20日 星期二 18时09分35秒
 ************************************************************************/

#include<iostream>
#include <iomanip>
using namespace std;

int val[1000];

int main() {
    int n;
    double ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val[i];
        ans += val[i];
    }
    cout << fixed << setprecision(2) << ans / n << endl;
    return 0;
}
