/*************************************************************************
	> File Name: 212.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年09月19日 星期四 19时30分12秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10][21];
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    } 
    char temp[21];
	for (int i = 0; i < 10; i++) {
        int m = i;
        for (int j = 0; j < 10; j++) {
            if (strcmp(str[m], str[j]) < 0) {
                m = j;
            }
            strcpy(temp, str[i]);
            strcpy(str[i], str[m]);
            strcpy(str[m], temp);
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }    
    return 0;
}
