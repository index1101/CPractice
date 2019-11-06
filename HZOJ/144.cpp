/*************************************************************************
	> File Name: 144.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月16日 星期五 20时49分12秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;

char str[100];

int main() {
    cin >> str;
    int ans = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'A') ans += 1;
    }
    cout << ans << endl;
    return 0;
}
