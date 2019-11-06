/*************************************************************************
	> File Name: 166.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月22日 星期日 18时03分56秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 100000

char a[MAX_N + 5];
char b[MAX_N + 5];
char c[MAX_N * 2 + 5];

char *insert(char *a, char *b, int n) {
    int len1, len2;
    len1 = strlen(a);
    len2 = strlen(b);
    if (n == 1) {
        strcpy(c, strcat(b, a));
        return c;
    } else {
        for (int i = 0; i < n - 1; i++) {
            c[i] = a[i];
        }
        for (int i = n - 1; i < n + len2 - 1; i++) {
            c[i] = b[i - n + 1];
        }
        for (int i = n + len2 - 1; i < len1 + len2; i++) {
            c[i] = a[i - len2];
        }
        return c;
    }
} 

int main() {
    int n, len1, len2, ans;
    cin >> a;
    cin >> n;
    cin >> b;
    len1 = strlen(a);
    len2 = strlen(b);
    if (len1 > 100) cout << 100 << endl;
    else cout << len1 << endl;
    strcpy(c, insert(a, b, n));
    cout << c << endl;
    for (int i = len1 + len2 - 1; i > 0; i--) {
        if (c[i] == 'x') {
            ans = len1 + len2 - i;
            cout << ans <<endl;
            break;
        }
    }
    return 0;
}
