/*************************************************************************
	> File Name: 1.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月29日 星期四 17时27分10秒
 ************************************************************************/

#include <iostream>
using namespace std;

int power(int a, int b, int p) {
    int ans = 1 % p;
    for (; b; b >>= 1) {
        if (b & 1) ans = (long long)ans * a % p;
        a = (long long)a * a % p;
    }
    return ans;
}

int main() {
    int a, b, p, ans;
    cin >> a >> b >> p;
    ans = power(a, b, p);
    cout << ans << endl;
    return 0;
}
