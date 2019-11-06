/*************************************************************************
	> File Name: 327.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月22日 星期四 19时32分13秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
//带权并查集
//排序
//最小最大怨气值
#define MAX_N 100000

struct Data {
    int a, b;
    long long c;
} arr[MAX_N + 5];

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        val[x] %= 2;
        return fa[x] = root;
    }
    void merge(int a, int b, int c) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = (c + val[b] - val[a] + 2) % 2;
        return ; 
    }
};

UnionSet u;

bool cmp(const Data &a, const Data &b) {
    return a.c > b.c;
}

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n);
    for (int i = 0; i < m; i++) {
        cin >> arr[i].a >> arr[i].b >> arr[i].c;
    } 
    sort(arr, arr + m, cmp);
    int ans = 0;
    for (int i = 0; i < m; i++) {
        if ( u.get(arr[i].a) != u.get(arr[i].b)) {
            u.merge(arr[i].a, arr[i].b, 1);
        } else if (((u.val[arr[i].b] - u.val[arr[i].a]) % 2) == 0){
            ans = arr[i].c;
            if (ans) break;
        } else {
            u.merge(arr[i].a, arr[i].b, 1);
        }
    }
    cout << ans << endl;
    return 0;
}
