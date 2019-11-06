/*************************************************************************
	> File Name: 235.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月28日 星期六 00时52分20秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int n;
vector<int> chosen;
void calc(int x) {
    if (x == n + 1) {
        for (int i = 0; i < chosen.size(); i++) {
            cout << chosen[i];
        }
        puts("");
        return;
    }
    calc(x + 1);
    chosen.push_back(x);
    calc(x + 1);
    chosen.pop_back();
}

int main() {
    cin >> n;
    calc(1);
    return 0;
}
