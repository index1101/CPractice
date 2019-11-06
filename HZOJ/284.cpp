/*************************************************************************
	> File Name: 284.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月12日 星期一 19时47分23秒
 ************************************************************************/

#include<iostream>
#include <set>
#include <cstdio>
#include <cmath>
#include <map>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
#define MAX_N 10000

struct Data {
    int p, d;
} arr[MAX_N + 5];

bool cmp(const Data &a, const Data &b) {
    return a.d < b.d;
}

typedef pair<int, int> PII;
set<PII> s;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i].p >> arr[i].d;
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        if (arr[i].d > s.size()) {
            s.insert(PII(arr[i].p, i));
        } else if (arr[i].p > s.begin()->first) {
            s.insert(PII(arr[i].p, s.begin()->second));
            s.erase(s.begin());
        }
    }
    int sum = 0;
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        sum += iter->first;
        cout << iter->first << " " << iter->second << endl;
    }
    cout << sum << endl;
    return 0;
    }
