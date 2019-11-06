/*************************************************************************
	> File Name: 270-1.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月08日 星期二 20时12分31秒
 ************************************************************************/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;
 


deque<int> q;
vector<int> arr;

int main() {
    int n, m, a, ans;
    cin >> n >> m;
    arr.push_back(0);
    for (int i = 1; i <= n; i++) cin >> a, arr.push_back(a);
    q.push_back(0);
    ans = arr[1];
    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];
        if (i - q.front() > m) q.pop_front();
        ans = max(ans, arr[i] - arr[q.front()]);
        while (!q.empty() && arr[q.back()] > arr[i]) q.pop_back();
        q.push_back(i);
    }
    cout << ans << endl;
    return 0;
}
