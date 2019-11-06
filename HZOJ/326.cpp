/*************************************************************************
	> File Name: 326.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月22日 星期四 16时50分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100000

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5];
    void init(int n) {
        for (int i= 1; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        val[x] %= 3;
        return fa[x] = root;
    }
    void merge(int a, int b, int c) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = (c + val[b] - val[a] + 3) % 3;
        return ;
    }
};

UnionSet u;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    u.init(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (b > n || c > n) {
            cnt ++;
            continue;
        }
        if (a == 1) {
            if (u.get(b) != u.get(c)) {
                u.merge(b, c, 0);    
            } else {
                if (u.val[b] != u.val[c]) cnt++;
            }
        } else {
            if (u.get(b) != u.get(c)) {
            u.merge(b, c, 1);
            } else {
                if ((1 + u.val[c] - u.val[b]) % 3) cnt++;
            } 
        }
    }
    cout << cnt << endl;
    return 0;
}
