/*************************************************************************
	> File Name: 281.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月21日 星期三 16时07分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 1000000

struct Node {
    int flag;
    int next[26];
} tree[MAX_N + 5];
int root = 1, cnt = 1;
char str[MAX_N + 5];

int getNode() { return ++cnt; }
void insert(const char *str) {
    int p = root;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - 'a';
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getNode();
        p = tree[p].next[ind];
    }
    tree[p].flag += 1;
    return ;
}

int query(const char *str) {
    int p = root, cnt = 0;
    for (int i = 0; str[i] && p; i++) {
        p = tree[p].next[str[i] - 'a'];
        cnt += tree[p].flag;
    }
    return cnt;
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        insert(str);
    }
    for (int i = 0; i < m; i++) {
        cin >> str;
        cout << query(str) << endl;
    }
    return 0;
}
