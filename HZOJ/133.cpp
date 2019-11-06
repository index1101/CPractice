/*************************************************************************
	> File Name: 133.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月24日 星期六 16时11分31秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (j > i) printf("\t");
            printf("%d*%d=%d", i, j, i * j);
            
        }
        cout << endl;
    }
    return 0;
}
