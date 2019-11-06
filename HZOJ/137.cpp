/*************************************************************************
	> File Name: 137.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月20日 星期二 18时39分38秒
 ************************************************************************/

#include<iostream>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    char a = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << (char)(a +  m);
            m++;
        }
        cout << endl;
    } 
    return 0;
}
