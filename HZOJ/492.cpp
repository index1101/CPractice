/*************************************************************************
	> File Name: 492.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月25日 星期五 23时25分27秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int func(int n) {
    return pow(2, n - 1); 
}

int func1(int k) {
    int ans = 0, st;
    if (k % 2 == 0) st = 0;
    else st = 1;
    for (int i = st; i <= k - 2; i += 2) {
        ans += func((k - i ) / 2 );
    }
    return ans;
}

int main() {
    int k;
    cin >> k;
    cout << func1(k) << endl;
    return 0;
}
