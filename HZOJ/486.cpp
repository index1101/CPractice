/*************************************************************************
	> File Name: 486.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月22日 星期二 18时41分39秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000

long long f[MAX_N + 5] = {0};


long long func(int n) {
    if (f[n] >= 12345) f[n] %= 12345;
    if (f[n]) return f[n];
    return f[n] = func(n - 1) + func(n - 2) * 2;
}

int main() {
    int n;
    f[1] = 1, f[2] = 3;
    cin >> n;
    cout << func(n) % 12345 << endl;
    return 0;
}
