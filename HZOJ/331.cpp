/*************************************************************************
	> File Name: 331.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月23日 星期五 20时53分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 80000

int arr[MAX_N + 5];

int main() {//2分法 时间复杂度n(logn)*(logn)
    int n;
    cin >> n;
    memset(arr, 1, sizeof(int) * n);
    arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i]; 
    }
        
    return 0;
}
