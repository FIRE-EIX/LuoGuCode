//
// Created by XIE on 2021/4/19.
// https://www.luogu.com.cn/problem/P5707

#include <iostream>

using namespace std;

int main() {
    int s, v, t;
    cin >> s >> v;
    if (s % v == 0) t = s / v + 10;
    else t = s / v + 11;
    if (v >= s) cout << "07:49" << endl;
    else if (t % 60 == 0 && t / 60 <= 8) {
        cout << "0" << 8 - (t / 60) << ":00";
    } else if (t % 60 == 0 && t / 60 > 8) {
        if (32 - (t / 60) < 10) cout << "0" << 32 - (t / 60) << ":00";
        else cout << 32 - (t / 60) << ":00";
    } else if (t % 60 != 0 && t / 60 < 8) {
        if (60 - (t % 60) >= 10) cout << "0" << 8 - (t / 60) - 1 << ":" << 60 - (t % 60);
        else cout << "0" << 8 - (t / 60) - 1 << ":0" << 60 - (t % 60);
    } else {
        if (32 - (t / 60) < 10) {
            if (60 - (t % 60) >= 10) cout << "0" << 32 - (t / 60) << ":" << 60 - (t % 60);
            else cout << "0" << 32 - (t / 60) << ":0" << 60 - (t % 60);
        } else {
            if (60 - (t % 60) >= 10) cout << 32 - (t / 60) - 1 << ":" << 60 - (t % 60);
            else cout << 32 - (t / 60) - 1 << ":0" << 60 - (t % 60);
        }
    }
    return 0;
}
