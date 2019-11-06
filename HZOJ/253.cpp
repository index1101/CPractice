#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 5000
struct Range {
int x, y;
} arr[MAX_N + 5];

int cnt[MAX_N + 5];

int cmp (const Range &a, const Range &b) {
    if (a.y - b.y) return a.y < b.y;
    return a.x > b.x;
}
int main() {
    int n, m;
    int a, b;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        cnt[a] += b;  
    }
    sort(arr, arr + n, cmp);
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int flag = -1, j;
        for ( j = arr[i].x; j < arr[i].y && flag == -1; j++) {
            if (cnt[j] == 0) continue;
            flag = j;
        }
        if (flag != -1) cnt[j] -= 1, ans += 1;

    }    
    cout << ans << endl;
    return 0;
}
