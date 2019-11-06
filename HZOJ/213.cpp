/*************************************************************************
	> File Name: 213.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月10日 星期二 18时51分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX_N 30

int a[MAX_N + 5];
int b[6];

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    memset(b, 0, 6);
    for (int i = 0; i < n; i++) {
        if (a[i] < 60) b[6]++;
        else if (a[i] < 70) b[5]++;
        else if (a[i] < 80) b[4]++;
        else if (a[i] < 90) b[3]++;
        else if (a[i] < 100) b[2]++;
        else  b[1]++;
    }
    cout << b[1] << " " << b[2] << " " << b[3] << " " << b[4] << " " << b[5] << " " <<  b[6] << endl;
    return 0;
}
