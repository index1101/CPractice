/*************************************************************************
	> File Name: 487.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月25日 星期五 18时03分40秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 45

long long f[MAX_N + 5] = {0};

long long func(int n) {
    if (f[n]) return f[n];
    return f[n] = func(n - 1) + func(n - 2);
}

int main() {
    int n;
    f[1] = f[2] = 1;
    cin >> n;
    cout <<  2 * func(n) << endl;
    return 0;
}
