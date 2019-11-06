/*************************************************************************
	> File Name: 38.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月27日 星期日 16时49分47秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100

long long f[MAX_N + 5] = {0};

long long F(int n) {
    if (f[n]) return f[n];
    return f[n] = F(n - 1) + F(n - 2);
}

int main() {
    int n;
    cin >> n;
    f[1] = 1, f[2] = 2;
    cout << F(n) << endl;
    return 0;
}
