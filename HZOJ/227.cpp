/*************************************************************************
	> File Name: 227.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月29日 星期四 17时39分15秒
 ************************************************************************/

#include <iostream>
using namespace std;

long long mul(long long a, long long b, long long p) {
    long long ans = 0;
    for (; b; b >>= 1) {
        if (b & 1) ans = (ans + a) % p;
        a = a * 2 % p;
    }
    return ans;
}
int main() {
    long long a, b, p, ans;
    cin >> a >> b >> p;
    ans = mul(a, b, p);
    cout << ans << endl;
    return 0;
}
