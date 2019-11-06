/*************************************************************************
	> File Name: 228.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月25日 星期三 22时31分44秒
 ************************************************************************/

#include <iostream>
using namespace std;

int weight[20][20];
int f[1 << 20][20];
int hamilton(int n, int weight[20][20]) {
    memset(f, 0x3f, sizeof(f));
    f[1][0] = 0;
    for (int i = 1; i < 1 << n; i++) {
        for (int j = 0; j < n; j++) if (i >> j & 1)
            for (int k = 0; k < n; k++) if ((i ^ 1 << j) >> k & 1)
                f[i][j] = min(f[i][j], f[i ^ 1 << j][k] + weight[k][j]);
        return f[(1 << n) - 1][n - 1];
    }
}

int main() {
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cin >> weight[i][j];
        }
    }
    cout << hamilton(x, weight[20][20]) << endl;
    return 0;
}
