/*************************************************************************
	> File Name: 214.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月10日 星期二 20时29分14秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int a[30];

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, k;
    double ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    cin >> k;
    for (int i = 0; i < k; i++) {
        ans += a[i];
    }
    double ans1 = ans / k; 
    printf("%.2f\n", ans1);
    return 0;
}
