/*************************************************************************
	> File Name: 266.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月02日 星期三 14时16分31秒
 ************************************************************************/

#include <iostream>
using namespace std;

bool isValid(char *s) {
    int lnum = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        switch (s[i]) {
            case '(' : ++lnum; break;
            case ')' : --lnum; break;
            default : return false;
        }
        if (lnum >= 0) continue;
        return false;
    }
    return lnum == 0;
}

int main() {
    char *s;
    cin >> s;

    return 0;
}
