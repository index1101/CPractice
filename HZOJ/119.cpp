/*************************************************************************
	> File Name: 29.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月19日 星期五 20时41分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
int jundge(int y, int m) {
    if ( m== 1 || m == 3 || m == 5 || m==7|| m==8|| m==10|| m == 12 ) return  31;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    if (m == 2 && y % 4 == 0 && y % 100 != 0 || y % 400 == 0)  return 29;
    else return 28;

}
int main() {
    int y, m, d;
    
    cin >> y >> m >> d;
    if (m == 1 && d == 1) {
        cout << y - 1 << " " << 12 << " " << 31 << endl;
        cout << y  << " " << m << " " << d + 1 << endl;
        return 0;
    }
    if (m == 12  && d == jundge(y,m)){
        cout << y << " " << m << " "<< d - 1 << endl;
        cout << y + 1 << " " << 1 <<" "<< 1 << endl;
        return 0;        
    }
    if (d == 1) {
        cout << y <<" "<< m - 1 <<" "<< jundge(y, m - 1) << endl;
        cout << y <<" "<< m <<" "<< d + 1 << endl;
        return 0;
    }
    if (d == jundge(y, m)) {
        cout << y <<" "<< m <<" " << d - 1 << endl;
        cout << y <<" "<<  m + 1 <<" "<< 1 << endl;
        return 0;
    }
    cout << y <<" "<< m <<" "<< d - 1 <<endl;
    cout << y <<" "<< m <<" "<< d + 1 << endl;
    return 0;
}
