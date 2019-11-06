/*************************************************************************
	> File Name: 333.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月24日 星期六 20时52分55秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 500000
#define lc(ind) tree[ind].lind
#define rc(ind) tree[ind].rind
#define SUM(ind) tree[ind].sum
#define MAX(ind) tree[ind].m
#define LMAX(ind) tree[ind].lm
#define RMAX(ind) tree[ind].rm

struct node {
    int sum, m, lm, rm;
    int lind, rind;
} tree[(MAX_N << 1) + 5];
int root = 3, cnt = 4, ans = 0, temp = 1;
inline int getNode() { return cnt++; }

void UP(int a, int b, int c) {
    SUM(a) = SUM(b) + SUM(c);
    LMAX(a) = max(LMAX(b), SUM(b)) + LMAX(c);
    RMAX(a) = max(RMAX(c), SUM(c)) + RMAX(b);
    MAX(a) = max(MAX(b), MAX(c));
    MAX(a) = max(MAX(a), RMAX(b)) + 
}

void 
void build(int ind, int l, int r) {
    if (l == r) {
        SUM(ind) = MAX(ind) = LMAX(ind) = RMAX(ind) = arr[l];
        return ;
    }
    int mid = (l + r) >> 1;
    lc(ind) = getNode();
    rc(ind) = getNode();
    build(lc(ind), l, mid);
    build(rc(ind), mid + 1, r);
    UP(ind);
}

void modify(int ind, int x, int y, int l, int r) {
    if (l == r) {
        SUM(ind) = MAX(ind) = LMAX(ind) = RMAX(ind) = y;
        return ;
    } 
    int mid = (l + r) >> 1;
    if (x <= mid) modify(lc(ind), x, y, l, mid);
    else
    return ;
}

int query(int ind, int x, int y, int l, int r) {
    if (x <= l && r <= y) {
        if (x == l) tree[ans] = tree[ind];
        else {
            UP(temp, ans, ind);
            swap(temp, ans);
        }
        return ans;
    }
    int mid = (l + r) >> 1;
    if (x <= mid) query(lc(ind), x, y, l, mid);
    if (y > mid) query(rc(ind), x, y, mid + 1, r);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    build(root, 1, n);
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            query(root, b, c, 1, n);
            cout << MAX(ans) << endl;
        } else {
            modify(root, b, c, 1, n);
        }
    }
    return 0;
}
