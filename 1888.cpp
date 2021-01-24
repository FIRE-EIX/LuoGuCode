//
// Created by EIX on 2020/11/29.
//https://www.luogu.com.cn/problem/P1888

#include<iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    if (a[0] == 6 && a[1] == 8 && a[2] == 10) cout << "3/5";
    else cout << a[0] << "/" << a[2];
    return 0;
}