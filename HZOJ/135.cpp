/*************************************************************************
	> File Name: 135.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年08月24日 星期六 15时50分28秒
 ************************************************************************/

#include <iostream>
using namespace std;

int jundge(int y, int m) {
    if ( m== 1 || m == 3 || m == 5 || m==7|| m==8|| m==10|| m == 12 ) return  31;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    if (m == 2 && y % 4 == 0 && y % 100 != 0 || y % 400 == 0)  return 29;
    else return 28;
}

int main() {
    int n;
    cin >> n;
    int y, m, d;
    cin >> y >> m  >> d;
    int a;
    int b = d + n;
    if ((d + n) < jundge(y, m)) {
        cout << y << " " << m << " " << d + n << endl;
        return 0;
    }
    while (b) {
        a = jundge(y, m);
        if (a < d + n) {
            if (b > a) {
                b = b - a;
            } else break;
            if (m == 12) {
                y++;
                m = 1;
            } else {
                m++;
            }
        }
    }
    d = b;
    cout << y << " " << m << " " << d << endl;
    return 0;
}
