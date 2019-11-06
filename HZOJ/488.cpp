/*************************************************************************
	> File Name: 489.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月25日 星期五 18时48分06秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 1000
#define MAX_M 100000

int x[MAX_N + 5];
int y[MAX_N + 5];
long long f1[MAX_M + 5] = {0};
long long f2[MAX_M + 5] = {0};

int dis(int a, int b) {
    return abs(x[a] - x[b]) + abs(y[a] - y[b]);
}

int dp0(int n) {
    if (f1[n]) return f1[n];
    return f1[n] = dp0(n - 1) + dis(n, n - 1);
}

int dp1(int n) {
    if (f2[n]) return f2[n];
    int ans1, ans2;
    ans1 = dp1(n - 1) + dis(n, n - 1);
    ans2 = dp0(n - 2) + dis(n, n - 2);
    return f2[n] = min(ans1, ans2);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    f1[2] = dis(2, 1);
    f2[3] = dis(3, 1);
    cout << dp1(n) << endl;
    return 0;
}
