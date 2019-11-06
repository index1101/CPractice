/*************************************************************************
	> File Name: 288.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月14日 星期三 18时39分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <set>
#define MAX_N 30000
using namespace std;

typedef pair<int,int> PII;
set<PII> s1, s2;

int arr[MAX_N + 5];

int main() {
    int n, m, ans;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= m; i++) {
        int j = 0;
        int k;
        cin >> k;
        while ( j < k ) {
            j++;
            if (-s1.begin()->first > arr[i] || s1 == 0) {
                s1.insert(-arr[i], j);
            } else {
                s2.insert(arr[i], j);
            } 
            if (s1.size() > i) {
                s2.insert(-s1.begin()->first, s1.begin()->second);
                s1.erase(s1.begin());
            } 
            if (s1.size() < i) {
                s1.insert(-s2.begin()->first, s2.begin()->second);
                s2.erase(s2.begin());
            }
            ans = -s1.begin()->first;
            cout << ans << endl;
        }
    }
    return 0;
}
