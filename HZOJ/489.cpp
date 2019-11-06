/*************************************************************************
	> File Name: 489.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月25日 星期五 19时37分49秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000

long long f0[MAX_N + 5] = {0};
long long f1[MAX_N + 5] = {0};

long long func1(int);

long long func0(int n) {
    if (f0[n]) return f0[n];
    f0[n] = func0(n - 1) * 9 + func1(n - 1);
    if (f0[n] >= 12345) return f0[n] %= 12345;
    else return f0[n];
}

long long func1(int n) {
    if (f1[n]) return f1[n];
    f1[n] = func0(n - 1) + func1(n - 1) * 9;
    if (f1[n] >= 12345) return f1[n] %= 12345;
    else return f1[n];
}

int main() {
    int n;
    cin >> n;
    f1[1] = 1;
    f0[1] = 8;
    cout << func0(n) << endl;
    return 0;
}
