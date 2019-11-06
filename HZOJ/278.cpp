/*************************************************************************
	> File Name: 278.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月16日 星期五 14时04分02秒
 ************************************************************************/

#include<iostream>

using namespace std;

#define MAX_N 1000000
char str[MAX_N + 5];
int nxt[MAX_N + 5];
int ans[MAX_N + 5];

void get_next(char *str, int *nxt) {
    nxt[0] = -1;
    int j = -1;
    for (int i = 1; str[i]; i++) {
        while (j != -1 && str[j + 1] != str[i]) j = nxt[j];
        if (str[j + 1] == str[i]) j += 1;
        nxt[i] = j;
    }
    return ;
}

int main() {
    int l;
    cin >> l;
    cin >> str;
    get_next(str, nxt);
    for (int i = 0; i < l; i++) {
        if (nxt[i] == -1 || i - nxt[i] != ans[nxt[i]]) {
            ans[i] = i + 1;
        }  else {
            ans[i] = ans[nxt[i]];
        }
    }
    for (int i = 0; i < l; i++) {
        if (ans[i] != i + 1 ) cout << i + 1  << " " << i / ans[i] + 1 << endl;
    }
    return 0;
}
