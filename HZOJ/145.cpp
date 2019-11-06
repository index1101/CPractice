/*************************************************************************
	> File Name: 145.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月16日 星期五 21时00分00秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;


int main() {
    int n;
    char  str[100][21];
    cin >> n;
    int ans = 0;
    char temp[100];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        if (strlen(str[i]) > ans) {
            strcpy(temp, str[i]);
            ans = strlen(str[i]);
        }
    }
    cout << temp << endl;
    return 0;
}
