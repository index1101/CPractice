/*************************************************************************
	> File Name: 256.cpp
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年10月08日 星期二 20时24分00秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Data{
    int a, b;
    bool operator<(const Data &obj) const {
        return a * b < obj.a * obj.b;
    }
};
vector<Data> arr;

struct BigInt {
    BigInt(int x) {
        num.push_back(x);
        proccess_digit();
    }
    BigInt(vector<int>) {

    }
    BigInt operator/(int x) {
        int i = num.size(), temp = 0;
        while (i && temp * 10 + num[i - 1] < x) temp = temp * 10 + num[i - 1], i--;
        if (i == 0) return BigInt(0);
        vector<int> ret(i);
        while (i) {
            temp = temp * 10 + num[i - 1];
            ret[i] = temp / x;
            temp %= x;
        }
    }

    void operator*=(int x) {

    }
    void proccess_digit() {
        for (int i = 0; i < num.size(); i++) {

        }
    }
    vector<int> num;
};

ostream &operator<<(ostream &out, const BigInt &obj) {
    for (int i = obj.num.size() - 1; i >= 0; i--) {
        out << obj.num[i];
    }
    return out;
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> a >> b;
        arr.push_back({a, b});
    }
    sort(arr.begin() + 1, arr.end());
    BigInt p = arr[0].a, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (p / arr[i].b > ans) ans = p / arr[i].b;
        p *= arr[i].a;
    }
    cout << ans << endl;
    return 0;
}
