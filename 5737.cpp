//
// Created by XIE on 2021/2/25.
// https://www.luogu.com.cn/problem/P5737

#include <iostream>

using namespace std;

int main() {
    int a, a1, b, flag = 0, cnt = 0;
    cin >> a >> b;
    a1 = a;
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        flag = 1;
    }
    if (flag == 1) {
        cnt++;
        a1 += 4;
    } else {
        a1 = a1 - a1 % 4 + 4;
    }
    for (; a1 <= b; a1 += 4) {
        if ((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)) cnt++;
    }
    cout << cnt << endl;
    if (flag == 1) {
        cout << a << " ";
        a += 4;
    } else {
        a = a - a % 4 + 4;
    }
    for (; a <= b; a += 4) {
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) cout << a << " ";
    }
    return 0;
}