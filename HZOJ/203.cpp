/*************************************************************************
	> File Name: 203.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月20日 星期五 15时07分23秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];
int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i * n + j];
        }
    }
    sort(arr, arr + m * n);
    for (int i = 0; i < m * n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
