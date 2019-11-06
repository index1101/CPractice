/*************************************************************************
	> File Name: 491.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月22日 星期二 20时24分16秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 50

int f[MAX_N + 5] = {0};

int func(int n, int m) {
    if (m > n) return f[n] = pow(2, n);
    if (f[n]) return f[n];
    for (int i = 2; i <= m; i++) {
        f[n] += func(n - i + 1 , m);
    }
    return f[n];
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << func(n + 1, m) << endl;
    return 0;
}
