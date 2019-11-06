/*************************************************************************
	> File Name: 283.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月22日 星期四 14时01分13秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define MAX_N 100000
char str[MAX_N + 5];

struct Node {
    int flag;
    int next[10];
} tree[MAX_N + 5];
int root = 1, cnt = 0;

int getNode() {
    return ++cnt;
}

void insert(const char *str) {
    int p = root;

    for (int i = 0; str[i]; i++) {
        int ind = str[i] - '0';
        tree[p].flag = 0;
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getNode();
        p = tree[p].next[ind];
    }
    tree[p].flag += 1;
    return ;
}

int query() {
    int p = root;
    while (tree[p].next[0]) {
        for (int i = 0; i < 10; i++) {
            p = tree[p].next[i];
            if (tree[p].flag) return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        insert(str);
    }

    int ans = query();
    if (ans == 1) {
            cout << "NO" << endl;
            return 0;
    } 
    cout << "YES" << endl;
    return 0;
}
