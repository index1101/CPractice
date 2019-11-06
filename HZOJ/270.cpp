#include <iostream>

using namespace std;
#define MAX_N 300000
int q[MAX_N + 5], head, tail;
long long arr[MAX_N + 5];

int main() {
    int n, m;
    long long ans;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i], arr[i] += arr[i - 1];
    }
    head = tail = 0;
    q[tail++] = 0;
    ans = arr[1];
    for (int i = 1; i <= n; i++) {
        ans = max(ans, arr[i] - arr[q[head]]);
        while (tail - head && arr[q[tail - 1]] >= arr[i])  tail--;
        q[tail++] = i;
        if (q[head] == i - m) head++;
    }    
    cout << ans <<endl;
    return 0;
}
